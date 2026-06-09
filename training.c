#include <stdio.h>


// PROGRAM 1: Find maximum between two numbers using conditional operator
void program1() {
    printf("\n===== PROGRAM 1: Max of Two Numbers =====\n");
    int num1, num2, max;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    max = (num1 > num2) ? num1 : num2;
    
    printf("Maximum between %d and %d is: %d\n", num1, num2, max);
}

// PROGRAM 2: Find maximum between three numbers using conditional operator
void program2() {
    printf("\n===== PROGRAM 2: Max of Three Numbers =====\n");
    int num1, num2, num3, max;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter third number: ");
    scanf("%d", &num3);
    
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    
    printf("Maximum between %d, %d, and %d is: %d\n", num1, num2, num3, max);
}

// PROGRAM 3: Check whether a number is even or odd using conditional operator
void program3() {
    printf("\n===== PROGRAM 3: Even or Odd =====\n");
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("%d is %s\n", num, (num % 2 == 0) ? "EVEN" : "ODD");
}

// PROGRAM 4: Check whether year is leap year or not using conditional operator
void program4() {
    printf("\n===== PROGRAM 4: Leap Year Check =====\n");
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("%d is %s leap year\n", year, 
           ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? "a" : "not a");
}

// PROGRAM 5: Check whether character is an alphabet or not using conditional operator
void program5() {
    printf("\n===== PROGRAM 5: Alphabet Check =====\n");
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("'%c' is %s alphabet\n", ch, 
           ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? "an" : "not an");
}

// PROGRAM 6: Swap two numbers using bitwise operator
void program6() {
    printf("\n===== PROGRAM 6: Swap Two Numbers =====\n");
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("\nBefore swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    
    printf("\nAfter swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
}

// PROGRAM 7: Enter a four digit number and print all digits
void program7() {
    printf("\n===== PROGRAM 7: Four Digit Number Extraction =====\n");
    int num, digit1, digit2, digit3, digit4;
    
    printf("Enter a four digit number: ");
    scanf("%d", &num);
    
    if (num < 1000 || num > 9999) {
        printf("Please enter a valid four digit number (1000-9999)\n");
        return;
    }
    

    digit1 = num / 1000;         
    digit2 = (num / 100) % 10;   
    digit3 = (num / 10) % 10;     
    digit4 = num % 10;           
    
    printf("\nThe digits of %d are:\n", num);
    printf("First digit (thousands): %d\n", digit1);
    printf("Second digit (hundreds): %d\n", digit2);
    printf("Third digit (tens): %d\n", digit3);
    printf("Fourth digit (ones): %d\n", digit4);
}

// PROGRAM 8: Check whether a number is positive, negative, or zero 

void program8() {
    printf("\n===== PROGRAM 8: Positive, Negative, or Zero =====\n");
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("%d is %s\n", num, 
           (num > 0) ? "POSITIVE" : (num < 0) ? "NEGATIVE" : "ZERO");
}

// PROGRAM 9: Find the absolute value of a number using conditional operator
void program9() {
    printf("\n===== PROGRAM 9: Absolute Value =====\n");
    int num, abs_val;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    abs_val = (num < 0) ? -num : num;
    
    printf("Absolute value of %d is: %d\n", num, abs_val);
}

// PROGRAM 10: Check whether a number lies within a specified range 
void program10() {
    printf("\n===== PROGRAM 10: Number Range Check =====\n");
    int num, lower, upper;
    
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("%d is %s within the range [%d, %d]\n", num,
           (num >= lower && num <= upper) ? "" : "NOT",
           lower, upper);
}

// MAIN FUNCTION - Menu to run all programs
int main() {
    int choice;
    
    while (1) {
        printf("1. Max of two numbers\n");
        printf("2. Max of three numbers\n");
        printf("3. Even or Odd\n");
        printf("4. Leap Year Check\n");
        printf("5. Alphabet Check\n");
        printf("6. Swap Two Numbers\n");
        printf("7. Four Digit Number Extraction\n");
        printf("8. Positive, Negative, or Zero\n");
        printf("9. Absolute Value\n");
        printf("10. Number Range Check\n");
        printf("0. Exit\n");
        printf("========================================\n");
        printf("Enter your choice (0-10): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                program1();
                break;
            case 2:
                program2();
                break;
            case 3:
                program3();
                break;
            case 4:
                program4();
                break;
            case 5:
                program5();
                break;
            case 6:
                program6();
                break;
            case 7:
                program7();
                break;
            case 8:
                program8();
                break;
            case 9:
                program9();
                break;
            case 10:
                program10();
                break;
            case 0:
                printf("\nThank you for using the program!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter a number between 0 and 10.\n");
        }
    }
    
    return 0;
}
