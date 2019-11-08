#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    do {
        cout << ++x<< endl;
    }
    while (x <=10);
     x = 0;

        do {
        cout << x++<< endl;
    }

    while (x <=10);
    x = 0;

        do {
        cout << x<< endl;
    }

    while (++x <=10);
 x = 0;
        do {
        cout << x<< endl;
    }
    while (x++ <=10);
    return 0;
}
