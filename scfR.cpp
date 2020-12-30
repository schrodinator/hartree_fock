#include <iostream>

void scfR(const double* C, const int m, const int nocc, double* R) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i; j++) {
            double sum = 0;
            for (int k = 0; k < nocc; k++) {
                int kk = m * k;
                int ik = kk + i;
                int jk = kk + j;
                sum += C[ik] * C[jk];
            }
            int ij = m * j + i;
            int ji = m * i + j;
            R[ij] = sum;
            R[ji] = sum;
        }
    }
}


int main() {
    double C[9] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    double R[9];
    scfR(C, 3, 3, R);
    for (auto& entry : R) {
        std::cout << entry << std::endl;
    }
    return 0;
}