#include <math.h>
#include <stdio.h>

// 1. Addition
void calcAddition() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);

} 
// AGAIN?!?!
//hello idiot


// Fill the rest of the functionality here!
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Exponentiation

// 6. Sine
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = sin(radians);

    printf("The sine value is %f", answer);
}

// Fill the rest of the functionality here!
// 7. Cosine
// 8. Tangent
// 9. Floor
void calcFloor() {
    float num;
    int result;
    scanf("%f", &num);
    result=floor(num);
    printf("Floor integer of %.2f = %d", num,result);
}
// 10. Ceiling
// 11. Round
// 12. Absolute value

int main() {
    int choice;
    printf(
        "Welcome to the Cool Calculator program!\n\n"
        "1. Addition\n"
        "2. Subtraction\n"
        "3. Multiplication\n"
        "4. Division-123\n"
        "5. Exponentiation\n"
        "6. Sine\n"
        "7. Cosine\n"
        "8. Tangent\n"
        "9. Floor\n"
        "10. Ceiling\n"
        "11. Round\n"
        "12. Absolute value\n\n"
        "Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
        // 1. Addition
        case 1:
            calcAddition();
            break;

        case 2:
        case 3:
        case 4:
        case 5:

        // 6. Sine
        case 6:
            calcSine();
            break;

        case 7:
        case 8:
        case 9: calcFloor();
        case 10:
        case 11:
        case 12:
        default:
            printf("Invalid choice!");
    }
    return 0;
}
