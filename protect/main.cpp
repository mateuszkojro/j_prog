#include <iostream>

int main (){
    int x;
    bool flag = false;
    while (!flag){
        std::cout << "blad podaj jeszcze raz";
        std::cin >> x;
        flag = std::cin.good();
        std::cin.clear();
        std::cin.sync();
    }
    std::cout << x+1;
}