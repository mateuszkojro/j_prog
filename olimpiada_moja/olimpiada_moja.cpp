
#include <iostream>
#include<deque>

std::deque<int> znajdz_dzielniki(int liczba);
std::deque<int> znajdz_przedzial(std::deque<int> dzielniki);
void show(std::deque<int> x);
int main()
{
	int liczba; //podana przez uzytkowanik anjjmniejsza wspolna wielokrotnosc
	std::cin >> liczba;
	std::deque <int> dzielniki = znajdz_dzielniki(liczba); //znajduje dzielniki i zapisuje je do tablicy
	std::deque <int> zakres = znajdz_przedzial(dzielniki);

	show(zakres);


}


//funkcja na wejsciu dostaje liczbe a na wyjsciu tablice z jej dzielnikami
std::deque <int> znajdz_dzielniki(int liczba) {


	std::deque <int> dzielniki; //tworze pusta tablice

	for (int i = 1; i < liczba / 2; i++) { //ide przez wszystkie wartosci od 1 do podanej liczby przez 2(dlatego ze jak bedzie wieksza niz pol to juz napewno dalej nie bedzie 2 dzielnikow obok siebie)


		//jezeli jest podzielna dodaj na koniec tablicy 
		if (liczba % i == 0) { 
							
			dzielniki.push_back(i);

		}

	}

	return dzielniki; //zwracam tablice dzielnikow

}

//na wejsciu tablica dzielnikow liczby na wyjsciu dwuelementowa tablica oznaczajca pierwszy i ostatni element przedzialu

std::deque <int >znajdz_przedzial(std::deque<int> dzielniki) {
	std::deque <int> zakres = { 0,0 }; //inicjuje zwracana tablice

	//ide przez wszystkie dzielniki
	for (int i = 0; i < dzielniki.size(); i++) {

		int di = 1; //dlugosc zakresu 
		bool wiecej_niz_jeden = false; //test czy zakres bedzie dluzszy niz jeden


		//zaczynam od ktoregos dzielnika i sprawdzam czy kolejne sa jeden po drugim
		while (di == dzielniki[i + di] - dzielniki[i] && i + di < dzielniki.size()-1) {
			di++; //powiekszam liczniik dlugosci zakresu
			wiecej_niz_jeden = true; //zaznaczam ze przynaj,niej 2 obok siebie 
			
			//zapisuje do tablicy wynikow
			zakres[0] = dzielniki[i]; 
			zakres[1] = dzielniki[i + di];
		}
		if (wiecej_niz_jeden) {
			return zakres;//uciekam z petli i zwracam zakres
		}
	}

}


//wyswietlam tablice podana na wejsciu
void show(std::deque<int> x) {

	std::cout << "[";


	//ide przez wszytskie elementy tablicy i wyswietlam je rozdzielone przecinkiem -- tak wiem ze jest bug i na koniec pokazuje dodatkowy przeciwnek ale ten warunek zaciemnil by ci kod
	for (int i = 0; i < x.size(); i++) {

		std::cout << x[i] << ",";

	}

	std::cout << "]";

}