#include <iostream>
#include <cstdlib>
#include <ctime>


int main(){
    srand(time(NULL));
    const int size = 100;
    int tab[size];

    losuj_tab(size,tab);
    show_tab(size,tab);

    std::cout << "max: " << tab_max(size,tab)<<std::endl;
    std::cout << "min: " << tab_min(size,tab)<<std::endl;
    
    sort_tab(size,tab);
    show_tab(size,tab);

}