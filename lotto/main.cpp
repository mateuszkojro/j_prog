#include <iostream>
#include <cstdlib>
#include <ctime>



#if 0

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int suma =0;
    int czas = time(NULL);//czas od startu duza liczba
    //feading entropy
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

#endif

int my_random(int a);

int main(){
    srand(time(NULL));
    const int size = 200;
    int tab[size] = {0};

    bool flag;
    int x;
    for (int i = 0; i < size;++i){
    
        do{
            flag = false;
            //std::cout << my_random(10);
            x = my_random(size * 2);
            for(int j = 0; j < size-(size - i);++j){
            
                if (tab[j] == x){
                    flag  = true;
                    break;
                }
            }

            tab[i] = x;

        }while(flag);

    }


    for (int i = 0; i < size;++i){
        std::cout << tab[i] << " ";
    }
    

}


int my_random(int a){
    int b = 0;

     int var1 = rand();
     //std::cout << rand();
     int wynik =  var1  % a;
     return wynik;

}
