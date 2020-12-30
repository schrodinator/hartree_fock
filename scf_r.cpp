#include "scf_r.h"

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
