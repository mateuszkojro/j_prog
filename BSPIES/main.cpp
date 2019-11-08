
#include <iostream>
#include <vector>

using namespace std;
vector <string> do_voting(string kol[],string tab[]);

int sprawdz_konflikt(char miasto, vector<char> konf);

int main()
{

	//miasta a b c d e f g

	int d = 7;
	string kol[] = { "a","b","c","d","e","f","g" };

	int n = 5;
	string tab[] = {"ab","ac","cd","ce","cg"};



	vector<string > wynik;
	wynik = do_voting(kol, tab);


	for (int i = 0; i < wynik.size(); i++) {

		cout << wynik[i] << endl;

	}


}

vector <string> do_voting(string kol[],string tab[]) {

	vector <string> lista;






	for (int miasto = 0; miasto < 7; miasto++) {


		vector <char > konf;		//lista miast w konflikcie dango miasta



		//uzupelniam lsite miast w konflikcie z *tab[miasto]*

		for (int i = 0; i < 5; i++) {

			if (tab[i][0] == kol[miasto][0]) {

				konf.push_back(tab[i][1]);

			}
			else if (tab[i][1] == kol[miasto][0]) {

				konf.push_back(tab[i][0]);

			}


			for (int lista_en = 0; lista_en < lista.size(); lista_en++) {

				if (sprawdz_konflikt(lista[lista_en][0], konf) >= 0) {


					lista[lista_en] = kol[miasto];


				}
				else {

					lista.push_back(kol[miasto]);

				}

			}



		}



	}

	return lista;

}


int sprawdz_konflikt(char miasto ,vector<char> konf) {

	for (int konf_en = 0; konf_en < konf.size(); konf_en++) {


		if (miasto == konf[konf_en]) {

			return konf_en;

		}


	}

	return -1;

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotycz�ce rozpoczynania pracy:
//   1. U�yj okna Eksploratora rozwi�za�, aby doda� pliki i zarz�dza� nimi
//   2. U�yj okna programu Team Explorer, aby nawi�za� po��czenie z kontrol� �r�d�a
//   3. U�yj okna Dane wyj�ciowe, aby sprawdzi� dane wyj�ciowe kompilacji i inne komunikaty
//   4. U�yj okna Lista b��d�w, aby zobaczy� b��dy
//   5. Wybierz pozycj� Projekt > Dodaj nowy element, aby utworzy� nowe pliki kodu, lub wybierz pozycj� Projekt > Dodaj istniej�cy element, aby doda� istniej�ce pliku kodu do projektu
//   6. Aby w przysz�o�ci ponownie otworzy� ten projekt, przejd� do pozycji Plik > Otw�rz > Projekt i wybierz plik sln
