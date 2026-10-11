// #include <iostream>
// #include <string>
// #include <ctime>
// #include <cstdlib>
// #include <array>
//10 i 14
//tablice = array


// int main(){
//     //int tab[3];
//      //std::array<int, 3> tab
//         // size(): Returns the szie of the array
//         // empty(): Checks if the array is empty
//         // at(index): Accesses the element at the specified index with bounds checking.
//     std::array<int, 3> arr;
//     std::cout<<"to jest rozmiar: "<<arr.size()<<std::endl;
//     //std::cout<<arr.empty()<<std::endl;
//     //std::cout<<"Co jest na indexie: "<<arr.at(2)<<std::endl;  
//         for(int i=0;i<4;i++){
//             std::cout<<arr[i]<<std::endl;
//         }
    
//     return 0;
// }
// #include <array>
// #include <iostream>

// int main(){
//     std::array<int, 3> arr={1,2,3};
//     //arr.push_back(12);
//     std::cout<<arr.empty();
//     std::cout<<arr.at(2);
//     std::cout<<arr.size();
//     //arr.clear();

// }
//11
// #include <iostream>
// #include <vector>


// int main(){
// std::vector<int> vect;

// vect.push_back(12);
// vect.push_back(12);
// std::cout<<vect.capacity();
// vect.pop_back();
// std::cout<<vect.size();
// std::cout<<vect.empty();
// std::cout<<vect.at(2);
// std::cout<<vect.front(); //ITERATOR gdzie cos ustawic
// vect.end(); //ITERATOR gdzie cos ustawic
// }

// #include <string>
// #include <iostream>

// int main(){
// std::string wyraz = "slowo";
// std::string wyraz2 = "slowo2";
// int i = 0;
// std::string wyraz3 = std::to_string(i);
// //std::string fr =wyraz+i;
// std::string fr2 = wyraz+wyraz3;  //konkatenacja
// std::cout<<fr2<<std::endl;
// }


// #include <string>
// #include <iostream>

// int main(){
// std::string wyraz = "123";
// int i = 2;
// int j = std::stoi(wyraz);
// //std::string fr =wyraz+i;
// int fr2 = i+j; //konkatenacja
// std::cout<<fr2<<std::endl;
// }

// #include <iostream>
// #include <string>

// int main(){
//     std::string maleslowo="prodziekan";
//   for(int i=0;i<maleslowo.size();i++){
//         char literka = maleslowo[i];
//         char literkaduza =literka-32;
//         std::cout<<literkaduza;
//     }
// }
//12
// #include <iostream>
// #include <string>

// int main(){
//     std::string maleslowo="Jakies zdanie UwU";
//   for(int i=0;i<maleslowo.size();i++){
//         char literka = maleslowo[i];
//         if(literka>=97 && literka <=122){
//             char literkaduza =literka-32;
//             std::cout<<literkaduza;
//         }else{
//         std::cout<<literka;
//         }
//     }
// }

//13
// #include <iostream>
// #include <vector>
// #include <ctime>

// int wylosuj(int maximum,int minimum){
// return rand()%maximum+minimum;

// }
// int main(){
//     srand(time(0));
//     std::vector<int> vect;
//     std::vector<int> vect2;
//     std::vector<int> vect3;
//     double wylosowaneliczby=wylosuj(10,5);
//     double wylosowaneliczby2=wylosuj(10,5);
//     double wylosowaneliczby3=wylosuj(10,5);
//     double sumatabeli1 = 0;
//     double sumatabeli2 = 0;
//     double sumatabeli3 = 0;
//     for(int i=0;i<wylosowaneliczby;i++){
//         vect.push_back(wylosuj(10,0));
//     }
//     for(int i=0;i<wylosowaneliczby2;i++){
//         vect2.push_back(wylosuj(10,0));
//     }
//     for(int i=0;i<wylosowaneliczby3;i++){
//         vect3.push_back(wylosuj(10,0));
//     }
   
//     for(int i=0;i<wylosowaneliczby;i++){
//         sumatabeli1 += vect[i];      
//     }
//         double artytmetycznywynik = sumatabeli1 / wylosowaneliczby;

//     for(int i=0;i<wylosowaneliczby2;i++){
//         sumatabeli2 += vect[i];      
//     }
//         double artytmetycznywynik2 = sumatabeli2 / wylosowaneliczby2;
//     for(int i=0;i<wylosowaneliczby3;i++){
//         sumatabeli3 += vect[i];      
//     }
//     double artytmetycznywynik3 = sumatabeli3 / wylosowaneliczby3;
//          std::cout<<"1 "<<artytmetycznywynik<<std::endl;
//          std::cout<<"2 "<<artytmetycznywynik2<<std::endl;
//          std::cout<<"3 "<<artytmetycznywynik3<<std::endl;
//     if(artytmetycznywynik>artytmetycznywynik2 && artytmetycznywynik>artytmetycznywynik3){
//         std::cout<<"VECTOR1 MA NAJWIESZKA SREDNIA: "<<artytmetycznywynik<<std::endl;

//     }
//     else if(artytmetycznywynik2>artytmetycznywynik && artytmetycznywynik2>artytmetycznywynik3){
//         std::cout<<"VECTOR2 MA NAJWIESZKA SREDNIA: "<<artytmetycznywynik2<<std::endl;
//     }
//     else{
//         std::cout<<"VECTOR3 MA NAJWIESZKA SREDNIA: "<<artytmetycznywynik3<<std::endl;
//     }

// }

//15
// #include <set>
// #include <iostream>
// #include <ctime>
// #include <vector>
// #include <array>

// int wylosuj(int maximum,int minimum){
// return rand()%maximum+minimum;
// }
// int main(){
//     srand(time(0));
//     std::array<int,10> arra;
//     std::vector<int> vectr;
//     std::set<int> set1;
//     std::multiset<int> multiset1;
//     for(int i=0;i<10;i++){
//         arra[i]=wylosuj(10,0);
//         vectr.push_back(wylosuj(10,0));
//         set1.insert(wylosuj(10,0));
//         multiset1.insert(wylosuj(10,0));
//     }
//     for(int value:set1){
//         std::cout<<value;
//     }
//     std::cout<<std::endl;
//      for(int value:vectr){
//         std::cout<<value;
//     }
//     std::cout<<std::endl;
//     for(int value:multiset1){
//         std::cout<<value;
//     }
//     std::cout<<std::endl;
//     for(int value:arra){
//         std::cout<<value;
//     }

// }