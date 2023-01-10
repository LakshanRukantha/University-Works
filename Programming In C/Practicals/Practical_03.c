#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Question 01

    float find_highest(float num_1, float num_2)
    {
        return num_1 > num_2 ? num_1 : num_2;
    }

    float num_1, num_2;
    printf("Enter the first number: ");
    scanf("%f", &num_1);
    printf("Enter the second number: ");
    scanf("%f", &num_2);
    printf("Highest number is : %.2f\n", find_highest(num_1, num_2));

    //Question 02

    int num1, num2, num3, maxNum, minNum;

    int max(){
        if (num1 >= num2 && num1 >= num3)
            maxNum = num1;
        if (num2 >= num1 && num2 >= num3)
            maxNum = num2;
        if (num3 >= num1 && num3 >= num2)
            maxNum = num3;
            printf("The largest number is : %d\n", maxNum);
        }

    int min(){
        if (num1 <= num2 && num1 <= num3)
            minNum = num1;
        if (num2 <= num1 && num2 <= num3)
            minNum = num2;
        if (num3 <= num1 && num3 <= num2)
            minNum = num3;
            printf("The smallest number is : %d\n", minNum);
        }

    printf("Enter three numbers (ex:4 8 2): ");
    scanf("%d %d %d", &num1,&num2, &num3);

    max(num1, num2, num3);
    min(num1, num2, num3);

    //Question 03

    char name[100];
    float basic_salary, increment, new_salary;

    // Input employee name and basic salary
    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate increment and new salary
    if (basic_salary < 5000) {
        increment = basic_salary * 0.05;
    } else if (basic_salary < 10000) {
        increment = basic_salary * 0.10;
    } else {
        increment = basic_salary * 0.15;
    }
    new_salary = basic_salary + increment;

    // Print the results
    printf("Employee Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("New Salary: %.2f\n", new_salary);

    //Question 04

    float radius, diameter, circumference, area;
    const float PI = 3.14159265359;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the diameter, circumference and area
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // Print the results
    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    //Question 05

    int a, b;

    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    if (b != 0 && a % b == 0) {
        printf("%d is a multiple of %d\n", a, b);
    } else {
        printf("%d is not a multiple of %d\n", a, b);
    }

    //Question 06

    char user_input;

    printf("Enter a character: ");
    scanf(" %c", &user_input);

    printf("The integer equivalent of '%c' is %d\n", user_input, user_input);

    //Question 07

    float basic_salary1, allowance, bonus, gross_remuneration;
    int years_of_service, monthly_sales;
    char city;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary1);
    printf("Enter years of service: ");
    scanf("%d", &years_of_service);
    printf("Enter city of working (Ex: C for Colombo): ");
    scanf(" %c", &city);
    printf("Enter monthly sales: ");
    scanf("%d", &monthly_sales);

    if (years_of_service > 5) {
        allowance = basic_salary1 * 0.1;
    } else {
        allowance = 0;
    }
    if (city == 'C' || 'c') {
        allowance += 2500;
    }
    if (monthly_sales < 25000) {
        bonus = monthly_sales * 0.1;
    } else if (monthly_sales < 50000) {
        bonus = monthly_sales * 0.12;
    } else {
        bonus = monthly_sales * 0.15;
    }
    gross_remuneration = basic_salary1 + allowance + bonus;
    printf("Gross monthly remuneration: Rs %.2f\n", gross_remuneration);

    return 0;
}
