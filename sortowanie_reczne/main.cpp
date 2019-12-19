#include <iostream>
#include <ctime>
#include <algorithm>

void error(std::string);

#define NULL_CODE 127

int main() {

    u_int8_t tab_1[10];
    u_int8_t tab_2[10];
    u_int8_t tab_3[10];

    u_int8_t *tab_1_ptr = tab_1;
    u_int8_t *tab_2_ptr = tab_2;

    u_int8_t poz = 0;
    u_int8_t licznik = 1;
//TODO dodac input
    char input;
//TODO dodac funckcje sortujaca
    sort(tab_3);
    while (licznik != 10) {
        switch (input) {
            case 'a':
                if (poz == 0) {
                    error("left");
                    break;
                }
                tab_1_ptr--;
                poz--;
                break;
            case 'd':
                if (poz == 9) {
                    error("right");
                    break;
                }
                tab_1_ptr++;
                poz++;
                break;
            case 's':
                *tab_2_ptr = *tab_1_ptr;
                tab_2_ptr++;
                *tab_1_ptr = NULL_CODE;
                licznik++;
                break;
            default:
                std::cout << "Wrong input" << std::endl;
        }
    }


}

void error(std::string x) {
    std::cout << "You have chosen position to far " << x << std::endl;
}

void show(int *tab, int size) {
    for (int i = 0; i < size; i++) {
        char znak;
        if (tab[i] > 9)znak += ' ';
        znak = tab[i] + '0';
        if (tab[i] == NULL_CODE)znak = ' ';
        std::cout << " [" << znak << "] ";
    }
    std::cout << std::endl;

}

void show_pointer(int x){
//TODO Wyswietlanie wskaznika
}





