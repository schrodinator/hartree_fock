#include "gtest/gtest.h"
#include "Eigen/Dense"
#include "../scf_r.h"


TEST(scfR, Works) {
    Eigen::MatrixXd m(3, 3);
    Eigen::MatrixXd out(3, 3);
    Eigen::MatrixXd expected(3, 3);
    m << 1, 2, 3,
         4, 5, 6,
         7, 8, 9;
    expected << 14, 32, 50,
                32, 77, 122,
                50, 122, 194;
    scfR(m, out);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ASSERT_EQ(out(i, j), expected(i, j));
        }
    }
}
