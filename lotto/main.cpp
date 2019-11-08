#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    for (int i = 0; i < 6;i++){

        while()

    }
    return 0;
}


int my_random(int a ,int b){
    int czas = time(NULL);//czas od startu duza liczba
    srand(time(NULL)); //feading entropy
    int var1 = rand();
    int wynik =  (var1 % (b+1 - a)) + a;
    return wynik;
}

