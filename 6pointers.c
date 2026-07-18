//POINTERS:Varible that stores the memory address of another variable.
//syntax:int age=22;  , int*ptr=&age;   , int_age=*ptr;
/*#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d", _age);
    return 0;
}*/


//Declaring Pointers: int*ptr;  char*ptoat*ptr;
//Format Specifier: print("%p", %age); print("%p", ptr); print("%p", &ptr);    //%p means pointer address
/*#include<stdio.h>

int main(){
    int age = 23;
    int *ptr = &age;

    //address
    //printf("%p \n", &age);
    printf("%u \n", &age);

    printf("%d \n", ptr);

    printf("%d \n", &ptr);
    return 0;
}*/



/*
#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;

    //value
    printf("%d \n", age);  //22
    printf("%d \n", *ptr);  //22
    printf("%d \n", *(&age)); //22
    return 0; 
}
*/


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



//Pointer to Pointer: a varialbe that stores the memory address of another pointer.
//syntax: int**pptr;  char**pptr;  float**pptr;
/*#include<stdio.h>

int main(){
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;
    return 0;
}
    */



//Q1 print the value of 'i' from its pointer to pointer.
/*#include<stdio.h>

int main(){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d \n", **pptr);
    return 0;
}*/


//pointer in function call : 1)call by value: we pass value of varible as arugment
//2) call by reference: we pass address of variable as arugment.
/*#include<stdio.h>


void square(int n);
void _square(int* n);

int main(){
    int number = 4;
    square(number);
    printf("number =%d \n", number);

    _square(&number);
    printf("number= %d \n", number);
    return 0;
}
//call by value
void square(int n){
    n = n*n;
    printf("sqaure = %d\n", n);
}

void _square(int* n){
    *n = (*n) * (*n);  //4*4
    printf("square = %d \n", *n);
}
    */


//Q2 Swap 2 numbers, a & b.
/*#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);
int main(){
    int x = 3 , y = 5;
    _swap(&x,&y);
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
    printf("a= %d & b = %d \n", a, b);
}*/


//Q3. will the address output be same ?
/*#include <stdio.h>

void printAddress(int *n);

int main(){
    int n = 4;
    printAddress(&n); // Pass the address of n
    printf("%u \n", &n);
    
    return 0;
}

void printAddress(int *n){
    printf("%u \n" , n); // Print the address that the pointer n points to
}
*/



//Q4. write a function to calculate the sum , product & aveage of 2 numbers.print that avage int the main function
#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
     int a = 3, b=5;
     int sum, prod, avg;
     doWork(a,b,&sum,&prod, &avg);

    printf("sum=%d, prod =%d, avg =%d \n", sum, prod, avg);
    return 0;
}
void doWork(int a , int b, int *sum , int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}
