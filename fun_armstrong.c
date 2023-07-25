// funcation armstrong number
#include <stdio.h>
int number(int num) {
    int count=0;
    while(num!=0) {
        num/=10;
        count++;
    }
    return count;
}

int armstrong(int num) {
    int temp,rem,n=0,sum=0;

    temp=num;
    n = number(num);

    while(num!=0) {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num/=10;
    }

    return temp==sum;
}

int main() {
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    if (armstrong(number)) {
        printf("%d is an armstrong number.\n", number);
    } else {
        printf("%d is not an armstrong number.\n", number);
    }

    return 0;
}

