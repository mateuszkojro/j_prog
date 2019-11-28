#include <iostream>


int main() {

    int pola = 3;
    int zakres = 5;
    int x = 0;
    int y = 1;
    int z = 2;
    int i =0;
    while(x < zakres ) {
        
        while (y < zakres ) {
            
            while (z < zakres) {
                std::cout << x << y << z << std::endl;
                i++;
                z++;
            }
            y++;
            std::cout << y;
        }
        x++;
    }

    std::cout << std::endl<<i;
    return 0;
}