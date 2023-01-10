#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Question 01

   printf("Name: Lakshan Rukantha\n");
   printf("School: V/Agrabodhi Maha Vidyalaya\n");

   //Question 02

   printf("*\n");
   printf("**\n");
   printf("***\n");
   printf("****\n");
   printf("*****\n");

   //Question 03

   int num = 1;
   float num2 = 2.5;
   double num3 = 2.55555;
   char letter = 'C';

   printf("Int: %d\nFloat: %.2f\nDouble: %lf\nChar: %c\n", num, num2, num3, letter);

   //Question 04

    int a, b, total;

    printf("Enter two integers ('seperate with space'): ");
    scanf("%d%d", &a, &b);

    total = a + b;
    printf("The total is: %d\n", total);

    //Question 05

    double c, d, average;

    printf("Enter the first number: ");
    scanf("%lf", &c);

    printf("Enter the second number: ");
    scanf("%lf", &d);

    average = (c + d) / 2.0;
    printf("The average is: %.2lf\n", average);

    //Question 06

    char name[100];
    int birthYear, currentYear, age = 0;

    printf("Enter the student's name: ");
    scanf("%s", name);

    printf("Enter the student's birth year: ");
    scanf("%d", &birthYear);

    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;
    printf("%s is %d years old.\n", name, age);

    //Question 07

    int e, f, temp;

    printf("Enter the first number: ");
    scanf("%d", &e);

    printf("Enter the second number: ");
    scanf("%d", &f);

    printf("Before swap: First number = %d, Second number = %d\n", e, f);

    // swapping the values
    temp = e;
    e = f;
    f = temp;

    printf("After swap: First number = %d, Second number = %d\n", e, f);

    //Question 08

    printf("The color: %s\n", "blue");
	printf("First number: %d\n", 12345);
	printf("Second number: %04d\n", 25);
	printf("Third number: %i\n", 1234);
	printf("Float number: %3.2f\n", 3.14159);
	printf("Hexadecimal: %x\n", 255);
	printf("Octal: %o\n", 255);
	printf("Unsigned value: %u\n", 150);
	printf("Just print the percentage sign %%\n", 10);

    return 0;
}
