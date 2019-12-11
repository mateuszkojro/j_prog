#include <iostream>

void show(int, char *);

int main() {
#if 0
    char tab_1[10] = "uni.lodz";
    char tab_2[] = "uni.lodz";
    char tab_3[] = {'u', 'n', 'i', '.', 'l', 'o', 'd', 'z'};
    char tab_4[10] = {'u', 'n', 'i', '.', 'l', 'o', 'd', 'z'};


    char tab_1[10] = "uni";
    char tab_2[] = "uni";
    char tab_3[] = {'u', 'n', 'i'};
    char tab_4[10] = {'a', 'b', 'c'};

    show(10, tab_1);
    std::cout << tab_1<<std::endl;
    std::cout << "rozmiar: " << sizeof(tab_1) << std::endl;
    show(10, tab_2);
    std::cout << tab_2<<std::endl;
    std::cout << "rozmiar: " << sizeof(tab_2) << std::endl;
    show(10, tab_3);
    std::cout << tab_3<<std::endl;
    std::cout << "rozmiar: " << sizeof(tab_3) << std::endl;
    show(10, tab_4);
    std::cout << tab_4<<std::endl;
    std::cout << "rozmiar: " << sizeof(tab_4) << std::endl;


#endif

char tab[20];

std::cin.getline(tab,20);
show(20,tab);
std::cout <<std::endl << tab;
}


void show(int size, char *tab) {

    for (int i = 0; i < size; i++) {
        std::cout << "[" << i << "]"
                  << "   " << tab[i] << std::endl;
    }

    std::cout << std::endl;
}