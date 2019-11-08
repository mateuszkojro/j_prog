#include <iostream>

using namespace std;

int main()
{
    int liczba = 43;
    int x;
    do{



        cin >> x;

        if (x < liczba){

            cout << "za malo \n";

        }

        else {

            cout << "za duzo \n";

        }



    }while( x != liczba );

    cout << "zgadles";

    return 0;
}
