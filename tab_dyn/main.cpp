#include <iostream>

float srednia(float (*tab)[2],int n );

int main(){
    int n;

    std::cin >> n;

    float (* tab)[2] = new float[n][2];

    for (int i = 0 ; i < n ; i ++){
        std::cin >> tab[i][0];
        std::cin >> tab[i][1];
    }


    float suma = 0;
    float wagi = 0;
    for (int i = 0 ;i <n; i ++){
        suma += tab[i][0] * tab[i][1];
        wagi += tab[i][1];
    }
    

    std::cout << std::endl <<srednia(tab,n) << std::endl;

    delete [] tab;
    tab == NULL;

}


float srednia(float (* tab)[2],int n ){
    float suma = 0;
    float wagi = 0;
    for (int i = 0 ;i <n; i ++){
        suma += tab[i][0] * tab[i][1];
        wagi += tab[i][1];
    }
    return suma / wagi;
}