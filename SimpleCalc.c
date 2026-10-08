# include <stdio.h>
int main () {
    float num1 , num2, result;
    int choice;
    
    printf("~~~~~~~~~~~ Simple Calcultor ~~~~~~~~~~~~\n");
    printf("Enter the first number: \n");
    scanf("%f", &num1);
    printf("Enter the second number: \n");
    scanf("%f", &num2);
    printf("\nChoice Operation: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice (1-4): \n");
    scanf("%d", &choice);

switch(choice){
    case 1: 
        result = num1 + num2;
        printf("Result is: %.3f\n", result);
        break;
    case 2: 
        result = num1 - num2;
        printf("Result is: %.3f\n", result);
        break;
    case 3: 
        result = num1 * num2;
        printf("Result is: %.3f\n", result);
        break;
    case 4: 
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed!\n");
        } else {
            result = num1/num2;
            printf("Result is: %.3f\n", result);
        }
        break;
        default:
        printf("Invalid choice! Please enter a valid option (1-4).\n");


}

return 0;

}