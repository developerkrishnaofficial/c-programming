// 1. If-Else Statement (Adult Check)
/*
#include<stdio.h>

int main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if(age > 18){
        printf("adult \n");
        printf("they can drive, or vote \n");
    }
    else{
        printf("not adult \n");
        printf("they can not drive, or vote \n");
    }

    printf("thank you");
    return 0;
}
*/

// 2. If-Else-If Statement (Age Category Check)
/*
#include<stdio.h>

int main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("adult \n");
    }
    else if(age > 13 && age < 18){
        printf("teenager \n");
    }
    else{
        printf("child \n");
    }

    return 0;
}
*/

// 3. Ternary Operator (Adult Check)
/*
#include<stdio.h>

int main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    age >= 18 ? printf("adult \n") : printf("not adult \n");
    return 0;
}
*/

// 4. Switch Case (Days of the week using numbers 1-7)
/*
#include<stdio.h>

int main(){
    int day; // monday = 1; tues = 2; wed = 3..............
    printf("enter day (1-7): ");
    scanf("%d", &day);

    switch(day){
        case 1 : printf("monday \n");
        break;
        case 2 : printf("tuesday \n");
        break;
        case 3 : printf("wednesday \n");
        break;
        case 4 : printf("thursday \n");
        break;
        case 5 : printf("friday \n");
        break;
        case 6 : printf("saturday \n");
        break;
        case 7 : printf("sunday \n");
        break;
        default: printf("not a valid day! \n");
    }
    return 0;
}
*/

// 5. Switch Case (Days of the week using characters)
/*
#include<stdio.h>

int main(){
    char day; // monday = m; tues = t; wed = w..............
    printf("enter day (1st letter): ");
    scanf(" %c", &day); // space before %c to catch newline buffer

    switch(day){
        case 'm' : printf("monday \n");
        break;
        case 't' : printf("tuesday \n");
        break;
        case 'w' : printf("wednesday \n");
        break;
        case 'T' : printf("thursday \n");
        break;
        case 'f' : printf("friday \n");
        break;
        case 's' : printf("saturday \n");
        break;
        case 'S' : printf("sunday \n");
        break;
        default: printf("not a valid day! \n");
    }
    return 0;
}
*/

// 6. Nested If-Else (Positive/Negative and Even/Odd)
/*
#include<stdio.h>

int main() {
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    if(num >= 0) {
        printf("positive \n");
        if(num % 2 == 0) {
            printf("even \n");
        } else {
            printf("odd \n");
        }
    } else {
        printf("negative \n");
    }
    return 0;
}
*/

// 7. Marks Pass/Fail Check
/*
#include<stdio.h>

int main() {
    int marks;
    printf("enter marks(0-100): ");
    scanf("%d", &marks);

    if(marks >= 0 && marks <= 30){
        printf("fail \n");
    } else if(marks > 30 && marks <= 100) {
        printf("pass \n");
    }
    else{
        printf("wrong marks");
    }
    return 0;
}
*/

// 8. Ternary Pass/Fail Check
/*
#include<stdio.h>

int main(){
    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);

    marks <= 30 ? printf("fail \n") : printf("pass \n");
    return 0;
}
*/

// 9. Grading System based on Marks
/*
#include<stdio.h>

int main(){
    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);

    if(marks < 30){
        printf("c \n");
    }
    else if(marks >= 30 && marks < 70){
        printf("b \n");
    }
    else if(marks >= 70 && marks < 90){
        printf("A \n");
    }
    else if(marks >= 90 && marks <= 100){
        printf("A+ \n");
    }
    else{
        printf("enter the wrong marks");
    }
    return 0;
}
*/

// 10. Assignment vs Comparison Trap in If Condition
/*
#include<stdio.h>

int main(){
    int x = 2;
    
    // Here x=4 is an assignment, not comparison. It assigns 4 to x and evaluates to true.
    if(x = 4){
        printf("x is assigned 4 and condition is true \n");
        printf("value of x is: %d \n", x);
    }
    else{
        printf("x is not equal \n");
    }
    return 0;
}
*/

// 11. Check Upper Case or Lower Case Character
/*
#include<stdio.h>

int main(){
    char ch;
    printf("enter character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("UPPER CASE \n");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("lower case \n");
    }
    else{
        printf("not english letter \n");
    }
    return 0;
}
*/
