#include <stdio.h> 
int main() {
   
    double num1, num2, product; 

   
    printf("Enter the first number: ");
    
    scanf("%lf", &num1); 

    printf("Enter the second number: ");
    
    scanf("%lf", &num2); 

    product = num1 * num2; 

   
    printf("Product = %.2lf\n", product); 

    return 0;
}
