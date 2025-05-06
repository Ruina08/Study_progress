#include <stdio.h>

int main() {
    int num1, num2, sum, subtr, mult, divis;

    printf("Введите первое число: ");
    scanf("%d", &num1);

    printf("Введите второе число: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    
    subtr = num1 - num2;
    
    mult = num1 * num2;
    
    divis = num1 / num2;
    
    printf("Сумма: %d\n", sum);
    
    printf("Вычитание: %d\n", subtr);
    
    printf("Умножение: %d\n", mult);
    
    printf("Деление: %d\n", divis);
    
    return 0;
}