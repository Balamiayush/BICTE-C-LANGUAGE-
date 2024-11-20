#include <stdio.h>
int main() {
    int num = 123;
    int reversed = 0 ,temp ;
    temp = num;
    while(temp != 0) {
        int digit = temp%10;
        reversed = reversed*10 + digit;
        temp = temp/10;
    }
    
    printf("The reversed number is: %d\n", reversed);
    
    if(reversed == num) {
        printf("%d is a palindrome.\n", num);
    }
    else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}