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
// dmvnrm_arma
double dmvnrm_arma(arma::vec const& x, arma::vec const& mean, arma::mat const& sigma, bool const logd);
RcppExport SEXP _rbsvar_dmvnrm_arma(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// dmvnrm_arma_diagonal
double dmvnrm_arma_diagonal(arma::vec const& x, arma::vec const& mean, arma::mat const& sds, bool const logd);
RcppExport SEXP _rbsvar_dmvnrm_arma_diagonal(SEXP xSEXP, SEXP meanSEXP, SEXP sdsSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type sds(sdsSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma_diagonal(x, mean, sds, logd));
    return rcpp_result_gen;
END_RCPP
}
// fill_xx
arma::mat fill_xx(arma::mat xx, arma::mat yy, const int m, const int t);
RcppExport SEXP _rbsvar_fill_xx(SEXP xxSEXP, SEXP yySEXP, SEXP mSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type yy(yySEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fill_xx(xx, yy, m, t));
    return rcpp_result_gen;
END_RCPP
}
// garch_out
Rcpp::List garch_out(arma::mat yy, arma::mat fit, arma::mat B, arma::mat GARCH, int t, int m);
RcppExport SEXP _rbsvar_garch_out(SEXP yySEXP, SEXP fitSEXP, SEXP BSEXP, SEXP GARCHSEXP, SEXP tSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type yy(yySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type fit(fitSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type GARCH(GARCHSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(garch_out(yy, fit, B, GARCH, t, m));
    return rcpp_result_gen;
END_RCPP
}
// log_like
double log_like(arma::vec state, arma::mat yy, arma::mat xx, const int first_b, const int first_sgt, const int first_garch, const int first_regime, const int first_yna, const int m, const int A_rows, const int t, const arma::ivec regimes, const arma::ivec yna_indices, const bool B_inverse, const bool mean_cent, const bool var_adj, const bool parallel_likelihood);
RcppExport SEXP _rbsvar_log_like(SEXP stateSEXP, SEXP yySEXP, SEXP xxSEXP, SEXP first_bSEXP, SEXP first_sgtSEXP, SEXP first_garchSEXP, SEXP first_regimeSEXP, SEXP first_ynaSEXP, SEXP mSEXP, SEXP A_rowsSEXP, SEXP tSEXP, SEXP regimesSEXP, SEXP yna_indicesSEXP, SEXP B_inverseSEXP, SEXP mean_centSEXP, SEXP var_adjSEXP, SEXP parallel_likelihoodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type state(stateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type yy(yySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< const int >::type first_b(first_bSEXP);
    Rcpp::traits::input_parameter< const int >::type first_sgt(first_sgtSEXP);
    Rcpp::traits::input_parameter< const int >::type first_garch(first_garchSEXP);
    Rcpp::traits::input_parameter< const int >::type first_regime(first_regimeSEXP);
    Rcpp::traits::input_parameter< const int >::type first_yna(first_ynaSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const int >::type A_rows(A_rowsSEXP);
    Rcpp::traits::input_parameter< const int >::type t(tSEXP);
    Rcpp::traits::input_parameter< const arma::ivec >::type regimes(regimesSEXP);
    Rcpp::traits::input_parameter< const arma::ivec >::type yna_indices(yna_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type B_inverse(B_inverseSEXP);
    Rcpp::traits::input_parameter< const bool >::type mean_cent(mean_centSEXP);
    Rcpp::traits::input_parameter< const bool >::type var_adj(var_adjSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel_likelihood(parallel_likelihoodSEXP);
    rcpp_result_gen = Rcpp::wrap(log_like(state, yy, xx, first_b, first_sgt, first_garch, first_regime, first_yna, m, A_rows, t, regimes, yna_indices, B_inverse, mean_cent, var_adj, parallel_likelihood));
    return rcpp_result_gen;
END_RCPP
}
// check_permutation
bool check_permutation(arma::mat B);
RcppExport SEXP _rbsvar_check_permutation(SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(check_permutation(B));
    return rcpp_result_gen;
END_RCPP
}
// log_dirichlet
double log_dirichlet(arma::vec x, const double alpha);
RcppExport SEXP _rbsvar_log_dirichlet(SEXP xSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(log_dirichlet(x, alpha));
    return rcpp_result_gen;
END_RCPP
}
// log_prior
double log_prior(arma::vec state, const arma::mat yy, const arma::mat xx, const int first_b, const int first_sgt, const int first_garch, const int first_regime, const int first_yna, const int m, const int A_rows, const int t, const arma::ivec regimes, const arma::vec a_mean, const arma::mat a_cov, const bool prior_A_diagonal, const arma::vec b_mean, const arma::mat b_cov, const double p_prior_mode, const double p_prior_scale, const double q_prior_mode, const double q_prior_scale, const double dirichlet_alpha, const bool B_inverse);
RcppExport SEXP _rbsvar_log_prior(SEXP stateSEXP, SEXP yySEXP, SEXP xxSEXP, SEXP first_bSEXP, SEXP first_sgtSEXP, SEXP first_garchSEXP, SEXP first_regimeSEXP, SEXP first_ynaSEXP, SEXP mSEXP, SEXP A_rowsSEXP, SEXP tSEXP, SEXP regimesSEXP, SEXP a_meanSEXP, SEXP a_covSEXP, SEXP prior_A_diagonalSEXP, SEXP b_meanSEXP, SEXP b_covSEXP, SEXP p_prior_modeSEXP, SEXP p_prior_scaleSEXP, SEXP q_prior_modeSEXP, SEXP q_prior_scaleSEXP, SEXP dirichlet_alphaSEXP, SEXP B_inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type state(stateSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type yy(yySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< const int >::type first_b(first_bSEXP);
    Rcpp::traits::input_parameter< const int >::type first_sgt(first_sgtSEXP);
    Rcpp::traits::input_parameter< const int >::type first_garch(first_garchSEXP);
    Rcpp::traits::input_parameter< const int >::type first_regime(first_regimeSEXP);
    Rcpp::traits::input_parameter< const int >::type first_yna(first_ynaSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const int >::type A_rows(A_rowsSEXP);
    Rcpp::traits::input_parameter< const int >::type t(tSEXP);
    Rcpp::traits::input_parameter< const arma::ivec >::type regimes(regimesSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type a_mean(a_meanSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type a_cov(a_covSEXP);
    Rcpp::traits::input_parameter< const bool >::type prior_A_diagonal(prior_A_diagonalSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type b_mean(b_meanSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type b_cov(b_covSEXP);
    Rcpp::traits::input_parameter< const double >::type p_prior_mode(p_prior_modeSEXP);
    Rcpp::traits::input_parameter< const double >::type p_prior_scale(p_prior_scaleSEXP);
    Rcpp::traits::input_parameter< const double >::type q_prior_mode(q_prior_modeSEXP);
    Rcpp::traits::input_parameter< const double >::type q_prior_scale(q_prior_scaleSEXP);
    Rcpp::traits::input_parameter< const double >::type dirichlet_alpha(dirichlet_alphaSEXP);
    Rcpp::traits::input_parameter< const bool >::type B_inverse(B_inverseSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prior(state, yy, xx, first_b, first_sgt, first_garch, first_regime, first_yna, m, A_rows, t, regimes, a_mean, a_cov, prior_A_diagonal, b_mean, b_cov, p_prior_mode, p_prior_scale, q_prior_mode, q_prior_scale, dirichlet_alpha, B_inverse));
    return rcpp_result_gen;
END_RCPP
}
// sampler
Rcpp::List sampler(const int N, const int n, const int m0, const int K, const double gamma, const arma::mat init_draws, const bool output_as_input, const arma::mat old_chain, const bool new_chain, const bool parallel, const bool parallel_likelihood, const Rcpp::List model_R, const bool progress_bar);
RcppExport SEXP _rbsvar_sampler(SEXP NSEXP, SEXP nSEXP, SEXP m0SEXP, SEXP KSEXP, SEXP gammaSEXP, SEXP init_drawsSEXP, SEXP output_as_inputSEXP, SEXP old_chainSEXP, SEXP new_chainSEXP, SEXP parallelSEXP, SEXP parallel_likelihoodSEXP, SEXP model_RSEXP, SEXP progress_barSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type init_draws(init_drawsSEXP);
    Rcpp::traits::input_parameter< const bool >::type output_as_input(output_as_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type old_chain(old_chainSEXP);
    Rcpp::traits::input_parameter< const bool >::type new_chain(new_chainSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel_likelihood(parallel_likelihoodSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type model_R(model_RSEXP);
    Rcpp::traits::input_parameter< const bool >::type progress_bar(progress_barSEXP);
    rcpp_result_gen = Rcpp::wrap(sampler(N, n, m0, K, gamma, init_draws, output_as_input, old_chain, new_chain, parallel, parallel_likelihood, model_R, progress_bar));
    return rcpp_result_gen;
END_RCPP
}
// stackA_cpp
arma::mat stackA_cpp(arma::mat A, const bool constant);
RcppExport SEXP _rbsvar_stackA_cpp(SEXP ASEXP, SEXP constantSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< const bool >::type constant(constantSEXP);
    rcpp_result_gen = Rcpp::wrap(stackA_cpp(A, constant));
    return rcpp_result_gen;
END_RCPP
}
// irf_cpp
Rcpp::List irf_cpp(const arma::mat s, const int horizon, const arma::vec cumulate, const arma::vec shock_sizes, const arma::vec shocks, const int A_rows, const int first_b, const int first_sgt, const int m, const bool B_inverse, const bool parallel);
RcppExport SEXP _rbsvar_irf_cpp(SEXP sSEXP, SEXP horizonSEXP, SEXP cumulateSEXP, SEXP shock_sizesSEXP, SEXP shocksSEXP, SEXP A_rowsSEXP, SEXP first_bSEXP, SEXP first_sgtSEXP, SEXP mSEXP, SEXP B_inverseSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type s(sSEXP);
    Rcpp::traits::input_parameter< const int >::type horizon(horizonSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type cumulate(cumulateSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type shock_sizes(shock_sizesSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type shocks(shocksSEXP);
    Rcpp::traits::input_parameter< const int >::type A_rows(A_rowsSEXP);
    Rcpp::traits::input_parameter< const int >::type first_b(first_bSEXP);
    Rcpp::traits::input_parameter< const int >::type first_sgt(first_sgtSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const bool >::type B_inverse(B_inverseSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(irf_cpp(s, horizon, cumulate, shock_sizes, shocks, A_rows, first_b, first_sgt, m, B_inverse, parallel));
    return rcpp_result_gen;
END_RCPP
}
// log_text
void log_text(std::string text, int iter);
RcppExport SEXP _rbsvar_log_text(SEXP textSEXP, SEXP iterSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    log_text(text, iter);
    return R_NilValue;
END_RCPP
}
// logSumExp
double logSumExp(arma::vec x);
RcppExport SEXP _rbsvar_logSumExp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(logSumExp(x));
    return rcpp_result_gen;
END_RCPP
}
// log_ml_cpp
Rcpp::List log_ml_cpp(const arma::vec proposal_densities, const arma::vec posterior_densities, const arma::vec theta_star, const arma::mat sigma_star, const double logden_star, const arma::uword J, const bool parallel, const bool parallel_likelihood, const Rcpp::List model_R);
RcppExport SEXP _rbsvar_log_ml_cpp(SEXP proposal_densitiesSEXP, SEXP posterior_densitiesSEXP, SEXP theta_starSEXP, SEXP sigma_starSEXP, SEXP logden_starSEXP, SEXP JSEXP, SEXP parallelSEXP, SEXP parallel_likelihoodSEXP, SEXP model_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type proposal_densities(proposal_densitiesSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type posterior_densities(posterior_densitiesSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type theta_star(theta_starSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type sigma_star(sigma_starSEXP);
    Rcpp::traits::input_parameter< const double >::type logden_star(logden_starSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type J(JSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel_likelihood(parallel_likelihoodSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type model_R(model_RSEXP);
    rcpp_result_gen = Rcpp::wrap(log_ml_cpp(proposal_densities, posterior_densities, theta_star, sigma_star, logden_star, J, parallel, parallel_likelihood, model_R));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rbsvar_log_sgt0", (DL_FUNC) &_rbsvar_log_sgt0, 7},
    {"_rbsvar_dmvnrm_arma", (DL_FUNC) &_rbsvar_dmvnrm_arma, 4},
    {"_rbsvar_dmvnrm_arma_diagonal", (DL_FUNC) &_rbsvar_dmvnrm_arma_diagonal, 4},
    {"_rbsvar_fill_xx", (DL_FUNC) &_rbsvar_fill_xx, 4},
    {"_rbsvar_garch_out", (DL_FUNC) &_rbsvar_garch_out, 6},
    {"_rbsvar_log_like", (DL_FUNC) &_rbsvar_log_like, 17},
    {"_rbsvar_check_permutation", (DL_FUNC) &_rbsvar_check_permutation, 1},
    {"_rbsvar_log_dirichlet", (DL_FUNC) &_rbsvar_log_dirichlet, 2},
    {"_rbsvar_log_prior", (DL_FUNC) &_rbsvar_log_prior, 23},
    {"_rbsvar_sampler", (DL_FUNC) &_rbsvar_sampler, 13},
    {"_rbsvar_stackA_cpp", (DL_FUNC) &_rbsvar_stackA_cpp, 2},
    {"_rbsvar_irf_cpp", (DL_FUNC) &_rbsvar_irf_cpp, 11},
    {"_rbsvar_log_text", (DL_FUNC) &_rbsvar_log_text, 2},
    {"_rbsvar_logSumExp", (DL_FUNC) &_rbsvar_logSumExp, 1},
    {"_rbsvar_log_ml_cpp", (DL_FUNC) &_rbsvar_log_ml_cpp, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_rbsvar(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
