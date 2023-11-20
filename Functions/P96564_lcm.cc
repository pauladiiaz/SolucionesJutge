#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the least common multiple (LCM)
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    while (true) {
        int n;
        std::cin >> n;
        
        if (n == 0) {
            break;
        }
        
        std::vector<int> numbers(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> numbers[i];
        }
        
        int result = numbers[0];
        for (int i = 1; i < n; ++i) {
            result = lcm(result, numbers[i]);
        }
        
        std::cout << result << std::endl;
    }
    
    return 0;
}
