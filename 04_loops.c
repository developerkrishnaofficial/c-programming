// loop control instuctions: for, while, do while

//for loop: for(intiliaction; condition; updation){} ->start = kiti parant janar = kiti ne vadhavana aahe

/*#include<stdio.h>

int main(){
    for(int i=1; i<=5; i= i+1) {
        printf("krishna \n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    for(int i=10; i>=0; i=i-1) {
        printf("%d \n", i);
    }
    return 0;
}*/



/*#include<stdio.h>

int main(){
    for(int i=1; i<=100; i= i+1) {
        printf("%d \n", i);
    }
    return 0;
}*/



/*#include<stdio.h>

int main(){
    for(int i=10; i>=1; i= i-1) {
        printf("%d \n", i);
    }
    return 0;
}*/



/*#include<stdio.h>

int main(){
    for(int i=0; i<=10; i++){
        printf("%d \n", i);
    }
    return 0;
}*/



/*#include<stdio.h>

int main(){
    //increment operator
    //++i(PRE INCREMENNT) i++ (post incretment)
    //decrement operator
    //--i(PRE INCREMENNT) i--(post decretment)
    int i=1;
    printf("%d \n", i++); //use ,then increase
    printf("%d \n",i); //1,2

    printf("%d \n", ++i); //increase, then use 
    printf("%d \n",i); //2,2

    printf("%d \n",--i);
    printf("%d \n", i);   //0,0

    printf("%d \n",i--);
    printf("%d \n", i); //1,0

    return 0;
}*/



/*#include<stdio.h>

int main(){
    for(float i=1.0; i<=5.0; i++){
        printf("%f \n", i);
    }

    for(char ch='a'; ch<='z'; ch++){
        printf("%c \n", ch);
    }
    return 0;
}*/

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//  infinte do not try this code          X
  /*#include<stdio.h>                     X
X                                         X
X int main(){                             X
X     for(int i=1; ;i++) {                X
X         printf("hello wols \n");        X
X     }                                   X
X     return 0;                           X
X }*/    //infinte do not try this code   X
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


//while loop
/*#include<stdio.h>

int main(){
    int i=1;
    while(i<=5){
        printf("krishna bari \n");
        i++;
    }
    return 0;
}*/


/*#include<stdio.h>

int main(){
    int n;
    printf("enter no:");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        printf("%d \n", i);
    }
    return 0;
}*/

//print the no form 0 to n, if n is given by user
/*#include<stdio.h>

int main(){
    int n;
    printf("enter no:");
    scanf("%d", &n);

    int i=0;
    while(i <= n){
        printf("%d \n", i);
        i++;
    }
    return 0;
}*/



//do while loop
/*#include<stdio.h>

int main(){
    int i =1;
    do{
        printf("%d \n", i);
        i++;
    }while(i<=5);
    return 0;
}*/



/*#include<stdio.h>

int main(){
    int i =5;
    do{
        printf("%d \n", i);
        i--;
    }while(i>=1);
    return 0;
}*/


/*#include<stdio.h>

int main(){
    int n;
    printf("enter the no:");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum = sum + i;  // sum+=i
    }
    printf("sum is %d \n", sum);
    return 0;
}*/



/*#include<stdio.h>

int main(){
    int n;
    printf("enter the no:");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum = sum + i;  // sum+=i
    }
    printf("sum is %d \n", sum);

    for (int i=n; i>=1; i--){
        printf("%d \n", i)
    }
    return 0;
}*/


/*#include<stdio.h>

int main(){
    int n;
    printf("enter the no:");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1, j=n; i<=n && j>=1; i++,j--) {
        sum = sum + i;  // sum+=i
        printf("%d \n", j);
    }
    printf("sum is %d \n", sum);
    return 0;
}*/


/*#include<stdio.h>

int main(){
    int n;
    printf("enter the no:");
    scanf("%d", &n);

    int sum = 0;
    for(int j=n; j>=1; j--) {
        sum = sum + j;  // sum+=i
        printf("%d \n", j);
    }
    printf("sum is %d \n", sum);
    return 0;
}*/



//print the table input by user
/*#include<stdio.h>

int main(){
    int n;
    printf("enter the no:");
    scanf("%d \n", &n);
    for(int i=1; i<=10; i++){
        printf("%d \n", n*i);
    }
    return 0;
}*/


//break staement
/*#include<stdio.h>

int main(){
    for(int i=1; i<=50; i++){
        if(i==30){
            break;
        }
        printf("%d \n", i);
    }

    printf("end");
 
    return 0;
}*/



//keep taking no as input from user until user enters an odd no.
/*#include<stdio.h>

int main(){
    int n;
    do{
        printf("enter no:");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 2 !=0){
            break;
        }
    }while(1);
    printf("thank you");
    return 0;
}*/


//keep taking no as input from user until user enters a which is multiple of 7
/*#include<stdio.h>

int main(){
    int n;
    do{
        printf("enter no:");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 7 ==0){  //mul of 7
            break;
        }
    }while(1);
    printf("thank you");

    return 0;
}*/


//continue statement: there print the 1 to 5 but not 3
/*#include<stdio.h>

int main(){
    for(int i=1; i<=5; i++){
        if(i==3){
            continue; //skip
        }
        printf("%d \n", i);
    }
    return 0;
}*/


//print all no from 1 to 10 except fo 6.
/*#include<stdio.h>

int main(){
    for(int i=1; i<=10; i++){
        if(i==6){
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}*/



//print all the odd no form 5 to 50.
/*#include<stdio.h>

int main(){
    for(int i=5; i<=50; i++){
        if(i % 2 !=0){
            printf("%d \n", i);
        } //odd
    }
    return 0;
}*/



//print the factorial of a number n.
/*#include<stdio.h>

int main(){
    int n;
    printf("enter the no:");
    scanf("%d", &n);

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact= fact*i;
    }
    printf("final factorial id %d", fact);
    return 0;
}*/


//calculate the sum of all mo between 5 and 50. (incalude 5 & 50)
#include<stdio.h>

int main(){
    int sum;
    for(int i=5; i<=50; i++){
        sum += i;
    }

    printf("sum is %d", sum);
    return 0;
}