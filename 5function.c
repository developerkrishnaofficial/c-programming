//function & Recursion

//function:block of code that performs particular task.
//take argument -> do work -> return result
//syntax 1: function prototype(declaration) =>   void printHello();
//syntax 2: function definition => void printHello() { printf("Hello"); }
//syntax 3: function call => int main(){printHello(); return 0; }

/*#include<stdio.h> 
//prototype(declaration)
void printHello();

int main(){
    printHello();//function call 
    printHello();
    printHello();
    return 0;
}
//function definition
void printHello() {
    printf("Hello World \n");
    printf("krishna \n");
}*/


//Q1.write 2 function- one to print "Hello" & second to print "good bye".
/*#include<stdio.h> 
//prototype(declaration)
void printHello();
void printgoodbye();

int main(){
    //function call
    printHello(); 
    printgoodbye();
    return 0;
}
//function definition
void printHello() {
    printf("hello \n");
}
void printgoodbye(){
    printf("good bye \n");
}
*/



//Q2.Write a function that prints Namaste if user is indian & Bonjour if the user is french.
/*#include<stdio.h> 

void namaste();
void bonjour();

int main(){
    printf("enter i for indian & f for french:");
    char ch;
    scanf("%c",&ch);

    if(ch=='i'){
        namaste();
    }else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("Namste \n");
}
void bonjour(){
    printf("bonjour \n");
}
*/

//Properties:1)execution always starts from main
//2)a function gets called directly or indirectly from main
//3)there can be multiple function in a program



//Function Types:1)Library function:special functions inbuilt in c.  scanf(),printf()
//2)User defined: declared & defined by programmer


//Passing Argument:parameter:function can take value & returen value: give some value
//void printHello();
//void printTable(int n);
//int sum(int a, int b);

/*#include<stdio.h>

int sum(int a, int b);

int main(){
    int a,b;
    printf("enter 1st no:");
    scanf("%d", &a);
    printf("enter 2nd no:");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("sum is: %d \n",s);
    return 0;
}

int sum(int x, int y){
    return x + y;
}
*/              



/*
#include<stdio.h>

int sum(int a, int b);
void printTable(int n);

int main(){
    int n;
    printf("enter 1st no:");
    scanf("%d", &n);

    printTable(n);  //argument/actual paramter
    return 0;
}

int sum(int x, int y){
    return x + y;
}

void printTable(int n){  //formal parameter
    for(int i=1; i<=10; i++){
        printf("%d \n",i*n);
    }
}
*/



/*
#include<stdio.h>

void calculatePrice(float value);

int main(){
    float value = 100.0;
    calculatePrice(value);
    printf("valuse is: %f \n", value);
    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("final price is: %f \n",value);
}
*/


//Q1)user library function to calculate the square of a number given by user.
/*
#include<stdio.h>
#include<math.h>

void calculatePrice(float value);

int main(){
    int n = 4;
    printf("%f", pow(n,2));
    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("final price is: %f \n",value);
}
*/


//Q2. write fuctions to calculate area of a square, a cirle & a rectangle.
/*#include<stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);


int main(){
    float a= 5.0;
    float b= 10.0;

    printf("area is: %f", rectangleArea(a, b));
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





// RECURSION : When a fuction calls itself, it's called recurion.
//Q1. print "Hello World" 5 times.
/*#include<stdio.h>

void printHW(int count);

int main(){
    printHW(5);
    return 0;
}

//recursive function
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    printHW(count-1);
}*/



//Q2. SUM of first n natural numbers.
/*
#include<stdio.h>

int sum(int n);

int main(){
    printf("sum is:%d", sum(5));
    return 0;
}
//recursive function
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1); //sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}
*/


//Q3. factorial of n.  ex:3!= 3*2*1 =6
/*#include<stdio.h>

int fact(int n);

int main(){
    printf("factorial is: %d", fact(5));
    return 0;
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return  factN;
}*/




//Q4. write a function to convert celsius to fahreheit.
/*#include<stdio.h>

float convertTemp(float celsius);

int main(){
    float far = convertTemp(32);
    printf("far: %f", far);
    return 0;
}

float convertTemp(float celsius) {
    float far = celsius * (9.0/5.0)+32;
    return far;
}
*/


//Q5. write a function to calculate % of a student from marks in science,math & sanskrit.
/*#include<stdio.h>

int calcPercentage(int science, int math, int sanskrit);

int main(){
    int sc = 89;
    int math =95;
    int sanskrit = 99;

    printf("persentage is: %d", calcPercentage(sc,math,sanskrit));
    return 0;
}

int calcPercentage(int sci, int math, int sanskrit){
    return((sci + math + sanskrit)/3);
}*/



//Q6. write a fuction to print n terms of the fibonacci sequense.
#include<stdio.h>

int fib(int n);

int main(){
    printf("%d",fib(6));
    return 0;
}

int fib(int n){
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
int fibNm1 = fib(n-1);
int fibNm2 = fib(n-2);
int fibN = fibNm1 + fibNm2;
printf("fib of %d is: %d \n",n, fibN);
return fibN;
}
