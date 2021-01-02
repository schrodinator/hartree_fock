#include "Eigen/Dense"
#include "scf_r.h"

void scfR(Eigen::MatrixXd& C, Eigen::MatrixXd& R) {
    R = C * C.transpose();
}
