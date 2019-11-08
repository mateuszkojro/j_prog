#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int suma =0;
    int czas = time(NULL);//czas od startu duza liczba
    srand(time(NULL)); //feading entropy
    //losujue liczbe
    int a,b;
    cin >> a;
    cin >> b;
    for (int i = 0; i < 100;i++){
        int var1 = rand();
        int wynik =  (var1 % (b+1 - a)) + a;
        suma = suma + wynik;
        cout << wynik<<endl;
    }

    cout << "srednia = " <<float(suma) / 100;
    return 0;
}
