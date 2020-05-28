#include <iostream>
#include "add1.hpp"

int main(int, char**) {
    std::cout << "Hello, world!!!!\n";

    int result = proc_plus(1, 10);
    printf("result : %d\n", result);


    int minus = proc_minus(10, 1);
    printf("minus : %d\n", minus);

    int mul = proc_multi(10, 10);
    printf("mul : %d\n", mul);
    return 0;

}
