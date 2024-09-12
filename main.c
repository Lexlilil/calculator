#include <stdio.h>

int main(void) {
    
    float input;
    float input2;
    char function;

    printf("what would you like to do?\n");
    scanf("%c", &function);
    printf("please input your first number\n");
    scanf("%f", &input);
    printf("please input your second number\n");
    scanf("%f", &input2);


    switch (function) {
        case '+':
            printf("%f", input + input2);
            break;

        case '-':
            printf("%f", input - input2);
            break;

        case '*':
            printf("%f", input * input2);
            break;

        case '/':
            printf("%f", input / input2);
            break;

        default: printf("use a correct input");
    }

    return 0;
}

