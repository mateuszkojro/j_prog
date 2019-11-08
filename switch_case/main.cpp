#include <iostream>

using namespace std;

int main()
{
    int zmienna;

    cin >> zmienna;
    cout << endl;

    switch(zmienna){
        case 1:
            cout << "*";
            break;
        case 2:
            cout << "#";
            break;
        case 3:
            cout << "@";
        default:
            cout <<"default";


    }
    return 0;
}
