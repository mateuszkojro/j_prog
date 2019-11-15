


//jezeli wszytsko jest w jednym pliku to sie kompiluje bez problemu 



#include "simple.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

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
  simple::arr_show(d2, 3.3);
}
