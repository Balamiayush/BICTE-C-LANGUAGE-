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

// #include<stdio.h>

// int main(){
//     int num = 111;
    
//     // If the number is negative or if the last digit is 0 and the number isn't 0, it's not a palindrome
//     if (num < 0 || (num % 10 == 0 && num != 0)) {
//         printf("%d is not a palindrome", num);
//         return 0;
//     }
    
//     int reverseHalf = 0;
//     while (num > reverseHalf) {
//         reverseHalf = reverseHalf * 10 + num % 10;
//         num = num / 10;
//     }
    
//     // Check if the original number (now partially divided) is equal to the reversed half
//     if (num == reverseHalf || num == reverseHalf / 10) {
//         printf("The number is a palindrome");
//     } else {
//         printf("The number is not a palindrome");
//     }

//     return 0;
// }
