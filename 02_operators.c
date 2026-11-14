// 1. Type Declaration Instructions
/*
#include<stdio.h>

int main(){
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e;

    int oldAge = 23;
    int years = 2;
    int newAge = oldAge + years;

    int x, y, z;
    x = y = z = 4;

    return 0;
}
*/

// 2. Arithmetic Instructions (Basic Sum & Multiplication)
/*
#include<stdio.h>

int main(){
    int a = 1, b = 2;
    int sum = a + b;
    int mul = a * b;
    return 0;
}
*/

// 3. Arithmetic Instructions (Power using pow() instead of ^)
/*
#include<stdio.h>
#include<math.h>

int main(){
    int b = 1, c = 1;
    int a = b + c;
    // Note: C mein ^ bitwise XOR hai, power ke liye pow(base, exp) use hota hai
    int power = pow(2, 3); 
    printf("%d", power);
    return 0;
}
*/

// 4. Modulo Operator (%)
/*
#include<stdio.h>

int main(){
    printf("%d \n", 16 % 10);
    return 0;
}
*/

// 5. Type Conversion / Implicit Type Casting in Division
/*
#include<stdio.h>

int main(){
    // Integer / Integer gives integer, so 3/2 becomes 1 (not 1.5)
    // For decimal output, use float: (float)3 / 2
    printf("%f \n", 3.0 / 2);
    return 0;
}
*/

// 6. Explicit Type Casting
/*
#include<stdio.h>

int main(){
    int a = (int) 1.999999;
    printf("%d \n", a);
    return 0;
}
*/

// 7. Operator Precedence & Associativity (Example 1)
/*
#include<stdio.h>

int main(){
    // *, /, % have higher priority than +, -
    int a = 4 * 3 / 6 * 2;
    printf("%d \n", a);
    return 0;
}
*/

// 8. Operator Precedence & Associativity (Example 2)
/*
#include<stdio.h>
int main(){
    int a = 5 * 2 / 2 * 3;
    printf("%d \n", a);
    return 0;
}
*/

// 9. Control / Relational Instructions (Returns 1 for true, 0 for false)
/*
#include<stdio.h>

int main(){
    printf("%d \n", 4 == 3); // 0
    printf("%d \n", 4 > 3);  // 1
    printf("%d \n", 4 < 3);  // 0
    printf("%d \n", 4 >= 3); // 1
    printf("%d \n", 4 <= 3); // 0
    printf("%d \n", 4 != 3); // 1
    return 0;
}
*/

// 10. Logical Operators (&& AND, || OR, ! NOT)
/*
#include<stdio.h>

int main(){
    printf("%d \n", (4 == 3) && (4 > 4)); // 0
    printf("%d \n", !(4 > 3) && (4 > 4));  // 0

    printf("%d \n", !(4 <= 3) || !(2 >= 2)); // 1
    printf("%d \n", (4 != 3) || (2 >= 2));   // 1
    
    return 0;
}
*/

// 11. Assignment Operators (Shorthand operators)
/*
#include<stdio.h>

int main(){
    int a = 1;
    int b = 4;
    a += b; // a = a + b
    a *= b;
    a -= b;
    a /= b;
    a %= b;
    printf("%d \n", a);
    return 0;
}
*/

// 12. Check if a number is divisible by 2 (Even -> 1, Odd -> 0)
/*
#include<stdio.h>

int main(){
    int x;
    printf("Enter a no: ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}
*/

// 13. Logical AND Application (Sunday & Snowing)
/*
#include<stdio.h>

int main(){
    int isSUNDAY = 1;
    int isSNOWING = 1;
    printf("%d \n", isSUNDAY && isSNOWING);
    return 0;
}
*/

// 14. Logical OR Application (Monday or Raining)
/*
#include<stdio.h>

int main(){
    int isMONDAY = 1;
    int isRAINING = 0;
    printf("%d \n", isMONDAY || isRAINING);
    return 0;
}
*/
