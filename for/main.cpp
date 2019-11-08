#include <iostream>

using namespace std;
void do_kwadrat();
int main()
{
    for (int x = 0;x <= 20 ;x++){

        if ((((x > 2) && (x <= 11) )|| ((x > 14) && (x <=16)))&&  x != 5){

            if (x < 10){

                cout << " ";

            }

            cout << x <<" : TAK\n";
        }
        else {
            if (x < 10){


                cout << " ";

            }

            cout << x << " : NIE\n";
        }

    }

    do_kwadrat();

    return 0;
}

void do_kwadrat(){

for(int x  =0; x < 10; x++){

    for (int y = 0; y < 10;y++){

        cout << "#";

    }

    cout << endl;

}

}
