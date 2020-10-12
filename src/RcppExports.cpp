// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// log_sgt0
double log_sgt0(double x, double sigma, double skew, double p, double q, const bool mean_cent, const bool var_adj);
RcppExport SEXP _rbsvar_log_sgt0(SEXP xSEXP, SEXP sigmaSEXP, SEXP skewSEXP, SEXP pSEXP, SEXP qSEXP, SEXP mean_centSEXP, SEXP var_adjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type skew(skewSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< const bool >::type mean_cent(mean_centSEXP);
    Rcpp::traits::input_parameter< const bool >::type var_adj(var_adjSEXP);
    rcpp_result_gen = Rcpp::wrap(log_sgt0(x, sigma, skew, p, q, mean_cent, var_adj));
    return rcpp_result_gen;
END_RCPP
}
// sgt_bounds
arma::vec sgt_bounds(arma::vec state, int first_sgt, int m);
RcppExport SEXP _rbsvar_sgt_bounds(SEXP stateSEXP, SEXP first_sgtSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type state(stateSEXP);
    Rcpp::traits::input_parameter< int >::type first_sgt(first_sgtSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(sgt_bounds(state, first_sgt, m));
    return rcpp_result_gen;
END_RCPP
}
// log_like
double log_like(arma::vec state, const arma::mat yy, const arma::mat xx, const int first_b, const int first_sgt, const int m, const int A_rows, const int t, const bool mean_cent, const bool var_adj, const bool parallel_likelihood, bool bounds);
RcppExport SEXP _rbsvar_log_like(SEXP stateSEXP, SEXP yySEXP, SEXP xxSEXP, SEXP first_bSEXP, SEXP first_sgtSEXP, SEXP mSEXP, SEXP A_rowsSEXP, SEXP tSEXP, SEXP mean_centSEXP, SEXP var_adjSEXP, SEXP parallel_likelihoodSEXP, SEXP boundsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type state(stateSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type yy(yySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< const int >::type first_b(first_bSEXP);
    Rcpp::traits::input_parameter< const int >::type first_sgt(first_sgtSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const int >::type A_rows(A_rowsSEXP);
    Rcpp::traits::input_parameter< const int >::type t(tSEXP);
    Rcpp::traits::input_parameter< const bool >::type mean_cent(mean_centSEXP);
    Rcpp::traits::input_parameter< const bool >::type var_adj(var_adjSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel_likelihood(parallel_likelihoodSEXP);
    Rcpp::traits::input_parameter< bool >::type bounds(boundsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_like(state, yy, xx, first_b, first_sgt, m, A_rows, t, mean_cent, var_adj, parallel_likelihood, bounds));
    return rcpp_result_gen;
END_RCPP
}
// log_prior
double log_prior(arma::vec state, const arma::mat yy, const arma::mat xx, const int first_b, const int first_sgt, const int m, const int A_rows, const int t, const double p_prior_mode, const double p_prior_scale, const double q_prior_mode, const double q_prior_scale, const double shrinkage);
RcppExport SEXP _rbsvar_log_prior(SEXP stateSEXP, SEXP yySEXP, SEXP xxSEXP, SEXP first_bSEXP, SEXP first_sgtSEXP, SEXP mSEXP, SEXP A_rowsSEXP, SEXP tSEXP, SEXP p_prior_modeSEXP, SEXP p_prior_scaleSEXP, SEXP q_prior_modeSEXP, SEXP q_prior_scaleSEXP, SEXP shrinkageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type state(stateSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type yy(yySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< const int >::type first_b(first_bSEXP);
    Rcpp::traits::input_parameter< const int >::type first_sgt(first_sgtSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const int >::type A_rows(A_rowsSEXP);
    Rcpp::traits::input_parameter< const int >::type t(tSEXP);
    Rcpp::traits::input_parameter< const double >::type p_prior_mode(p_prior_modeSEXP);
    Rcpp::traits::input_parameter< const double >::type p_prior_scale(p_prior_scaleSEXP);
    Rcpp::traits::input_parameter< const double >::type q_prior_mode(q_prior_modeSEXP);
    Rcpp::traits::input_parameter< const double >::type q_prior_scale(q_prior_scaleSEXP);
    Rcpp::traits::input_parameter< const double >::type shrinkage(shrinkageSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prior(state, yy, xx, first_b, first_sgt, m, A_rows, t, p_prior_mode, p_prior_scale, q_prior_mode, q_prior_scale, shrinkage));
    return rcpp_result_gen;
END_RCPP
}
// draw
void draw(arma::mat& draws, arma::vec& densities, arma::vec& asums, int state_row, int last_row, const double gamma, const int K, const int n, const arma::mat& yy, const arma::mat& xx, const int first_b, const int first_sgt, const int m, const int A_rows, const int t, const bool mean_cent, const bool var_adj, const double p_prior_mode, const double p_prior_scale, const double q_prior_mode, const double q_prior_scale, const double shrinkage, const bool parallel_likelihood);
RcppExport SEXP _rbsvar_draw(SEXP drawsSEXP, SEXP densitiesSEXP, SEXP asumsSEXP, SEXP state_rowSEXP, SEXP last_rowSEXP, SEXP gammaSEXP, SEXP KSEXP, SEXP nSEXP, SEXP yySEXP, SEXP xxSEXP, SEXP first_bSEXP, SEXP first_sgtSEXP, SEXP mSEXP, SEXP A_rowsSEXP, SEXP tSEXP, SEXP mean_centSEXP, SEXP var_adjSEXP, SEXP p_prior_modeSEXP, SEXP p_prior_scaleSEXP, SEXP q_prior_modeSEXP, SEXP q_prior_scaleSEXP, SEXP shrinkageSEXP, SEXP parallel_likelihoodSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type draws(drawsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type densities(densitiesSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type asums(asumsSEXP);
    Rcpp::traits::input_parameter< int >::type state_row(state_rowSEXP);
    Rcpp::traits::input_parameter< int >::type last_row(last_rowSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type yy(yySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< const int >::type first_b(first_bSEXP);
    Rcpp::traits::input_parameter< const int >::type first_sgt(first_sgtSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const int >::type A_rows(A_rowsSEXP);
    Rcpp::traits::input_parameter< const int >::type t(tSEXP);
    Rcpp::traits::input_parameter< const bool >::type mean_cent(mean_centSEXP);
    Rcpp::traits::input_parameter< const bool >::type var_adj(var_adjSEXP);
    Rcpp::traits::input_parameter< const double >::type p_prior_mode(p_prior_modeSEXP);
    Rcpp::traits::input_parameter< const double >::type p_prior_scale(p_prior_scaleSEXP);
    Rcpp::traits::input_parameter< const double >::type q_prior_mode(q_prior_modeSEXP);
    Rcpp::traits::input_parameter< const double >::type q_prior_scale(q_prior_scaleSEXP);
    Rcpp::traits::input_parameter< const double >::type shrinkage(shrinkageSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel_likelihood(parallel_likelihoodSEXP);
    draw(draws, densities, asums, state_row, last_row, gamma, K, n, yy, xx, first_b, first_sgt, m, A_rows, t, mean_cent, var_adj, p_prior_mode, p_prior_scale, q_prior_mode, q_prior_scale, shrinkage, parallel_likelihood);
    return R_NilValue;
END_RCPP
}
// sampler
Rcpp::List sampler(const int N, const int n, const int m0, const int K, const double gamma, const arma::vec init_mode, const arma::mat init_scale, const bool output_as_input, const arma::mat old_chain, const bool new_chain, const bool parallel, const bool parallel_likelihood, const arma::mat yy, const arma::mat xx, const int m, const int A_rows, const int t, const bool mean_cent, const bool var_adj, const int first_b, const int first_sgt, const double p_prior_mode, const double p_prior_scale, const double q_prior_mode, const double q_prior_scale, const double shrinkage, const bool progress_bar);
RcppExport SEXP _rbsvar_sampler(SEXP NSEXP, SEXP nSEXP, SEXP m0SEXP, SEXP KSEXP, SEXP gammaSEXP, SEXP init_modeSEXP, SEXP init_scaleSEXP, SEXP output_as_inputSEXP, SEXP old_chainSEXP, SEXP new_chainSEXP, SEXP parallelSEXP, SEXP parallel_likelihoodSEXP, SEXP yySEXP, SEXP xxSEXP, SEXP mSEXP, SEXP A_rowsSEXP, SEXP tSEXP, SEXP mean_centSEXP, SEXP var_adjSEXP, SEXP first_bSEXP, SEXP first_sgtSEXP, SEXP p_prior_modeSEXP, SEXP p_prior_scaleSEXP, SEXP q_prior_modeSEXP, SEXP q_prior_scaleSEXP, SEXP shrinkageSEXP, SEXP progress_barSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type init_mode(init_modeSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type init_scale(init_scaleSEXP);
    Rcpp::traits::input_parameter< const bool >::type output_as_input(output_as_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type old_chain(old_chainSEXP);
    Rcpp::traits::input_parameter< const bool >::type new_chain(new_chainSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel_likelihood(parallel_likelihoodSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type yy(yySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const int >::type A_rows(A_rowsSEXP);
    Rcpp::traits::input_parameter< const int >::type t(tSEXP);
    Rcpp::traits::input_parameter< const bool >::type mean_cent(mean_centSEXP);
    Rcpp::traits::input_parameter< const bool >::type var_adj(var_adjSEXP);
    Rcpp::traits::input_parameter< const int >::type first_b(first_bSEXP);
    Rcpp::traits::input_parameter< const int >::type first_sgt(first_sgtSEXP);
    Rcpp::traits::input_parameter< const double >::type p_prior_mode(p_prior_modeSEXP);
    Rcpp::traits::input_parameter< const double >::type p_prior_scale(p_prior_scaleSEXP);
    Rcpp::traits::input_parameter< const double >::type q_prior_mode(q_prior_modeSEXP);
    Rcpp::traits::input_parameter< const double >::type q_prior_scale(q_prior_scaleSEXP);
    Rcpp::traits::input_parameter< const double >::type shrinkage(shrinkageSEXP);
    Rcpp::traits::input_parameter< const bool >::type progress_bar(progress_barSEXP);
    rcpp_result_gen = Rcpp::wrap(sampler(N, n, m0, K, gamma, init_mode, init_scale, output_as_input, old_chain, new_chain, parallel, parallel_likelihood, yy, xx, m, A_rows, t, mean_cent, var_adj, first_b, first_sgt, p_prior_mode, p_prior_scale, q_prior_mode, q_prior_scale, shrinkage, progress_bar));
    return rcpp_result_gen;
END_RCPP
}
// test
void test();
RcppExport SEXP _rbsvar_test() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    test();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rbsvar_log_sgt0", (DL_FUNC) &_rbsvar_log_sgt0, 7},
    {"_rbsvar_sgt_bounds", (DL_FUNC) &_rbsvar_sgt_bounds, 3},
    {"_rbsvar_log_like", (DL_FUNC) &_rbsvar_log_like, 12},
    {"_rbsvar_log_prior", (DL_FUNC) &_rbsvar_log_prior, 13},
    {"_rbsvar_draw", (DL_FUNC) &_rbsvar_draw, 23},
    {"_rbsvar_sampler", (DL_FUNC) &_rbsvar_sampler, 27},
    {"_rbsvar_test", (DL_FUNC) &_rbsvar_test, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rbsvar(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
