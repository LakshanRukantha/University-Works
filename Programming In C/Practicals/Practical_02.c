#include <stdio.h>
#include <stdlib.h>
#define CONVERSION_FACTOR (5.0 / 9.0)

int main()
{
    //Question 01

    int age;

    printf("HI, HOW OLD ARE YOU? ");
    scanf("%d", &age);

    printf("\n\nWELCOME %d\nLET'S BE FRIENDS!\n", age);

    //Question 02

    printf("%2d %4d %4d\n", 2, 4, 8);
    printf("%2d %4d %4d\n", 3, 9, 27);
    printf("%2d %4d %4d\n", 4, 16, 64);

    //Question 03

    //using int type variables

    int distance, time, avg_speed;

    printf("Enter the distance traveled in meters: ");
    scanf("%d", &distance);

    printf("Enter the time taken in seconds: ");
    scanf("%d", &time);

    avg_speed = distance / time;
    printf("The average speed of the car is: %d m/s\n", avg_speed);

    /*
    The issue with utilizing integer variables is that when we divide them,
    we receive an integer result that is truncated, not the exact decimal value.
    As a result, the fractional part of the data is lost,
    for example, if a car goes 1000 meters in 15 seconds,
    the average speed is 66, not the 66.67 m/s (approximately value)

    We can fix this by using float variables like below code.
    */

    //using float type variables

    float distance1, time1, avg_speed1 = 0;

    printf("Enter the distance traveled in meters: ");
    scanf("%f", &distance1);

    printf("Enter the time taken in seconds: ");
    scanf("%f", &time1);

    avg_speed1 = distance1 / time1;
    printf("The average speed of the car is: %.2f m/s\n", avg_speed1);

    //Question 04

    double fahrenheit, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = CONVERSION_FACTOR * (fahrenheit - 32);

    printf("%.2lf Fahrenheit = %.2lf Celsius\n", fahrenheit, celsius);

    //Question 05

    /*
    int i=5,j;
    j = ++i + ++i + ++i;
    printf("%d %d",i,j);
    */

    //The output will be 8 22

    //Question 06

    /*
    int i=1;
    i=2+2*i++;
    printf("%d",i);
    */

    //The output will be 4

    //Question 07

    /*
    int a=2,b=7,c=10;
    c=a==b;
    printf("%d",c);
    */

    //The output will be 0

    //Question 08

    int a=0,b=10;
    if(a=0){
         printf("true");
    }
    else{
         printf("false");
    }

    //The output will be 'false'

    //Question 09

    /*
    int a;
    a=015 + 0x71 +5;
    printf("%d",a);
    */

    //The output will be 131

    //Question 10

    /*
    int i=5;
    int a=++i + ++i;
    printf("%d",a);
    */

    //The output will be 14

    return 0;
}
