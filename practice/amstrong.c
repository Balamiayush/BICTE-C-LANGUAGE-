#include <stdio.h>
int main() {
    int num = 153;
    int s=0;
    int temp = num;
    int reversed = 0;
    while(temp!=0) {
        int rem = temp%10;
        reversed = reversed*10 + rem;
         s +=rem*rem*rem;
        temp = temp/10;
    }
    
    printf("Reversed number: %d\n", reversed);
    if(s == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}