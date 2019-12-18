#include <iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

void my_sort(int *tab,int len);


int main()
{
    const int len = 10;
    int tab[len];

    int suma = 0;

    int czas = time(NULL);//czas od startu duza liczba
    srand(time(NULL)); //feading entropy

    for (int i = 0; i < len;i++){
        int var1 = rand();
        int wynik =  var1 % (1000);
        *(tab+i) = wynik;
        //cout << wynik<<endl;

    }
for (int i = 0;i < len;i++){
    std::cout << *(tab+i) << std::endl;
}
my_sort(tab,len);
std::cout << std::endl;
for (int i = 0;i < len;i++){
    std::cout << *(tab+i) << std::endl;
}

}



void my_sort(int (*tab),int len){
//not optimal
bool r = true;
    while(r == true){
        r = false;
        for(int y = 0;y < len-1;y++){

            if(*(tab+y) > *(tab+y+1)){
                int temp = *(tab+y+1);
                *(tab+y+1) = *(tab+y);
                tab[y] = temp;
                r = true;
            }

        }
    }

}
