// 1. For Loop Basic (Print name 5 times)
/*
#include<stdio.h>

int main(){
    for(int i=1; i<=5; i= i+1) {
        printf("krishna \n");
    }
    return 0;
}
*/

// 2. For Loop (Countdown from 10 to 0)
/*
#include<stdio.h>
int main(){
    for(int i=10; i>=0; i=i-1) {
        printf("%d \n", i);
    }
    return 0;
}
*/

// 3. For Loop (Print numbers from 1 to 100)
/*
#include<stdio.h>

int main(){
    for(int i=1; i<=100; i= i+1) {
        printf("%d \n", i);
    }
    return 0;
}
*/

// 4. For Loop (Print numbers from 10 to 1)
/*
#include<stdio.h>

int main(){
    for(int i=10; i>=1; i= i-1) {
        printf("%d \n", i);
    }
    return 0;
}
*/

// 5. For Loop (Print numbers from 0 to 10 using ++)
/*
#include<stdio.h>

int main(){
    for(int i=0; i<=10; i++){
        printf("%d \n", i);
    }
    return 0;
}
*/

// 6. Increment and Decrement Operators (Pre vs Post)
/*
#include<stdio.h>

int main(){
    // ++i (PRE INCREMENT) -> increase, then use
    // i++ (POST INCREMENT) -> use, then increase
    // --i (PRE DECREMENT)  -> decrease, then use
    // i-- (POST DECREMENT) -> use, then decrease
    
    int i = 1;
    printf("%d \n", i++); // use 1, then increase -> prints 1
    printf("%d \n", i);   // prints 2

    printf("%d \n", ++i); // increase to 3, then use -> prints 3
    printf("%d \n", i);   // prints 3

    printf("%d \n", --i); // decrease to 2, then use -> prints 2
    printf("%d \n", i);   // prints 2

    printf("%d \n", i--); // use 2, then decrease -> prints 2
    printf("%d \n", i);   // prints 1

    return 0;
}
*/

// 7. For Loop with Float and Characters
/*
#include<stdio.h>

int main(){
    for(float i=1.0; i<=5.0; i++){
        printf("%f \n", i);
    }

    for(char ch='a'; ch<='z'; ch++){
        printf("%c \n", ch);
    }
    return 0;
}
*/

// 8. While Loop Basic
/*
#include<stdio.h>

int main(){
    int i = 1;
    while(i <= 5){
        printf("krishna bari \n");
        i++;
    }
    return 0;
}
*/

// 9. For Loop: Print 0 to n (User Input)
/*
#include<stdio.h>

int main(){
    int n;
    printf("enter no: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        printf("%d \n", i);
    }
    return 0;
}
*/

// 10. While Loop: Print 0 to n (User Input)
/*
#include<stdio.h>

int main(){
    int n;
    printf("enter no: ");
    scanf("%d", &n);

    int i = 0;
    while(i <= n){
        printf("%d \n", i);
        i++;
    }
    return 0;
}
*/

// 11. Do-While Loop Basic
/*
#include<stdio.h>

int main(){
    int i = 1;
    do{
        printf("%d \n", i);
        i++;
    }while(i <= 5);
    return 0;
}
*/

// 12. Do-While Loop Countdown (5 to 1)
/*
#include<stdio.h>

int main(){
    int i = 5;
    do{
        printf("%d \n", i);
        i--;
    }while(i >= 1);
    return 0;
}
*/

// 13. Sum of First n Natural Numbers
/*
#include<stdio.h>

int main(){
    int n;
    printf("enter the no: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum = sum + i; // sum += i
    }
    printf("sum is %d \n", sum);
    return 0;
}
*/

// 14. Sum and Print Numbers from n down to 1 (Using two variables in loop)
/*
#include<stdio.h>

int main(){
    int n;
    printf("enter the no: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1, j=n; i<=n && j>=1; i++, j--) {
        sum = sum + i; 
        printf("%d \n", j);
    }
    printf("sum is %d \n", sum);
    return 0;
}
*/

// 15. Sum and Print Numbers from n down to 1 (Using single loop)
/*
#include<stdio.h>

int main(){
    int n;
    printf("enter the no: ");
    scanf("%d", &n);

    int sum = 0;
    for(int j=n; j>=1; j--) {
        sum = sum + j; 
        printf("%d \n", j);
    }
    printf("sum is %d \n", sum);
    return 0;
}
*/

// 16. Print Table of a Number Input by User
/*
#include<stdio.h>

int main(){
    int n;
    printf("enter the no: ");
    scanf("%d", &n); // Removed \n from scanf for proper input reading
    
    for(int i=1; i<=10; i++){
        printf("%d \n", n * i);
    }
    return 0;
}
*/

// 17. Break Statement (Exit loop when i reaches 30)
/*
#include<stdio.h>

int main(){
    for(int i=1; i<=50; i++){
        if(i == 30){
            break;
        }
        printf("%d \n", i);
    }
    printf("end");
    return 0;
}
*/

// 18. Keep Taking Number as Input Until User Enters an Odd Number
/*
#include<stdio.h>

int main(){
    int n;
    do{
        printf("enter no: ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 2 != 0){
            break;
        }
    } while(1);
    
    printf("thank you");
    return 0;
}
*/

// 19. Keep Taking Number as Input Until Multiple of 7 is Entered
/*
#include<stdio.h>

int main(){
    int n;
    do{
        printf("enter no: ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 7 == 0){ // multiple of 7
            break;
        }
    } while(1);
    
    printf("thank you");
    return 0;
}
*/

// 20. Continue Statement (Skip 3 when printing 1 to 5)
/*
#include<stdio.h>

int main(){
    for(int i=1; i<=5; i++){
        if(i == 3){
            continue; // skip this iteration
        }
        printf("%d \n", i);
    }
    return 0;
}
*/

// 21. Print All Numbers from 1 to 10 Except 6
/*
#include<stdio.h>

int main(){
    for(int i=1; i<=10; i++){
        if(i == 6){
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}
*/

// 22. Print All Odd Numbers from 5 to 50
/*
#include<stdio.h>

int main(){
    for(int i=5; i<=50; i++){
        if(i % 2 != 0){
            printf("%d \n", i);
        }
    }
    return 0;
}
*/

// 23. Print Factorial of a Number n
/*
#include<stdio.h>

int main(){
    int n;
    printf("enter the no: ");
    scanf("%d", &n);

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("final factorial is %d", fact);
    return 0;
}
*/

// 24. Calculate the Sum of All Numbers Between 5 and 50 (Including 5 & 50)
#include<stdio.h>

int main(){
    int sum = 0; // Initialized to 0 to avoid garbage values
    for(int i=5; i<=50; i++){
        sum += i;
    }

    printf("sum is %d", sum);
    return 0;
}
