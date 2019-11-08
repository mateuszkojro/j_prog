#include <iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

void my_sort(int &tab);


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
        tab[i] = wynik;
        //cout << wynik<<endl;

    }



my_sort(tab);
    for (int i = 0; i < len;i ++){

        cout << tab[i] << " " ;

    }


    return 0;
}

void my_sort(int (&tab)[10]{
//not optimal
bool r = true;
    while(r == true){
        r = false;
        for(int y = 0;y < len-1;y++){

            if(tab[y] > tab[y+1]){
                int temp = tab[y+1];
                tab[y+1] = tab[y];
                tab[y] = temp;
                r = true;
            }

        }
    }

}
