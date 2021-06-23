// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// solveqpImpl
Rcpp::List solveqpImpl(Eigen::MatrixXd& H, const Eigen::VectorXd& h, const Eigen::VectorXd& lb, const Eigen::VectorXd& ub, const Eigen::MatrixXd& A, const Eigen::VectorXd& Alb, const Eigen::VectorXd& Aub, int factorizationType, int maxIter, double tol, bool returnInvertedCholeskyFactor, bool returnLagrangeMultipliers);
RcppExport SEXP _qpmadr_solveqpImpl(SEXP HSEXP, SEXP hSEXP, SEXP lbSEXP, SEXP ubSEXP, SEXP ASEXP, SEXP AlbSEXP, SEXP AubSEXP, SEXP factorizationTypeSEXP, SEXP maxIterSEXP, SEXP tolSEXP, SEXP returnInvertedCholeskyFactorSEXP, SEXP returnLagrangeMultipliersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type H(HSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type lb(lbSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type ub(ubSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Alb(AlbSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Aub(AubSEXP);
    Rcpp::traits::input_parameter< int >::type factorizationType(factorizationTypeSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type returnInvertedCholeskyFactor(returnInvertedCholeskyFactorSEXP);
    Rcpp::traits::input_parameter< bool >::type returnLagrangeMultipliers(returnLagrangeMultipliersSEXP);
    rcpp_result_gen = Rcpp::wrap(solveqpImpl(H, h, lb, ub, A, Alb, Aub, factorizationType, maxIter, tol, returnInvertedCholeskyFactor, returnLagrangeMultipliers));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_qpmadr_solveqpImpl", (DL_FUNC) &_qpmadr_solveqpImpl, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_qpmadr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
