#include <iostream>
void show(char *,int);

int main(){

    const int size = 20;
    const int size_pin = 4;
    char tab[size];
    char pin[4] = {7,4,9,2};
    
    std::cin.get(tab,size);
    show(tab,size);
    //szyfroj
    #if 0
    for (int i = 0 ; i < size;i++){
        tab[i] = tab[i] + pin[i%size_pin];
    }
    #endif

    std::cout << tab<< std::endl;

    #if 1
    for (int i = 0 ; i < size;i++){
        tab[i] = tab[i] - pin[i%size_pin];
    }
    #endif
    std::cout << tab ;

}

void show(char * tab,int size_t){
    for (int i  = 0 ; i < size_t;i++){
        std::cout << tab[i];
    }
    std::cout << std::endl;
}