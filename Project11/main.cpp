#include <windows.h>
#include <iostream>
#include <cstdlib> 
#include <ctime>  



int main() {
    const int SIZE = 20; 
    int arr[SIZE];

    
    std::srand(static_cast<unsigned int>(std::time(0)));

    
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = std::rand() % 16 - 5; 
    }

    
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl; 
        }
    }

    return 0;
}