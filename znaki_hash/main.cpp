#include <iostream>

using namespace std;

int main()
{

    for(int y = 0; y < 10;y++){

        for(int x = 0;x < 10;x++){

            if(x != y){
                cout << "#";
            }
            else {
                cout << " ";
            }

        }

        cout << endl;

    }

    cout << endl;

    for(int y = 0; y < 10;y++){

        for(int x = 0;x < 10;x++){

            if(x != y && x != 9 - y){
                cout << "#";
            }
            else {
                cout << " ";
            }

        }

        cout << endl;

    }


    cout << endl;


    for (int y = 0; y < 10;y++){

        for (int x = 0; x < 10 ;x++){

            if (x > 0 && x < 9 && y > 0 && y < 9){
                if(x != y && x != 9 - y){
                    cout << "#";
                }
                else {
                    cout << " ";
                }
            }
            else{
                cout << "#";
            }

        }
        cout << endl;
    }




    return 0;
}
