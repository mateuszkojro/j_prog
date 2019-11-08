#include "measure_time.h"
#include <iostream>

int add(int a){

return a;
}

int main() {

	measure_time nowy;
	int a = 4;
       int c =  nowy.exec_time(a,add);
    std::cout << c;
	return 0;

}
