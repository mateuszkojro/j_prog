#pragma once

#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>

namespace simple {

void init();
int random(int a, int b);
template <typename t> void list_show(t *tab, int size);
template <typename t> void swap(t &a, t &b);
template <typename t> void sort(t tab[], int size);
template <typename t> void log(std::string nazwa, t data);
template <typename t> void arr_show(t **arr, int sizeX, int sizeY);

} // namespace simple

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

#if 0

// TODO: Sprawdzic czy poprawna kolejnosc wyswietlania x i y
// TODO: how to pass 2d arr as a paramter
//znalezc sensowny sposob przekazywania 2d arrays

template <class t> void simple::arr_show(t **arr, int sizeX, int sizeY) {
  for (int x = 0; x < sizeX; x++) {
    for (int y = 0; y < sizeY; y++) {
      std::cout << arr[y][x];
    }
  }
}
#endif

template <class t> void simple::sort(t tab[], int size) {
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

template <typename t> void simple::log(std::string nazwa, t data) {
  std::cout << std::endl << "---------------LOG-------------------" << std::endl;
  std::cout << nazwa << " : " << data << std::endl <<std::endl;
}

class measure_time {
private:
  std::chrono::time_point<std::chrono::high_resolution_clock> start;
  std::chrono::time_point<std::chrono::high_resolution_clock> stop;

public:
  int time;

  measure_time() { start = std::chrono::high_resolution_clock::now(); }
  ~measure_time() {

    stop = std::chrono::high_resolution_clock::now();

    auto duration =
        std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

    int time = duration.count();

    simple::log("czas wykonania ",time);
  }
};