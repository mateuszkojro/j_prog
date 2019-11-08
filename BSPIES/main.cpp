
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

// Porady dotycz¹ce rozpoczynania pracy:
//   1. U¿yj okna Eksploratora rozwi¹zañ, aby dodaæ pliki i zarz¹dzaæ nimi
//   2. U¿yj okna programu Team Explorer, aby nawi¹zaæ po³¹czenie z kontrol¹ Ÿród³a
//   3. U¿yj okna Dane wyjœciowe, aby sprawdziæ dane wyjœciowe kompilacji i inne komunikaty
//   4. U¿yj okna Lista b³êdów, aby zobaczyæ b³êdy
//   5. Wybierz pozycjê Projekt > Dodaj nowy element, aby utworzyæ nowe pliki kodu, lub wybierz pozycjê Projekt > Dodaj istniej¹cy element, aby dodaæ istniej¹ce pliku kodu do projektu
//   6. Aby w przysz³oœci ponownie otworzyæ ten projekt, przejdŸ do pozycji Plik > Otwórz > Projekt i wybierz plik sln
