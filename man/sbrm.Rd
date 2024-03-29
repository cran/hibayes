% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/sbayes.r
\name{sbrm}
\alias{sbrm}
\title{SBayes model}
\usage{
sbrm(
  sumstat,
  ldm,
  method = c("BayesB", "BayesA", "BayesL", "BayesRR", "BayesBpi", "BayesC", "BayesCpi",
    "BayesR", "CG"),
  map = NULL,
  Pi = NULL,
  lambda = NULL,
  fold = NULL,
  niter = NULL,
  nburn = NULL,
  thin = 5,
  windsize = NULL,
  windnum = NULL,
  vg = NULL,
  dfvg = NULL,
  s2vg = NULL,
  ve = NULL,
  dfve = NULL,
  s2ve = NULL,
  printfreq = 100,
  seed = 666666,
  threads = 4,
  verbose = TRUE
)
}
\arguments{
\item{sumstat}{matrix of summary data, details refer to https://cnsgenomics.com/software/gcta/#COJO.}

\item{ldm}{dense or sparse matrix, ld for reference panel (m * m, m is the number of SNPs). NOTE that the order of SNPs should be consistent with summary data.}

\item{method}{bayes methods including: "BayesB", "BayesA", "BayesL", "BayesRR", "BayesBpi", "BayesC", "BayesCpi", "BayesR", "CG".
\itemize{
\item "BayesRR": Bayes Ridge Regression, all SNPs have non-zero effects and share the same variance, equals to RRBLUP or GBLUP.
\item "BayesA": all SNPs have non-zero effects, and take different variance which follows an inverse chi-square distribution.
\item "BayesB": only a small proportion of SNPs (1-Pi) have non-zero effects, and take different variance which follows an inverse chi-square distribution.
\item "BayesBpi": the same with "BayesB", but 'Pi' is not fixed.
\item "BayesC": only a small proportion of SNPs (1-Pi) have non-zero effects, and share the same variance.
\item "BayesCpi": the same with "BayesC", but 'Pi' is not fixed.
\item "BayesL": BayesLASSO, all SNPs have non-zero effects, and take different variance which follows an exponential distribution.
\item "BayesR": only a small proportion of SNPs have non-zero effects, and the SNPs are allocated into different groups, each group has the same variance.
\item "CG": conjugate gradient algorithm with assigned lambda.
}}

\item{map}{(optional, only for GWAS) the map information of genotype, at least 3 columns are: SNPs, chromosome, physical position.}

\item{Pi}{vector, the proportion of zero effect and non-zero effect SNPs, the first value must be the proportion of non-effect markers.}

\item{lambda}{value or vector, the ridge regression value for each SNPs.}

\item{fold}{percentage of variance explained for groups of SNPs, the default is c(0, 0.0001, 0.001, 0.01).}

\item{niter}{the number of MCMC iteration.}

\item{nburn}{the number of iterations to be discarded.}

\item{thin}{the number of thinning after burn-in. Note that smaller thinning frequency may have higher accuracy of estimated parameters, but would result in more memory for collecting process, on contrary, bigger frequency may have negative effect on accuracy of estimations.}

\item{windsize}{window size in bp for GWAS, the default is 1e6.}

\item{windnum}{fixed number of SNPs in a window for GWAS, if it is specified, 'windsize' will be invalid, the default is NULL.}

\item{vg}{prior value of genetic variance.}

\item{dfvg}{the number of degrees of freedom for the distribution of genetic variance.}

\item{s2vg}{scale parameter for the distribution of genetic variance.}

\item{ve}{prior value of residual variance.}

\item{dfve}{the number of degrees of freedom for the distribution of residual variance.}

\item{s2ve}{scale parameter for the distribution of residual variance.}

\item{printfreq}{frequency of collecting the estimated parameters and printing on console. Note that smaller frequency may have higher accuracy of estimated parameters, but would result in more time and memory for collecting process, on contrary, bigger frequency may have an negative effect on accuracy of estimations.}

\item{seed}{seed for random sample.}

\item{threads}{number of threads used for OpenMP.}

\item{verbose}{whether to print the iteration information on console.}
}
\value{
the function returns a 'blrMod' object containing
\describe{
\item{$pi}{estimated proportion of zero effect and non-zero effect SNPs}
\item{$Vg}{estimated genetic variance}
\item{$Ve}{estimated residual variance}
\item{$h2}{estimated heritability (h2 = Vg / (Vg + Ve))}
\item{$alpha}{estimated effect size of all markers}
\item{$pip}{the frequency for markers to be included in the model during MCMC iteration, also known as posterior inclusive probability (PIP)}
\item{$gwas}{WPPA is defined to be the window posterior probability of association, it is estimated by counting the number of MCMC samples in which \deqn{\alpha} is nonzero for at least one SNP in the window}
\item{$MCMCsamples}{the collected samples of posterior estimation for all the above parameters across MCMC iterations}
}
}
\description{
Bayes linear regression model using summary level data
}
\details{
\itemize{
\item{if any one of the options 'windsize' and 'windnum' is specified, the GWAS results will be returned, and the 'map' information must be provided, in which the physical positions should be all in digital values.}
\item{the 'windsize' or 'windnum' option only works for the methods of which the assumption has a proportion of zero effect markers, e.g., BayesB, BayesBpi, BayesC, BayesCpi, BSLMM, and BayesR.}
}
}
\examples{
bfile_path = system.file("extdata", "demo", package = "hibayes")
bin = read_plink(bfile_path, threads=1)
fam = bin$fam
geno = bin$geno
map = bin$map

sumstat_path = system.file("extdata", "demo.ma", package = "hibayes")
sumstat = read.table(sumstat_path, header=TRUE)
head(sumstat)

\donttest{
# computate ld variance covariance matrix
## construct genome wide full variance-covariance matrix
ldm1 <- ldmat(geno, threads=4)	
## construct genome wide sparse variance-covariance matrix
# ldm2 <- ldmat(geno, chisq=5, threads=4)	
## construct chromosome wide full variance-covariance matrix
# ldm3 <- ldmat(geno, map, ldchr=FALSE, threads=4)	
## construct chromosome wide sparse variance-covariance matrix
# ldm4 <- ldmat(geno, map, ldchr=FALSE, chisq=5, threads=4)

# if the order of SNPs in genotype is not consistent with the order in sumstat file, 
# prior adjusting is necessary.
indx = match(map[, 1], sumstat[, 1])
sumstat = sumstat[indx, ]

# fit model
fit = sbrm(sumstat=sumstat, ldm=ldm1, method="BayesCpi", Pi = c(0.95, 0.05), 
	niter=20000, nburn=12000, seed=666666, map=map, windsize=1e6, threads=1)

# overview of the returned results
summary(fit)

# get the SD of estimated SNP effects for markers
summary(fit)$alpha
}

}
\references{
Lloyd-Jones, Luke R., et al. "Improved polygenic prediction by Bayesian multiple regression on summary statistics." Nature communications 10.1 (2019): 1-11.
}
