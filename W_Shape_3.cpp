#include <iostream>

int main() 
{
    int n ;  // Number of rows in the upper half of the pattern
    std::cin>>n;
    // Printing the upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Printing spaces before the asterisks
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Printing the asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    // Printing the lower half of the pattern
    for (int i = n ; i >= 1; i--) {
        // Printing spaces before the asterisks
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Printing the asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}
