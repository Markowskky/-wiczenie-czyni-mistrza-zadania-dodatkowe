//1
// #include <string>
// #include <iostream>


// int main() {
//     const int W = 5;
//     const int K = 8;
//     for (int z = 0;z < K;z++) {
//         if (z % 2 == 0) {
//             for (int t = 0;t < W;t++) {
//                 std::cout << "X" ;
//             }std::cout << std::endl;
//         }
//         else {
//             for (int t = 0;t < W;t++) {
//                 std::cout << "." ;
//             }std::cout << std::endl;

//         }
//     }
  
// }

//2
// #include <string>
// #include <iostream>


// int main() {
//     const int W = 5;
//     const int K = 8;
//     for (int z = 0;z < W;z++) {
//         if (z % 2 == 0) {
//             for (int t = 0;t < K;t++) {
//                if(t%2==0){
//                     std::cout << "X" ;
//                }else{
//                     std::cout << "." ;
//                }
//             }std::cout << std::endl;
//         }
//         else {
//             for (int t = 0;t < K;t++) {
//             if(t%2==0){
//                     std::cout << "X" ;
//                }else{
//                     std::cout << "." ;
//                }
//             }std::cout << std::endl;

//         }
//     }
  
// }

//3
// #include <string>
#include <iostream>


 int main() {
     const int N = 6;
     int t = 0;
        for(int t=0;t<N;t++){
        std::cout << std::endl;
        for(int y=0;y<t;y++) {
            std::cout << "." ; 
        }   
        for (int y=0;y<N-t;y++) {
            std::cout << "X" ;
        }     
    }
}

