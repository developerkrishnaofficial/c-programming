//Conditional Statements: 1)if-else  2)Switch
/*#include<stdio.h>

int main(){
    int age = printf("enter age: ");
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
}*/


//if or else-if
/*
#include<stdio.h>

int main(){
    int age = printf("enter age: ");
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


//Ternary operators
/*#include<stdio.h>

int main(){
    int age = printf("enter age: ");
    scanf("%d", &age);

    age>= 18 ? printf("adult \n") : printf("not adult \n");
    return 0;
}*/


//Switch
/*#include<stdio.h>

int main(){
    int day;                      // monday =1; tues=2;  wed=3..............
    printf("enter day (1-7): ");
    scanf("%d", &day);

    switch(day){
        case 1 : printf("monday \n");
        break;
        case 2 : printf("tuesday \n");
        break;
        case 3 : printf("wednesday \n");
        break;
        case 4 : printf("thusday \n");
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
}*/


 
/*#include<stdio.h>

int main(){
    char day;                      // monday =m; tues=t;  wed=w..............
    printf("enter day (1st letter): ");
    scanf("%s", &day);

    switch(day){
        case 'm' : printf("monday \n");
        break;
        case 't' : printf("tuesday \n");
        break;
        case 'w' : printf("wednesday \n");
        break;
        case 'T' : printf("thusday \n");
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
}*/



/*#include<stdio.h>

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


/*
#include<stdio.h>

int main() {
    int marks;
    printf("enter marks(0-100): ");
    scanf("%d", &marks);

    if(marks >=0 && marks <= 30){
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



/*#include<stdio.h>

int main(){
    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);

    marks <= 30 ? printf("fail \n") : printf("pass \n");
    return 0;
}*/



/*#include<stdio.h>

int main(){
    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);

    if(marks<30){
        printf("c \n");
    }
    else if(marks >= 30 && marks< 70){
        printf("b \n");
    }
    else if(marks >= 70 && marks < 90){
        printf("A \n");
    }
    else if(marks >= 90 && marks < 100){
        printf("A+ \n");
    }
    else{
        printf("enter the wrong");
    }
    return 0;
}*/



/*
#include<stdio.h>

int main(){
    int x =2;
    
    if(x=4){
        printf("x is equal to 1");
        printf("%d \n", x);
    }
    else{
        printf("x is not equal to 1");
    }
    return 0;
}
*/



//Q3 upper case or not
/*#include<stdio.h>

int main(){
    char ch;
    printf("enter character:");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z'){
        printf("UPPER CASE");
    }
    else if(ch>='a' && ch<='z'){
        printf("lower case");
    }
    else{
        printf("not english letter \n");
    }
    return 0;
}
*/


