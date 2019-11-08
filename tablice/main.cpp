#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int len = 10;
    int arr[len];

    for (int i = 0; i < len;i++){

        arr[i] = pow(2,i);
        cout << arr[i] <<endl;
    }

    return 0;
}
