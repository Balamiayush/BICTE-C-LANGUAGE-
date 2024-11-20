#include <stdio.h>

int isFibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;  // 0 and 1 are Fibonacci numbers
    }

    int a = 0, b = 1;
    int fib = a + b;

    while (fib < n) {
        a = b;
        b = fib;
        fib = a + b;
    }

    // Check if we found the number in the sequence
    return (fib == n);
}

int main() {
    int n = 55;
    if (isFibonacci(n)) {
        printf("%d is a Fibonacci number\n", n);
    } else {
        printf("%d is not a Fibonacci number\n", n);
    }

    return 0;
}
