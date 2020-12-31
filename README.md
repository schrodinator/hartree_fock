Implementing Hartree-Fock in C++.

Using Eigen for matrix operations: http://eigen.tuxfamily.org/
    * Copied "Eigen" dir into /usr/local/include

How to set up Google C++ Testing Framework (Gtest): https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/

Compile and link:
g++ -I /usr/local/include/Eigen scf_r.cpp unittests/scf_r_unittest.cpp -o hartree_fock -lgtest -lgtest_main -lpthread

TODO: cmake
