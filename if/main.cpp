#include <iostream>

using namespace std;

int main()
{

cout << "Podaj lcizbe! \n";
int x ;
cin >> x;
cout << "Zostanie sprawdzone czy liczba nale¿y do zdefiniowanego zakresu\n";
cout << "(liczba) : (status przynalzenosci)\n";
    if ((((x > 2) && (x <= 11) )|| ((x > 14) && (x <=16)))&&  x != 5){
        cout  << x <<" : TAK";
    }
    else {
        cout  << x <<" : NIE";
    }

    return 0;
}
