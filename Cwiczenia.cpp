
/*

int-liczba całkowita

bool- true/false

char- jeden znak (kod ascii)

string- wyrazy

double  - liczbe z przecinkiem

void - nic

funkcja main()

*/

//1

//int main() {
//    int a = 0;
//    std::cout << a;
//    a += 1;
//    std::cout << a;
//    return 0;
//}

//2
/*
operatory

+
-
*
/
% modulo
= przypisania
== porownania
!= nierowne
++ inkrementacja (plus 1) 
-- deinkrementacja (minus 1)
<
>
>=
<=


int main() {
	int a = 2;
	if(a%2==0){
		std::cout << "liczba jest parzysta";
	}
	else {
		std::cout << "liczba jest nie parzysta";
	}
}

*/

//3
/*

srand() to zegar procesora - jednokrotnie
rand() to zrzut obecnego czasu z srand - wielokrotnie


void wylosuj() {
	srand(time(0));
}

int main() {
	int a;
	int b;
	wylosuj();
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	if (a % b == 0) {
		std::cout << "jest podzielna" << std::endl;
	}
	else {
		std::cout << "nie jest podzielna" << std::endl;
	}
	
}
zasieg zmiennej
*/

//4
/*
//#include <string>
//#include <iostream>
//#include <ctime>

int wylosuj_jednaliczbe(int minimum,int maximum) {
	int a = rand() % maximum + minimum;
	return a;
}
 void wypisz(std::string ToCoDoWypisania) {
	 std::cout << ToCoDoWypisania;
}
 void wypisz(int ToCoDoWypisania) {
	 std::cout << ToCoDoWypisania;

 }

int main() {
	srand(time(0));
	int liczba = wylosuj_jednaliczbe(1, 10);
	int liczba2 = wylosuj_jednaliczbe(1, 10);
	wypisz(liczba);
	wypisz(" i ");
	wypisz(liczba2 );
	if(liczba % liczba2 == 0){
		wypisz("liczba jest podzielna");
	}
	else {
		wypisz("liczba nie jest podzielna");
	}
}

*/
/*
#include <string>
#include <iostream>

int wylosuj_Liczbe(int minimum,int maximum) {
	int wynik =rand() % maximum + minimum;
	return wynik;


}
int main() {
	srand(time(0));
	int Licznikliczby3 = 0;
	while(Licznikliczby3<3){
		int wylosowanaliczba = wylosuj_Liczbe(-5, 11);
		std::cout << wylosowanaliczba << std::endl;
		if (wylosowanaliczba == 3) {
			Licznikliczby3 += 1;
		}
	}
}
	
*/
//int main() {
//	for (int i = 0;i < 5;i++) {
//		std::cout << wylosuj_Liczbe(-5, 5) << std::endl;
//	}
//} for wtedy wiesz ile

//#include <string>
//#include <iostream>
//
//int main() {
//	 <typDanejPrzechowywanej> <nazwatablicy> [rozmiarTablicy]
//	int Cyfry[5] = { 2137,911,67,69,420 };
//	std::cout <<"Standradowe Liczby" << std::endl;
//	for (int i = 0;i < 5;i++) {
//		std::cout << Cyfry[i] << std::endl;
//	}
//	std::cout <<  std::endl;
//	std::cout << "Zwiekszone Liczby o 5" << std::endl;
//	for (int i = 0;i < 5;i++) {
//		int zwiekszonaliczba=Cyfry[i] + 5;
//		std::cout << zwiekszonaliczba << std::endl;
//	}
//	return 0;
//}

//7.5
//#include <iostream>
//
//int main() {
//	const int wiersze = 3;
//	const int kolumny = 4;
//	int A[wiersze][kolumny] =
//	{
//		{01,02,03,04},
//		{11,12,13,14},
//		{21,22,23,24}
//	};
//	
//	for (int i = 0;i < wiersze;i++) {
//		for (int j = 0;j < kolumny;j++) {
//			std::cout << A[i][j] << std::endl;
//		}
//	}
//}

//8
//#include <string>
//#include <iostream>
////int Tabela2D[wiersze][kolumny] = {{1,2,3},{4,5,6},{7,8,9}};
//				
//int wylosuj(int minimum,int maximum) {
//	int wynik = rand()%maximum+minimum;
//	return wynik;
//}
//int main() {
//	srand(time(0));
//	const int wiersze = 5;
//	const int kolumny = 7;
//	int Tabela2D[wiersze][kolumny];
//	int sumaliczbnieparzystych = 0;
//	for (int x = 0;x < wiersze;x++) {
//		for (int y = 0;y < kolumny;y++) {
//			Tabela2D[x][y] = wylosuj(0, 10);
//			if(Tabela2D[x][y] % 2 !=0){
//				sumaliczbnieparzystych += Tabela2D[x][y];
//			}
//			std::cout << Tabela2D[x][y]<<" ";
//		}
//		std::cout << std::endl;
//	}
//	std::cout << " SumaLiczbNieparzystych  " << sumaliczbnieparzystych;
//}

//9

//flaga
//break
#include <string>
#include <iostream>

int wylosuj(int maximum,int minimum) {
	return rand() % maximum + minimum;
}

int main() {
	srand(time(0));
	const int wiersz = 5;
	int tablica5[wiersz];
	for (int i = 0;i < 5;i++) {
		tablica5[i] = -1;
	}
	bool czyuzupelniona = false;
	while (!czyuzupelniona) {
		int wylosowanaliczba = wylosuj(10, 0);
		int wylosowanyindex = wylosuj(10, 0);
		while (wylosowanyindex > 4) {
			wylosowanyindex = wylosuj(10, 0);
		}
		int liczniksprawdzonychkratek = 0;
		tablica5[wylosowanyindex] = wylosowanaliczba;
		for (int j = 0;j < 5;j++) {
			if (tablica5[j] == -1) {
				czyuzupelniona = false;
			}
			else {
				liczniksprawdzonychkratek +=1;
			}
			if (liczniksprawdzonychkratek == 5) {
				czyuzupelniona = true;
			}
			else {
				czyuzupelniona = false;
			}

		}
	}
	for (int k = 0;k < 5;k++) {
		std::cout<<tablica5[k]<<" ";
	}
}
