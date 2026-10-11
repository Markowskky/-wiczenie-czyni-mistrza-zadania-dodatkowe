#include <string>
#include <iostream>


int main() {
    const int W = 5;
    const int K = 8;
    for (int z = 0;z < K;z++) {
        if (z % 2 == 0) {
            for (int t = 0;t < W;t++) {
                std::cout << "X" ;
            }std::cout << std::endl;
        }
        else {
            for (int t = 0;t < W;t++) {
                std::cout << "." ;
            }std::cout << std::endl;

        }
    }
  
}
