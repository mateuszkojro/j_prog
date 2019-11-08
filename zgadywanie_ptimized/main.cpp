#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int x = 0, liczba = 43,ile = 1;
    cin >> liczba;
    system("CLS");
    cin >> x;
    while (x != liczba ){

        if ( x < liczba ){
            cout << "za malo \n";
        }
        else{
            cout << "za duzo \n";
        }
        cin >> x;
        ile++;
    }
    cout << "zgadless po "<<ile;

    return 0;
}
