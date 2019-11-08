#include "measure_time.h"

#include <iostream>
#include <chrono>

template  <typename T> int measure_time::exec_time(T a,T (* func)(T)){

    auto start = std::chrono::high_resolution_clock::now();

        func(a);

    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    return duration.count();

}

template <typename T> void  measure_time::compare_exec_time(T a,T (* func1)(T),T(* func2)(T)){

    auto start1 = std::chrono::high_resolution_clock::now();

        func1(a);

    auto end1 = std::chrono::high_resolution_clock::now();

    auto start2 = std::chrono::high_resolution_clock::now();

        func2(a);

    auto end2 = std::chrono::high_resolution_clock::now();


    auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1);
    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2);

    long unsigned int duration1_int = duration1.count();
    long unsigned int duration2_int = duration2.count();

    long int diff = duration1_int -  duration2_int;

    if (duration1_int > duration2_int){

       std::cout << std::endl
       << "func2 is faster than func1 by: " << diff
       <<std::endl;
    }
    else
    {
        std::cout << std::endl
       << "func1 is faster than func2 by: " << -1*diff
       <<std::endl;
    }

}
