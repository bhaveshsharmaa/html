// funcation palindrome number
#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum=reversedNum*10+num%10;
        num/=10;
    }
    return reversedNum;
}

int isPalindrome(int num) {
    int reversedNum=reverseNumber(num);
    return num==reversedNum;
}

int main() {
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}
