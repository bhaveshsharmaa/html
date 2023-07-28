#include <stdio.h>
int num(int a,int b,int c) {
    int sum = a + b;
    int multi = sum * c;
    return multi;
}

int main() {
    int num1 = 2;
    int num2 = 3;
    int num3 = 4;

    int result = num(num1, num2, num3);

    printf("The result is: %d\n", result);

    return 0;
}

