#include <iostream>
#include "./mstd.cpp"

int main() {
    // 1
    std::cout << mstd::strlen("Hello, World! s") << std::endl;
    // 2
    std::cout << mstd::strcmp("Hello, World!", "Hello, Worla!") << std::endl;

    char src[] = "source";

    // 3
    char dst[40];
    std::cout << mstd::strcpy(dst, src) << std::endl;
    std::cout << &src << std::endl;
    std::cout << &dst << std::endl;

    // 4
    char dst2[1000] = "destination";
    std::cout << mstd::strcat(dst2, src) << std::endl;
    std::cout << src << std::endl;
    std::cout << dst2 << std::endl;

    // 5
    int *myArray = new int[10];
    std::cout << myArray << std::endl;
    mstd::realloc(myArray, 10, 20);
    std::cout << myArray << std::endl;
    delete[] myArray;

    return 0;
}