#include <iostream>
#include "fizzbuzz.h"

int main() {
    for(int i = 1; i <= 100; i++) {
        std::cout << fizzbuzz(i) << "\n";
    }
    return 0;
}