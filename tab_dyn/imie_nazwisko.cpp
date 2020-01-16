#include <iostream>


int main(){
    int ilosc_osob,ilosc_znakow;
    std::cin >> ilosc_osob;
    std::cin >> ilosc_znakow;

    char*** tab = new char**[ilosc_osob];

    for (int i = 0 ; i < ilosc_osob;i++){
        tab[i] = new char*[2];
        for(int j =0 ; j < 2;j++){
            tab[i][j] = new char [ilosc_osob];
        }
    }


    for (int i = 0;i < ilosc_osob;i++){
        std::cin >> tab[i][0];
        std::cin >> tab[i][1];   
    }

    std::cout << std::endl << std::endl;



    for(int i = 0; i < ilosc_osob;i++){
        std::cout << tab[i][0] << " " << tab[i][1] << std::endl;
    }

    int swap_a,swap_b;
    std::cin >> swap_a;
    std::cin >> swap_b;

    char** temp  = tab[swap_a];
    tab[swap_a] = tab[swap_b];
    tab[swap_b] = temp;

    for(int i = 0; i < ilosc_osob;i++){
        std::cout << tab[i][0] << " " << tab[i][1] << std::endl;
    }


}
