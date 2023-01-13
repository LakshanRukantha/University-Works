#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    //Part A

    //Answer for question No: 01

    int i, num, positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);
    printf("Number of zero numbers: %d\n", zeroCount);

    //Answer for question No: 02

    int marks[10], i;
    float sum = 0, avg;

    printf("Enter marks of 10 students: \n");

    // Input marks of 10 students
    for(i = 0; i < 10; ++i) {
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Find maximum and minimum marks
    int max = marks[0], min = marks[0];
    for(i = 1; i < 10; ++i) {
        if(marks[i] > max) {
            max = marks[i];
        }
        if(marks[i] < min) {
            min = marks[i];
        }
    }

    // Calculate average marks
    avg = sum / 10.0;

    printf("Maximum marks = %d\n", max);
    printf("Minimum marks = %d\n", min);
    printf("Average marks = %.2f\n", avg);

    //Answer for question No: 03

    float prices[10], sum = 0, avg;
    int i, count = 0;

    printf("Enter the prices of 10 items: \n");

    // Input prices of 10 items
    for(i = 0; i < 10; ++i) {
        printf("Enter price of item %d: ", i+1);
        scanf("%f", &prices[i]);
        sum += prices[i];
    }

    // Calculate average price
    avg = sum / 10.0;

    // Count items with price greater than 200
    for(i = 0; i < 10; ++i) {
        if(prices[i] > 200) {
            count++;
        }
    }

    printf("Average price of an item: %.2f\n", avg);
    printf("Number of items with price greater than 200: %d\n", count);

    //Answer for question No: 04

    int emp_no, count = 0;
    float basic_sal;

    printf("Enter -999 as employee id to end the process.\n");
    while(1) {
        printf("Enter employee number: ");
        scanf("%d", &emp_no);
        if(emp_no == -999) {
            break;
        }
        printf("Enter basic salary: ");
        scanf("%f", &basic_sal);
        if(basic_sal >= 5000) {
            count++;
        }
    }

    printf("Number of employees with basic salary >= 5000: %d\n", count);

    //Answer for question No: 05

    int empNum, hours;
    float overtimePay, totalPay;
    int over4000 = 0;
    int totalEmp = 0;

    printf("Enter employee number (-999 to end): ");
    scanf("%d", &empNum);

    while (empNum != -999) {
        printf("Enter hours worked: ");
        scanf("%d", &hours);

        if (hours > 40) {
            overtimePay = 40*150 + (hours - 40) * 200;
        } else {
            overtimePay = hours * 150;
        }

        totalPay = overtimePay;

        if(totalPay > 4000)
          over4000++;
        totalEmp++;

        printf("Employee %d Overtime Payment: %.2f\n", empNum, overtimePay);

        printf("Enter employee number (-999 to end): ");
        scanf("%d", &empNum);
    }
    printf("Percentage of employees whose Overtime Payment exceeding the Rs. 4000/- : %.2f%%\n", (over4000*100.0)/totalEmp);

    //Part B

    //Switch Statements

    //Answer for: Q1

    //Using IF and Else statements

    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    //Using Switch statement

    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    switch (num % 2) {
        case 0:
            printf("%d is an even number.\n", num);
            break;
        case 1:
            printf("%d is an odd number.\n", num);
            break;
    }

    //Answer for: Q2

    float num1, num2, result;
    char operator;

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Select the operation to perform (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot divide by zero!\n");
            } else {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    //Answer for: Q3

    int choice;
    float radius, result;
    const float pi = 3.14159265;

    printf("Menu:\n");
    printf("----------------------------------\n");
    printf("1. Calculate the circumference of a circle\n");
    printf("2. Calculate the area of a circle\n");
    printf("3. Calculate the volume of a sphere\n");
    printf("----------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the radius: ");
    scanf("%f", &radius);

    switch (choice) {
        case 1:
            result = 2 * pi * radius;
            printf("The circumference of the circle is %.2f\n", result);
            break;
        case 2:
            result = pi * pow(radius, 2);
            printf("The area of the circle is %.2f\n", result);
            break;
        case 3:
            result = (4.0/3.0) * pi * pow(radius, 3);
            printf("The volume of the sphere is %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    //Answer for: Q4

    char letter;
    printf("Enter a letter: ");
    scanf(" %c", &letter);

    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", letter);
            break;
        default:
            printf("%c is not a vowel.\n", letter);
    }

    //Answer for: Q5

    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);

    switch(month) {
        case 1:
            printf("January has 31 days.\n");
            break;
        case 2:
            printf("February has 28 days.\n");
            break;
        case 3:
            printf("March has 31 days.\n");
            break;
        case 4:
            printf("April has 30 days.\n");
            break;
        case 5:
            printf("May has 31 days.\n");
            break;
        case 6:
            printf("June has 30 days.\n");
            break;
        case 7:
            printf("July has 31 days.\n");
            break;
        case 8:
            printf("August has 31 days.\n");
            break;
        case 9:
            printf("September has 30 days.\n");
            break;
        case 10:
            printf("October has 31 days.\n");
            break;
        case 11:
            printf("November has 30 days.\n");
            break;
        case 12:
            printf("December has 31 days.\n");
            break;
        default:
            printf("Invalid month has entered!\n");
            break;
    }

    //Loops (While, Do..While, For)

    //Answer for: Q1

    //Using while loop:

    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    //Using do-while loop:

    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    //Using for loop:

    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    //Answer for: Q2

    int marks[10], total = 0;
    float average;

    for (int i = 0; i < 10; i++) {
        printf("%d) Enter marks: ", i+1);
        scanf("%d", &marks[i]);
        while(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid mark! Please enter a mark between 0 and 100: ");
            scanf("%d", &marks[i]);
        }
        total += marks[i];
    }

    average = (float) total / 10;
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    if (average < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }

    //Answer for: Q3

    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("The factorial of 0 is 1.\n");
    } else {
        int i = 1;
        while (i <= num) {
            factorial *= i;
            i++;
        }
        printf("The factorial of %d is %d.\n", num, factorial);
    }

    //Answer for: Q4

    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("The sum of the digits is: %d\n", sum);

    //Answer for: Q5

    int num, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    do {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    } while (num != 0);

    printf("Reversed number: %d", reversed);

    //Answer for: Q6

    int base, exponent, result = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("Result: %d", result);

    //Answer for: Q7

    int n = 10, first = 0, second = 1, next;
    printf("First %d numbers of Fibonacci sequence: ", n);
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    //Answer for: Q8

    int n, rem, sum = 0, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is an Armstrong number.", n);
    } else {
        printf("%d is not an Armstrong number.", n);
    }

    //Answer for: Q9

    //Using while loop:

    char letter = 'A';

    while(letter<='Z'){
        printf("%c ", letter);
        letter++;
    }
    //Using for loop:

    char letter;

    for (letter = 'A'; letter <= 'Z'; letter++){
    printf("%c ", letter);
    }

    //Answer for: Q10

    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    //Answer for: Q11

    int isPrime(int n) {
      if (n <= 1) return 0;
      for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
      }
      return 1;
    }

    int n;
    printf("Enter a positive integer: ");
    scanf("%d", & n);

    if (isPrime(n)) {
      printf("%d is a prime number.", n);
    } else {
      printf("%d is not a prime number.", n);
    }

    //Answer for: Q12

    void print_factors(int n) {
    for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      printf("%d ", i);
        }
      }
    }

    int n;
    printf("Enter an integer: ");
    scanf("%d", & n);
    printf("Factors of %d are: ", n);
    print_factors(n);

    //Answer for: Q13

    int input, sum = 0;
    printf("Enter numbers to be added. Enter -1 to stop.\n");
    printf("--------------------------------------------\n");
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &input);
        if (input == -1) {
            break;
        }
        sum += input;
    }
    printf("Sum of all entered numbers: %d", sum);

    //Answer for: Q14

    int arr[10];
    int i;
    printf("Input 10 elements in the array.\n");
    printf("-------------------------------\n");

    for (i = 0; i < 10; i++) {
    printf("element - %d : ", i + 1);
    scanf("%d", & arr[i]);
    }

    printf("\nElements in array are: ");
    for (i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
    }
    printf("\n");

    //Answer for: Q15

    int arr[10];
    int i, count = 0;
    printf("Input 10 elements in the array.\n");
    printf("-------------------------------\n");

    for (i = 0; i < 10; i++) {
    printf("element - %d : ", i + 1);
    scanf("%d", & arr[i]);

    if(arr[i]%2 == 0){
        count++;
    }

    }

    printf("\nElements in array are: ");
    for (i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
    }
    printf("\nEven numbers count: %d", count);
    printf("\n");

    return 0;
}
