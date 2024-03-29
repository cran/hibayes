// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Bayes
Rcpp::List Bayes(arma::vec& y, arma::mat& X, std::string model, arma::vec Pi, const Nullable<arma::vec> Kival, const Nullable<arma::mat> Ki, const Nullable<arma::mat> C, const Nullable<CharacterMatrix> R, const Nullable<arma::vec> fold, const int niter, const int nburn, const int thin, const Nullable<arma::vec> epsl_y_J, const Nullable<arma::sp_mat> epsl_Gi, const Nullable<arma::uvec> epsl_index, const Nullable<double> dfvr, const Nullable<double> s2vr, const Nullable<double> vg, const Nullable<double> dfvg, const Nullable<double> s2vg, const Nullable<double> ve, const Nullable<double> dfve, const Nullable<double> s2ve, const Nullable<arma::uvec> windindx, const int outfreq, const int threads, const bool verbose);
RcppExport SEXP _hibayes_Bayes(SEXP ySEXP, SEXP XSEXP, SEXP modelSEXP, SEXP PiSEXP, SEXP KivalSEXP, SEXP KiSEXP, SEXP CSEXP, SEXP RSEXP, SEXP foldSEXP, SEXP niterSEXP, SEXP nburnSEXP, SEXP thinSEXP, SEXP epsl_y_JSEXP, SEXP epsl_GiSEXP, SEXP epsl_indexSEXP, SEXP dfvrSEXP, SEXP s2vrSEXP, SEXP vgSEXP, SEXP dfvgSEXP, SEXP s2vgSEXP, SEXP veSEXP, SEXP dfveSEXP, SEXP s2veSEXP, SEXP windindxSEXP, SEXP outfreqSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Pi(PiSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::vec> >::type Kival(KivalSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::mat> >::type Ki(KiSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::mat> >::type C(CSEXP);
    Rcpp::traits::input_parameter< const Nullable<CharacterMatrix> >::type R(RSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::vec> >::type fold(foldSEXP);
    Rcpp::traits::input_parameter< const int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< const int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::vec> >::type epsl_y_J(epsl_y_JSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::sp_mat> >::type epsl_Gi(epsl_GiSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type epsl_index(epsl_indexSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type dfvr(dfvrSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type s2vr(s2vrSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type vg(vgSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type dfvg(dfvgSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type s2vg(s2vgSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type ve(veSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type dfve(dfveSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type s2ve(s2veSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type windindx(windindxSEXP);
    Rcpp::traits::input_parameter< const int >::type outfreq(outfreqSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Bayes(y, X, model, Pi, Kival, Ki, C, R, fold, niter, nburn, thin, epsl_y_J, epsl_Gi, epsl_index, dfvr, s2vr, vg, dfvg, s2vg, ve, dfve, s2ve, windindx, outfreq, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// SBayesD
Rcpp::List SBayesD(arma::mat sumstat, arma::mat ldm, std::string model, arma::vec Pi, const int niter, const int nburn, const int thin, const Nullable<arma::vec> fold, const Nullable<arma::uvec> windindx, const Nullable<double> vg, const Nullable<double> dfvg, const Nullable<double> s2vg, const Nullable<double> ve, const Nullable<double> dfve, const Nullable<double> s2ve, const int outfreq, const int threads, const bool verbose);
RcppExport SEXP _hibayes_SBayesD(SEXP sumstatSEXP, SEXP ldmSEXP, SEXP modelSEXP, SEXP PiSEXP, SEXP niterSEXP, SEXP nburnSEXP, SEXP thinSEXP, SEXP foldSEXP, SEXP windindxSEXP, SEXP vgSEXP, SEXP dfvgSEXP, SEXP s2vgSEXP, SEXP veSEXP, SEXP dfveSEXP, SEXP s2veSEXP, SEXP outfreqSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type sumstat(sumstatSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ldm(ldmSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Pi(PiSEXP);
    Rcpp::traits::input_parameter< const int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< const int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::vec> >::type fold(foldSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type windindx(windindxSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type vg(vgSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type dfvg(dfvgSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type s2vg(s2vgSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type ve(veSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type dfve(dfveSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type s2ve(s2veSEXP);
    Rcpp::traits::input_parameter< const int >::type outfreq(outfreqSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(SBayesD(sumstat, ldm, model, Pi, niter, nburn, thin, fold, windindx, vg, dfvg, s2vg, ve, dfve, s2ve, outfreq, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// SBayesS
Rcpp::List SBayesS(arma::mat sumstat, arma::sp_mat ldm, std::string model, arma::vec Pi, const int niter, const int nburn, const int thin, const Nullable<arma::vec> fold, const Nullable<arma::uvec> windindx, const Nullable<double> vg, const Nullable<double> dfvg, const Nullable<double> s2vg, const Nullable<double> ve, const Nullable<double> dfve, const Nullable<double> s2ve, const int outfreq, const int threads, const bool verbose);
RcppExport SEXP _hibayes_SBayesS(SEXP sumstatSEXP, SEXP ldmSEXP, SEXP modelSEXP, SEXP PiSEXP, SEXP niterSEXP, SEXP nburnSEXP, SEXP thinSEXP, SEXP foldSEXP, SEXP windindxSEXP, SEXP vgSEXP, SEXP dfvgSEXP, SEXP s2vgSEXP, SEXP veSEXP, SEXP dfveSEXP, SEXP s2veSEXP, SEXP outfreqSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type sumstat(sumstatSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type ldm(ldmSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Pi(PiSEXP);
    Rcpp::traits::input_parameter< const int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< const int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::vec> >::type fold(foldSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type windindx(windindxSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type vg(vgSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type dfvg(dfvgSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type s2vg(s2vgSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type ve(veSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type dfve(dfveSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type s2ve(s2veSEXP);
    Rcpp::traits::input_parameter< const int >::type outfreq(outfreqSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(SBayesS(sumstat, ldm, model, Pi, niter, nburn, thin, fold, windindx, vg, dfvg, s2vg, ve, dfve, s2ve, outfreq, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// conjgt_spa
Rcpp::List conjgt_spa(const NumericMatrix sumstat, const arma::sp_mat ldm, const Nullable<NumericVector> lambda, const double esp, const int outfreq, const bool verbose);
RcppExport SEXP _hibayes_conjgt_spa(SEXP sumstatSEXP, SEXP ldmSEXP, SEXP lambdaSEXP, SEXP espSEXP, SEXP outfreqSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type sumstat(sumstatSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type ldm(ldmSEXP);
    Rcpp::traits::input_parameter< const Nullable<NumericVector> >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type esp(espSEXP);
    Rcpp::traits::input_parameter< const int >::type outfreq(outfreqSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(conjgt_spa(sumstat, ldm, lambda, esp, outfreq, verbose));
    return rcpp_result_gen;
END_RCPP
}
// conjgt_den
Rcpp::List conjgt_den(const NumericMatrix sumstat, const arma::mat ldm, const Nullable<NumericVector> lambda, const double esp, const int outfreq, const bool verbose);
RcppExport SEXP _hibayes_conjgt_den(SEXP sumstatSEXP, SEXP ldmSEXP, SEXP lambdaSEXP, SEXP espSEXP, SEXP outfreqSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type sumstat(sumstatSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type ldm(ldmSEXP);
    Rcpp::traits::input_parameter< const Nullable<NumericVector> >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type esp(espSEXP);
    Rcpp::traits::input_parameter< const int >::type outfreq(outfreqSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(conjgt_den(sumstat, ldm, lambda, esp, outfreq, verbose));
    return rcpp_result_gen;
END_RCPP
}
// cutwind_by_bp
arma::vec cutwind_by_bp(const arma::vec& chr, const arma::vec& pos, double bp);
RcppExport SEXP _hibayes_cutwind_by_bp(SEXP chrSEXP, SEXP posSEXP, SEXP bpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pos(posSEXP);
    Rcpp::traits::input_parameter< double >::type bp(bpSEXP);
    rcpp_result_gen = Rcpp::wrap(cutwind_by_bp(chr, pos, bp));
    return rcpp_result_gen;
END_RCPP
}
// cutwind_by_num
arma::vec cutwind_by_num(const arma::vec& chr, const arma::vec& pos, int fixN);
RcppExport SEXP _hibayes_cutwind_by_num(SEXP chrSEXP, SEXP posSEXP, SEXP fixNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pos(posSEXP);
    Rcpp::traits::input_parameter< int >::type fixN(fixNSEXP);
    rcpp_result_gen = Rcpp::wrap(cutwind_by_num(chr, pos, fixN));
    return rcpp_result_gen;
END_RCPP
}
// rMap_c
List rMap_c(std::string map_file, const Nullable<std::string> out);
RcppExport SEXP _hibayes_rMap_c(SEXP map_fileSEXP, SEXP outSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type map_file(map_fileSEXP);
    Rcpp::traits::input_parameter< const Nullable<std::string> >::type out(outSEXP);
    rcpp_result_gen = Rcpp::wrap(rMap_c(map_file, out));
    return rcpp_result_gen;
END_RCPP
}
// read_bed
void read_bed(std::string bfile, const SEXP pBigMat, const long maxLine, const bool impt, const bool d, const int threads);
RcppExport SEXP _hibayes_read_bed(SEXP bfileSEXP, SEXP pBigMatSEXP, SEXP maxLineSEXP, SEXP imptSEXP, SEXP dSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type bfile(bfileSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const long >::type maxLine(maxLineSEXP);
    Rcpp::traits::input_parameter< const bool >::type impt(imptSEXP);
    Rcpp::traits::input_parameter< const bool >::type d(dSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    read_bed(bfile, pBigMat, maxLine, impt, d, threads);
    return R_NilValue;
END_RCPP
}
// make_grm
SEXP make_grm(arma::mat& Z, double lambda, bool inverse, bool eigen, bool verbose);
RcppExport SEXP _hibayes_make_grm(SEXP ZSEXP, SEXP lambdaSEXP, SEXP inverseSEXP, SEXP eigenSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    Rcpp::traits::input_parameter< bool >::type eigen(eigenSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(make_grm(Z, lambda, inverse, eigen, verbose));
    return rcpp_result_gen;
END_RCPP
}
// make_ped
List make_ped(std::vector<std::string>& pvec, std::vector<std::string>& svec, std::vector<std::string>& dvec, bool verbose);
RcppExport SEXP _hibayes_make_ped(SEXP pvecSEXP, SEXP svecSEXP, SEXP dvecSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type pvec(pvecSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type svec(svecSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type dvec(dvecSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(make_ped(pvec, svec, dvec, verbose));
    return rcpp_result_gen;
END_RCPP
}
// make_Ainv
SEXP make_Ainv(std::vector<int> s, std::vector<int> d, bool verbose);
RcppExport SEXP _hibayes_make_Ainv(SEXP sSEXP, SEXP dSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type s(sSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type d(dSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(make_Ainv(s, d, verbose));
    return rcpp_result_gen;
END_RCPP
}
// geno_impute
SEXP geno_impute(arma::sp_mat& Ang, arma::mat& geno, int threads);
RcppExport SEXP _hibayes_geno_impute(SEXP AngSEXP, SEXP genoSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat& >::type Ang(AngSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(geno_impute(Ang, geno, threads));
    return rcpp_result_gen;
END_RCPP
}
// BigStat
SEXP BigStat(SEXP pBigMat, const int threads);
RcppExport SEXP _hibayes_BigStat(SEXP pBigMatSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(BigStat(pBigMat, threads));
    return rcpp_result_gen;
END_RCPP
}
// tXXmat_Geno
SEXP tXXmat_Geno(SEXP pBigMat, const Nullable<double> chisq, const int threads, const bool verbose);
RcppExport SEXP _hibayes_tXXmat_Geno(SEXP pBigMatSEXP, SEXP chisqSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type chisq(chisqSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(tXXmat_Geno(pBigMat, chisq, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// tXXmat_Geno_gwas
SEXP tXXmat_Geno_gwas(SEXP pBigMat, SEXP gwasgeno, const LogicalVector refindx, const NumericVector gwasindx, const Nullable<double> chisq, const int threads, const bool verbose);
RcppExport SEXP _hibayes_tXXmat_Geno_gwas(SEXP pBigMatSEXP, SEXP gwasgenoSEXP, SEXP refindxSEXP, SEXP gwasindxSEXP, SEXP chisqSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type gwasgeno(gwasgenoSEXP);
    Rcpp::traits::input_parameter< const LogicalVector >::type refindx(refindxSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type gwasindx(gwasindxSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type chisq(chisqSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(tXXmat_Geno_gwas(pBigMat, gwasgeno, refindx, gwasindx, chisq, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// tXXmat_Chr
SEXP tXXmat_Chr(SEXP pBigMat, const NumericVector chr, const Nullable<double> chisq, const int threads, const bool verbose);
RcppExport SEXP _hibayes_tXXmat_Chr(SEXP pBigMatSEXP, SEXP chrSEXP, SEXP chisqSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type chisq(chisqSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(tXXmat_Chr(pBigMat, chr, chisq, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}
// tXXmat_Chr_gwas
SEXP tXXmat_Chr_gwas(SEXP pBigMat, const NumericVector chr, SEXP gwasgeno, const NumericVector gwaschr, const LogicalVector refindx, const NumericVector gwasindx, const Nullable<double> chisq, const int threads, const bool verbose);
RcppExport SEXP _hibayes_tXXmat_Chr_gwas(SEXP pBigMatSEXP, SEXP chrSEXP, SEXP gwasgenoSEXP, SEXP gwaschrSEXP, SEXP refindxSEXP, SEXP gwasindxSEXP, SEXP chisqSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type gwasgeno(gwasgenoSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type gwaschr(gwaschrSEXP);
    Rcpp::traits::input_parameter< const LogicalVector >::type refindx(refindxSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type gwasindx(gwasindxSEXP);
    Rcpp::traits::input_parameter< const Nullable<double> >::type chisq(chisqSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(tXXmat_Chr_gwas(pBigMat, chr, gwasgeno, gwaschr, refindx, gwasindx, chisq, threads, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_hibayes_Bayes", (DL_FUNC) &_hibayes_Bayes, 27},
    {"_hibayes_SBayesD", (DL_FUNC) &_hibayes_SBayesD, 18},
    {"_hibayes_SBayesS", (DL_FUNC) &_hibayes_SBayesS, 18},
    {"_hibayes_conjgt_spa", (DL_FUNC) &_hibayes_conjgt_spa, 6},
    {"_hibayes_conjgt_den", (DL_FUNC) &_hibayes_conjgt_den, 6},
    {"_hibayes_cutwind_by_bp", (DL_FUNC) &_hibayes_cutwind_by_bp, 3},
    {"_hibayes_cutwind_by_num", (DL_FUNC) &_hibayes_cutwind_by_num, 3},
    {"_hibayes_rMap_c", (DL_FUNC) &_hibayes_rMap_c, 2},
    {"_hibayes_read_bed", (DL_FUNC) &_hibayes_read_bed, 6},
    {"_hibayes_make_grm", (DL_FUNC) &_hibayes_make_grm, 5},
    {"_hibayes_make_ped", (DL_FUNC) &_hibayes_make_ped, 4},
    {"_hibayes_make_Ainv", (DL_FUNC) &_hibayes_make_Ainv, 3},
    {"_hibayes_geno_impute", (DL_FUNC) &_hibayes_geno_impute, 3},
    {"_hibayes_BigStat", (DL_FUNC) &_hibayes_BigStat, 2},
    {"_hibayes_tXXmat_Geno", (DL_FUNC) &_hibayes_tXXmat_Geno, 4},
    {"_hibayes_tXXmat_Geno_gwas", (DL_FUNC) &_hibayes_tXXmat_Geno_gwas, 7},
    {"_hibayes_tXXmat_Chr", (DL_FUNC) &_hibayes_tXXmat_Chr, 5},
    {"_hibayes_tXXmat_Chr_gwas", (DL_FUNC) &_hibayes_tXXmat_Chr_gwas, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_hibayes(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
