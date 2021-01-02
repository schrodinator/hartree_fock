#include "gtest/gtest.h"
#include "Eigen/Dense"
#include "../gmprd.h"


TEST(gmprd, Works) {
    Eigen::MatrixXd a(3, 3);
    Eigen::MatrixXd b(3, 3);
    Eigen::MatrixXd out(3, 3);
    Eigen::MatrixXd expected(3, 3);
    a << 1, 2, 3,
         4, 5, 6,
         7, 8, 9;
    b << 1, 1, 0,
         1, 0, 1,
         0, 0, 2;
    expected << 3, 1, 8,
                9, 4, 17,
                15, 7, 26;
    gmprd(a, b, out);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ASSERT_EQ(out(i, j), expected(i, j));
        }
    }
}
