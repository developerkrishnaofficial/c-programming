//Instructions: these are staemnt in a program only 3 types:1)type delclaration,2)arithmetic,3)control
//1) Type delclaration instructions
/*#include<stdio.h>

int main(){
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e;

    int oldAge = 23;
    int years = 2;
    int newAge = oldAge + years;

    int x,y,z;
    x = y = z = 4;

    return 0;
}*/



// Arithmetic instructions
/*#include<stdio.h>

int main(){
    
    int a = 1, b = 2;
    int sum = a + b;
    int mul = a * b;
    return 0;
}*/


/*#include<stdio.h>
#include<math.h>

int main(){
    int b, c;
    b = c = 1;
    int a = b + c;
    // printf("%d",a);
    int power = b^c;
    printf("%d",power);
    return 0;
}*/



/*#include<stdio.h>
#include<math.h>

int main(){
    printf("%d \n", 16%10);
    return 0;
}*/


/*#include<stdio.h>

int main(){
    printf("%f \n", 3/2);
    return 0;
}*/


/*#include<stdio.h>

int main(){
    int a = (int) 1.999999;
    printf("%d \n", a);
    return 0;
}*/

//   *,/,%   -->   +,-   -->  =
// example: x=4+9*10   x=4+90   x=94
// example: x=4*3/6*2   left to right x=(4*3/6)*2   x=(12/6)*2   x=2*2  x=4
/*
#include<stdio.h>

int main(){
    int a = 4 * 3 / 6 * 2;
    printf("%d \n", a);
    return 0;
}
*/


/*
#include<stdio.h>
int main(){
    int a = 5 * 2 / 2 * 3;
    printf("%d \n", a);
    return 0;
}
*/

//Control Instructions: 1 = true or 0= false
/*#include<stdio.h>

int main(){
    printf("%d \n", 4 == 3); //0
    printf("%d \n", 4 > 3);  //1
    printf("%d \n", 4 < 3);  //0
    printf("%d \n", 4 >= 3); //1
    printf("%d \n", 4 <= 3); //0
    printf("%d \n", 4 != 3); //1
    return 0;
}
*/


//logical opreators: && AND   || OR    ! NOT
/*#include<stdio.h>

int main(){
    printf("%d \n", (4 == 3) && (4 > 4)); //0
    printf("%d \n", !(4 > 3) && (4 > 4));  //0

    printf("%d \n", !(4 <= 3) || !(2 >=2)); //1
    printf("%d \n", (4 != 3) || (2 >=2)); //1
    
    return 0;
}*/



//assigment operatores: a=a+b  -> a+=b
/*#include<stdio.h>

int main(){
    int a = 1;
    int b = 4;
    a +=b; //a=a+b
    a *=b;
    a -=b;
    a /=b;
    a %=b;
    printf("%d \n", a);
    return 0;
}*/

//no is divisible by 2 or not.  //even->1 odd ->0
/*#include<stdio.h>

int main(){
    int x;
    printf("enter a no:");
    scanf("%d", &x);
    printf("%d", x%2==0);
    return 0;
}*/


/*#include<stdio.h>

int main(){
    int isSUNDAY = 1;
    int isSNOWING = 1;
    printf("%d \n", isSUNDAY && isSNOWING);
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int isMONDAY = 1;
    int isRAINING = 0;
    printf("%d \n", isMONDAY || isRAINING);
    return 0;
}*/