//structures: a collection of value of different data types.
// ex: for a  student store the following .
         // name(String)
         //roll no(integer)
         //cpga(float)
/*
#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    //s1.name = "krishna";   -> the not work on structure.
    strcpy(s1.name, "krishna");

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

return 0;
}
*/




//Q54.write a program to store the data of 3 student.
/*#include<stdio.h>
#include<string.h>
 
//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "krishna");

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

printf("\n");

    struct student s2;
    s2.roll = 1004;
    s2.cgpa = 7.9;
    strcpy(s2.name, "krish");

    printf("student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);

printf("\n");

    struct student s3;
    s3.roll = 1354;
    s3.cgpa = 8.6;
    strcpy(s3.name, "risha");

    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);

return 0;
}

*/




//Array of structure
/*#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student ece[100];
    ece[0].roll = 1664;
    ece[0].cgpa = 9.65;
    strcpy(ece[0].name, "krishna");

    printf("name = %s \n", ece[0].name);

return 0;
}*/



//Initializing Structures: struct student s1 = {"krishna, 1235,8.80"}; ->  mean under hota ki sab fuction sath me aate he 1 line me

/*#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
   struct student s1 ={1653, 9.67, "krihsna"};
   printf("student roll = %d \n", s1.roll);

return 0;
}*/




//Pointers to structures
// arrow operator
/*#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){

   struct student s1 ={1653, 9.67, "krihsna"};
   printf("student roll = %d \n", s1.roll);        //Initializing Structures

   struct student *ptr = &s1;
   printf("student roll = %d\n",(*ptr).roll);     //Pointers to structures


   printf("student roll = %d\n",ptr->roll);      
   printf("student name = %s\n",ptr->name);
   printf("student cgpa = %f\n",ptr->cgpa);     // arrow operator

return 0;
} */





//Passing Structure to function
//functiom Prototype : void printInfo(stuct student s1);
/*
#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){

   struct student s1 ={1653, 9.67, "krihsna"};
   printInfo(s1);


return 0;
}

void printInfo(struct student s1){
    printf("student information : \n");
    printf("student roll = %d\n", s1.roll);      
    printf("student name = %s\n", s1.name);
    printf("student cgpa = %f\n", s1.cgpa);

    s1.roll =1660;
}
*/




//typedef keyword: used to crete alies for data types.
/*#include<stdio.h>
#include<string.h>

//user defined
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu;


typedef struct CSstudent{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main(){
    coe s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name,"krishna");

    printf("student  name is %s \n",  s1.name);
    printf("student  roll is %d \n",  s1.roll);

    coe s2;
    s2.roll = 2656;
    printf("student  roll is %d \n",  s2.roll);


    stu a1;
    a1.roll = 9956;
    printf("student  roll is %d \n",  a1.roll);

    return 0;
}
*/



//Q56. enter address(house no, block, city, state) of 3 people.
/*#include<stdio.h>
#include<string.h>

struct address{
    int houseNo;
    int block;
    char city[276];
    char state[199];
};

void printAdd(struct address add);

int main(){
    struct address adds[3];
    //input
    printf("enter info for person 1: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("enter info for person 2: ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("enter info for person 3: ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);

    return 0;
}

void printAdd(struct address add){
    printf("address is: %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}
    */




//Q57. crete a structure to store vector. then make a function tp return sum of 2 vectors.
/*#include<stdio.h>
#include<string.h>

struct vector{
    int x;
    int y;
};

void calcSum(struct vector v1,struct vector v2,struct vector sum);

int main(){
    struct vector v1 = {5,13};
    struct vector v2 = {9,4};
    struct vector sum = {0};

    calcSum(v1, v2, sum);
return 0;
}

void calcSum(struct vector v1,struct vector v2,struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum is x: %d \n", sum.x);
    printf("sum is y: %d \n", sum.y);
}*/




//Q58. crete a structure to store complex numbers.(use arrow operator)
/*#include<stdio.h>

struct complex{
    int real;
    int img;
};

int main(){
    struct complex number1 = {5, 8};
    struct complex *ptr = &number1;
    printf("real part = %d \n", ptr->real);
    printf("img part = %d \n", ptr->img);
    return 0;
}*/





//Q58.maek a structure to store bank account infromation of a customer of ABC bank. also, make an alias for it.
#include<stdio.h>

typedef struct BankAccount {
    int accountNo;
    char name[100];
} acc;

int main(){
    acc acc1 = {124, " krishna"};
    acc acc2 = {514, " rishna"};
    acc acc3 = {125, " krish"};
    acc acc4 = {824, " shiv"};

    printf("acc no = %d \n", acc1.accountNo);
    printf("name = %s", acc1.name);

    return 0;
}
