#include "Eigen/Dense"
#include "gmprd.h"

void gmprd(Eigen::MatrixXd& A, Eigen::MatrixXd& B, Eigen::MatrixXd& R) {
    R = A*B;
}
