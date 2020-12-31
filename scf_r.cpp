#include "Eigen/Dense"
#include "scf_r.h"

void scfR(Eigen::MatrixXd& C, Eigen::MatrixXd& R) {
    Eigen::MatrixXd b = C.transpose();
    R = C * b;
}
