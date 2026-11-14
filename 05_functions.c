// 1. Basic Function Declaration, Definition, and Call
/*
#include<stdio.h> 

void printHello(); // prototype

int main(){
    printHello(); // function call 
    printHello();
    printHello();
    return 0;
}

void printHello() { // function definition
    printf("Hello World \n");
    printf("krishna \n");
}
*/

// 2. Multiple Functions (Hello and Goodbye)
/*
#include<stdio.h> 

void printHello();
void printgoodbye();

int main(){
    printHello(); 
    printgoodbye();
    return 0;
}

void printHello() {
    printf("hello \n");
}
void printgoodbye(){
    printf("good bye \n");
}
*/

// 3. Choice Based Functions (Namaste or Bonjour)
/*
#include<stdio.h> 

void namaste();
void bonjour();

int main(){
    printf("enter i for indian & f for french: ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i'){
        namaste();
    } else {
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("Namaste \n");
}
void bonjour(){
    printf("bonjour \n");
}
*/

// 4. Function with Arguments (Sum of two numbers)
/*
#include<stdio.h>

int sum(int a, int b);

int main(){
    int a, b;
    printf("enter 1st no: ");
    scanf("%d", &a);
    printf("enter 2nd no: ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("sum is: %d \n", s);
    return 0;
}

int sum(int x, int y){
    return x + y;
}
*/         

// 5. Functions with Table Printing and Sum
/*
#include<stdio.h>

int sum(int a, int b);
void printTable(int n);

int main(){
    int n;
    printf("enter a no: ");
    scanf("%d", &n);

    printTable(n); // argument / actual parameter
    return 0;
}

int sum(int x, int y){
    return x + y;
}

void printTable(int n){ // formal parameter
    for(int i=1; i<=10; i++){
        printf("%d \n", i * n);
    }
}
*/

// 6. Function demonstrating Pass by Value
/*
#include<stdio.h>

void calculatePrice(float value);

int main(){
    float value = 100.0;
    calculatePrice(value);
    printf("value in main is: %f \n", value); // Value remains unchanged (pass by value)
    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("final price is: %f \n", value);
}
*/

// 7. Library Function Example using <math.h>
/*
#include<stdio.h>
#include<math.h>

int main(){
    int n = 4;
    printf("%f", pow(n, 2));
    return 0;
}
*/

// 8. Functions to calculate Area of Square, Circle, and Rectangle
/*
#include<stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
    float a = 5.0;
    float b = 10.0;

    printf("area of rectangle is: %f \n", rectangleArea(a, b));
    printf("area of square is: %f \n", squareArea(a));
    printf("area of circle is: %f \n", circleArea(a));
    return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float rad){
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b){
    return a * b;
}
*/

// 9. Recursion: Print "Hello World" n times
/*
#include<stdio.h>

void printHW(int count);

int main(){
    printHW(5);
    return 0;
}

void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    printHW(count - 1);
}
*/

// 10. Recursion: Sum of first n natural numbers
/*
#include<stdio.h>

int sum(int n);

int main(){
    printf("sum is: %d \n", sum(5));
    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1 = sum(n - 1); 
    int sumN = sumNm1 + n;
    return sumN;
}
*/

// 11. Recursion: Factorial of n
/*
#include<stdio.h>

int fact(int n);

int main(){
    printf("factorial is: %d \n", fact(5));
    return 0;
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    int factNm1 = fact(n - 1);
    int factN = factNm1 * n;
    return factN;
}
*/

// 12. Function to convert Celsius to Fahrenheit
/*
#include<stdio.h>

float convertTemp(float celsius);

int main(){
    float far = convertTemp(32);
    printf("far: %f \n", far);
    return 0;
}

float convertTemp(float celsius) {
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}
*/

// 13. Function to calculate Percentage from 3 Subjects
/*
#include<stdio.h>

int calcPercentage(int science, int math, int sanskrit);

int main(){
    int sc = 89;
    int math = 95;
    int sanskrit = 99;

    printf("percentage is: %d \n", calcPercentage(sc, math, sanskrit));
    return 0;
}

int calcPercentage(int sci, int math, int sanskrit){
    return ((sci + math + sanskrit) / 3);
}
*/

// 14. Recursion: Print nth term of the Fibonacci sequence
#include<stdio.h>

int fib(int n);

int main(){
    printf("Final Fibonacci result: %d \n", fib(6));
    return 0;
}

int fib(int n){
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    printf("fib of %d is: %d \n", n, fibN);
    return fibN;
}
