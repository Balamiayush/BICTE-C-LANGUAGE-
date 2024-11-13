#include<stdio.h>

int main(){
    int num = 111;
    int temp = num, reverse = 0;
    
    // Reverse the number
    while(temp != 0){
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }
    
    // Check if the original number is equal to the reversed number
    if(reverse == num){
        printf("%d is a palindrome", num);
    }
    else{
        printf("%d is not a palindrome", num);
    }

    return 0;
}
