#include "fizzbuzz.h"

// Implementación de la función fizzbuzz
std::string fizzbuzz(int number) {
    if (number % 3 == 0 && number % 5 == 0) {
        return "FizzBuzz";
    } else if (number % 3 == 0) {
        return "Fizz";
    } else if (number % 5 == 0) {
        return "Buzz";
    } else {
        return std::to_string(number);
    }
}