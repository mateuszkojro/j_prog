#include <iostream>

void swap(int *,int ,int);

int main()
{

    int  n =3;
    int *tab = new int [n];
    tab[0] = 1;
    tab[1] =2;
    int *k = 0;
    std::cout << *tab << " " << *(tab+1) << std::endl;
    swap(tab,0,1);
    
    std::cout << *tab << " " << *(tab+1) << std::endl;

    std::cout << "Hello world!" << std::endl;
    return 0;
}

void swap(int *tab,int i, int j){
  int temp = tab[i];
  tab[i] = tab[j];
  tab[j] = temp;
}
