#include <cstdlib>
#include <ctime>
#include <iostream>
//#include "../include/simple.h"


namespace simple{

template<typename t> void list_show(t tab[],int size);
template <class t> void swap(t &a, t &b);
int random(int a, int b);
void sort(int tab[], int size);
template <class t> void arr_show(t **arr,int sizeX,int sizeY);
void init();

}
//using namespace simple;

void simple::init() { std::srand(time(NULL)); }

template <class t> void simple::swap(t &a, t &b) {
  t temp = a;
  a = b;
  b = temp;
}

template <typename t> void simple::list_show(t tab[], int size) {
  for (int i = 0; i < size; i++) {

    std::cout << tab[i] << ", ";
  }
}


//TODO: Sprawdzic czy poprawna kolejnosc wyswietlania x i y
//TODO: how to pass 2d arr as a paramter
template<class t> void simple::arr_show(t **arr,int sizeX,int sizeY){
  for (int x = 0; x < sizeX ; x++){
    for(int y = 0; y < sizeY ; y++){
      std::cout << arr[y][x];
    }
  }
}



void simple::sort(int tab[], int size) {
  bool flag;
  do {
    flag = false;
    for (int j = 0; j < size - 1; j++) {
      if (tab[j] > tab[j + 1]) {
        flag = true;
        swap(tab[j], tab[j + 1]);
      }
    }
  } while (flag);

}

int simple::random(int a, int b) {
  // wymaga ziarna w postaci #include<ctime> std::srand(time(NULL))
  int rand = std::rand();

  return (rand % (b + 1 - a)) + a;
}

int main() {
  simple::init();
  int a = 0;
  int b = 10;
  const int size = 100;
  int tab[size];

  int d2[3][3] = {};

  int x = simple::random(3,5);
  std::cout << x;
  simple::sort(tab, size);
  simple::list_show(tab, size);
  //simple::arr_show(d2, 3.3);
}