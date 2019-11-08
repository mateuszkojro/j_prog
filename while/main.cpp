#include <iostream>

using namespace std;

int main()
{
cout << "Zostanie sprawdzone czy liczba nale¿y do zdefiniowanego zakresu\n";
cout << "(liczba) : (status przynalzenosci)\n";

    int x  = 0;
    while (x <= 20){

        if ((((x > 2) && (x <= 11) )|| ((x > 14) && (x <=16)))&&  x != 5){

            if (x < 10){

                cout << " "<< x;

            }
            else{
                cout  << x ;
            }

            cout << " : TAK\n";
        }
        else {
            if (x < 10){

                cout << " "<< x;

            }
            else{
                cout  << x;
            }
            cout << " : NIE\n";
        }
    x++;
    }
    return 0;
}
