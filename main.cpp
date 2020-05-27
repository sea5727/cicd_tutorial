#include <iostream>
#include "add1.hpp"

int main(int, char**) {
    std::cout << "Hello, world!\n";

    int result = proc_plus(1, 10);

    printf("result : %d\n", result);

    return 0;

}
