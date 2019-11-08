#include <iostream>

using namespace std;

int main()
{

    char wybor;
    float a,b;
    //cout << " 1 - dodawanie \n 2 - odejmowanie \n 3- mnozenie \n 4 - dzielenie \n";
    cout << endl;

    cin >> a >> wybor >> b;


    switch(wybor){
        case '+':
            cout << a+b;
            break;
        case '-':
            cout << a-b;
            break;
        case '*':
            cout << a*b;
            break;
        case '/':
            if(b != 0 ){cout << a/b;}
            else {cout << "dzielenie przez zero";}
            break;
        default:
            cout << "bledne dzialenie ";
    }


    return 0;
}
