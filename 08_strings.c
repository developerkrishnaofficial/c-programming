// 1. Basic Pointer Declaration and Accessing Value
/*
#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d", _age);
    return 0;
}
*/

// 2. Printing Addresses using %u and %p
/*
#include<stdio.h>

int main(){
    int age = 23;
    int *ptr = &age;

    // address formats
    printf("%u \n", &age);
    printf("%d \n", ptr);
    printf("%d \n", &ptr);
    return 0;
}
*/

// 3. Value at Address (* operator usage)
/*
#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;

    // value
    printf("%d \n", age);      // 22
    printf("%d \n", *ptr);     // 22
    printf("%d \n", *(&age));  // 22
    return 0; 
}
*/

// 4. Pointer Arithmetic and Updating Value via Pointer
/*
#include<stdio.h>

int main(){
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);

    *ptr += 5;
    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);

    (*ptr)++;
    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);
    return 0; 
}
*/

// 5. Pointer to Pointer (Double Pointer)
/*
#include<stdio.h>

int main(){
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;
    return 0;
}
*/

// 6. Print Value of 'i' using Pointer to Pointer
/*
#include<stdio.h>

int main(){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d \n", **pptr);
    return 0;
}
*/

// 7. Call by Value vs Call by Reference (Square Function)
/*
#include<stdio.h>

void square(int n);
void _square(int* n);

int main(){
    int number = 4;
    square(number); // Call by value (no change in main)
    printf("number = %d \n", number);

    _square(&number); // Call by reference (changes value in main)
    printf("number = %d \n", number);
    return 0;
}

void square(int n){
    n = n * n;
    printf("square = %d\n", n);
}

void _square(int* n){
    *n = (*n) * (*n);  
    printf("square = %d \n", *n);
}
*/

// 8. Swap Two Numbers using Call by Reference
/*
#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int x = 3, y = 5;
    _swap(&x, &y);
    printf("x = %d & y = %d \n", x, y);
    return 0;
}

void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d \n", a, b);
}
*/

// 9. Check if Address Passed to Function is Same
/*
#include <stdio.h>

void printAddress(int *n);

int main(){
    int n = 4;
    printAddress(&n); // Pass the address of n
    printf("address in main: %u \n", &n);
    return 0;
}

void printAddress(int *n){
    printf("address in function: %u \n", n); // Both addresses will be same
}
*/

// 10. Calculate Sum, Product, and Average using Pointers (Multiple Returns)
#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
     int a = 3, b = 5;
     int sum, prod, avg;
     doWork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d \n", sum, prod, avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}
