#include <iostream>

int main(){

    int x,y;
    std::cin  >> x;
    std::cin >> y;

    float** tab_2d = new float* [y];

    for(int i = 0; i < y; i++)tab_2d[i] = new float[x];

    for(int j = 0; j < x;j++)
        for(int i = 0 ; i < x ; i++)
            tab_2d[i][j] = float(i + j/10.0);



    for (int i = 0 ; i < y ;i++){
        for(int j = 0 ; j < x;j++){
            std::cout << tab_2d[i][j] << "  ";
        }
        std::cout << std::endl;
    }


    int n,k;

    std::cin >> n;
    std::cin >> k;
    float* temp = tab_2d[n];
    tab_2d[n] = tab_2d[k];
    tab_2d[k] = temp; 
    

    std::cout << std::endl;

    for (int i = 0 ; i < y ;i++){
        for(int j = 0 ; j < x;j++){
            std::cout << tab_2d[i][j] << "  ";
        }
        std::cout << std::endl;
    }


    for (int i = 0; i < y;i++)delete[] tab_2d[i];
    delete[] tab_2d;
    tab_2d = NULL;
}