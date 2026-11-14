// 1. Basic Array Input and Output
/*
#include<stdio.h>

int main(){
    int marks[4];
    printf("enter phy: ");
    scanf("%d", &marks[0]);

    printf("enter chem: ");
    scanf("%d", &marks[1]);

    printf("enter math: ");
    scanf("%d", &marks[2]);

    printf("enter bio: ");
    scanf("%d", &marks[3]);

    printf("phy=%d, chem=%d, math=%d, bio=%d \n", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}
*/

// 2. Array Price with GST Calculation
/*
#include<stdio.h>

int main(){
    float price[3];
    printf("enter 3 prices: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price 1: %f \n", price[0] + (0.18 * price[0]));
    printf("total price 2: %f \n", price[1] + (0.18 * price[1]));
    printf("total price 3: %f \n", price[2] + (0.18 * price[2]));
    return 0;
}
*/

// 3. Pointer Arithmetic (Integer Pointer Increment/Decrement)
/*
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr after increment = %u \n", ptr);
    ptr--;
    printf("ptr after decrement = %u \n", ptr);
    return 0;
}
*/

// 4. Pointer Arithmetic (Float Pointer Increment/Decrement)
/*
#include<stdio.h>
int main(){
    float price = 100.00;
    float *ptr = &price;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr after increment = %u \n", ptr);
    ptr--;
    printf("ptr after decrement = %u \n", ptr); // jumps by 4 bytes for float

    return 0;
}
*/

// 5. Pointer Arithmetic (Char Pointer Increment/Decrement)
/*
#include<stdio.h>
int main(){
    char star = '*';
    char *ptr = &star;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr after increment = %u \n", ptr); // jumps by 1 byte for char
    ptr--;
    printf("ptr after decrement = %u \n", ptr);
    return 0;
}
*/

// 6. Subtracting and Comparing Pointers
/*
#include<stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("difference = %u \n", ptr - _ptr);
    _ptr = &age;
    printf("comparison (ptr == _ptr) = %u \n", ptr == _ptr); // output: 1 (true)
    return 0;
}
*/

// 7. Traversing an Array using Pointers
/*
#include<stdio.h>

int main(){
    int aadhar[5];

    // input
    int *ptr = &aadhar[0];
    for(int i = 0; i < 5; i++){
        printf("%d index: ", i);
        scanf("%d", (ptr + i));
    }

    // output
    for(int i = 0; i < 5; i++){
        printf("%d index = %d \n", i, *(ptr + i));
    }
    return 0;
}
*/

// 8. Passing Array as Function Argument
/*
#include<stdio.h>

void printNumbers(int *arr, int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);

    return 0;
}

void printNumbers(int *arr, int n){
    for (int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
*/

// 9. Multidimensional Arrays (2D Arrays - Matrix representation)
/*
#include<stdio.h>

int main(){
    // 2 * 3 matrix
    int marks[2][3]; 
    marks[0][0] = 85;
    marks[0][1] = 95;
    marks[0][2] = 75;

    marks[1][0] = 83;
    marks[1][1] = 82;
    marks[1][2] = 89;

    printf("marks[0][0] = %d \n", marks[0][0]);
    return 0;
}
*/

// 10. Function to Count Odd Numbers in an Array
/*
#include<stdio.h>

int countOdd(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("Odd numbers count = %d \n", countOdd(arr, 6));
    return 0;
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){ // odd
            count++;
        }
    }
    return count;
}
*/

// 11. Pointer Arithmetic Expressions on Arrays (*(arr+2) and *(arr+5))
/*
#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("*(arr + 2) = %d \n", *(arr + 2)); // value at index 2 (3)
    printf("*(arr + 5) = %d \n", *(arr + 5)); // out of bounds / garbage or next memory value
    return 0;
}
*/

// 12. Function to Reverse an Array
/*
#include<stdio.h>

void reverse(int arr[], int n);
void printArr(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArr(arr, 5);
    return 0;
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n){
    for(int i = 0; i < n / 2; i++){
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
}
*/

// 13. Store First n Fibonacci Numbers in an Array
/*
#include<stdio.h>

int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int fib[n];
    if(n > 0) fib[0] = 0;
    if(n > 1) fib[1] = 1;

    printf("Fibonacci series: ");
    if(n > 0) printf("%d \t", fib[0]);
    if(n > 1) printf("%d \t", fib[1]);

    for(int i = 2; i < n; i++) { 
        fib[i] = fib[i - 1] + fib[i - 2]; 
        printf("%d \t", fib[i]);
    }
    printf("\n");
    return 0;
}
*/

// 14. Create a 2D Array Storing Tables of 2 and 3
#include<stdio.h>

void storeTable(int arr[][10], int n, int m, int number);

int main(){
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    printf("Table of 2: \n");
    for(int i = 0; i < 10; i++){ 
        printf("%d \t", tables[0][i]);
    }
    
    printf("\n\nTable of 3: \n");
    for(int i = 0; i < 10; i++){ 
        printf("%d \t", tables[1][i]);
    }
    printf("\n");

    return 0;
}

void storeTable(int arr[][10], int n, int m, int number){
    for(int i = 0; i < m; i++){   
        arr[n][i] = number * (i + 1); 
    }
}
