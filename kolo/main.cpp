#include <iostream>

using namespace std;

int pow(int a ,int b);

int main()
{

    int size_x = 80;
    int size_y = 45;
    for (int y = 0; y < size_y;y++){

        for(int x = 0; x < size_x; x++){

            if((x - size_x/2) * (x - size_x/2)+(y - size_y/2) * (y - size_y/2) <= size_x/2 * size_y/2){

                cout << ". ";

            }
            else{

                cout << "# ";

            }



        }

        cout << endl;

    }
    return 0;
}



int pow(int a , int b){

int wynik =1;

for(int i = 0 ; i < b; i++ ){

    wynik *= a;

}

return wynik;

}
