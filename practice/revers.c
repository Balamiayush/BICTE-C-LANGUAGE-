#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int temp = num;
    int reversed = 0;
    
    // Reverse the number
    while (temp != 0) {
        int digit = temp % 10;       // Extract the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        temp = temp / 10;            // Remove the last digit from temp
    }
    printf("Reversed number: %d\n", reversed);
    if(reversed == num) {
        printf("%d is a palindrome.\n", num);
    }
    else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}
