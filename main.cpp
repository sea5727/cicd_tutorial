#include <iostream>
#include "add1.hpp"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    std::cout << "this is test_branch_3 input\n";

    int result = proc_plus(1, 10);
    printf("result : %d\n", result);


    int minus = proc_minus(10, 1);
    printf("minus : %d\n", minus);
    return 0;

}
