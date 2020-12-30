#include <iostream>
#include "scf_r.h"

int main() {
    double C[9] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    double R[9];
    scfR(C, 3, 3, R);
    for (auto& entry : R) {
        std::cout << entry << std::endl;
    }
    return 0;
}
