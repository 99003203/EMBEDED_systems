#include <stdio.h>
int main() {    

    int num1, num2, mul;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

   
    mul = num1 * num2;      
    
    printf("%d * %d = %d", num1, num2, mul);
    return 0;
}