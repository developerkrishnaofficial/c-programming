// 1. Basic Structure Definition and Initialization
/*
#include<stdio.h>
#include<string.h>

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

    return 0;
}
*/

// 2. Storing Data of 3 Students
/*
#include<stdio.h>
#include<string.h>
 
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
    printf("student cgpa = %f\n\n", s1.cgpa);

    struct student s2;
    s2.roll = 1004;
    s2.cgpa = 7.9;
    strcpy(s2.name, "krish");

    printf("student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);
    printf("student cgpa = %f\n\n", s2.cgpa);

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

// 3. Array of Structures
/*
#include<stdio.h>
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
}
*/

// 4. Initializing Structures Directly
/*
#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {1653, 9.67, "krishna"};
    printf("student roll = %d \n", s1.roll);
    return 0;
}
*/

// 5. Pointers to Structures and Arrow Operator (->)
/*
#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {1653, 9.67, "krishna"};
    
    struct student *ptr = &s1;
    printf("student roll using (*ptr).roll = %d\n", (*ptr).roll);      

    // Arrow operator
    printf("student roll using ptr->roll = %d\n", ptr->roll);      
    printf("student name using ptr->name = %s\n", ptr->name);
    printf("student cgpa using ptr->cgpa = %f\n", ptr->cgpa);     

    return 0;
} 
*/

// 6. Passing Structure to Function
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
    struct student s1 = {1653, 9.67, "krishna"};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1){
    printf("student information : \n");
    printf("student roll = %d\n", s1.roll);      
    printf("student name = %s\n", s1.name);
    printf("student cgpa = %f\n", s1.cgpa);
}
*/

// 7. Typedef Keyword (Creating Aliases for Data Types)
/*
#include<stdio.h>
#include<string.h>

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
    strcpy(s1.name, "krishna");

    printf("student name is %s \n", s1.name);
    printf("student roll is %d \n", s1.roll);

    coe s2;
    s2.roll = 2656;
    printf("student roll is %d \n", s2.roll);

    stu a1;
    a1.roll = 9956;
    printf("student roll is %d \n", a1.roll);

    return 0;
}
*/

// 8. Enter Address of 3 People (Array of Structures)
/*
#include<stdio.h>
#include<string.h>

struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main(){
    struct address adds[3];
    
    for(int i = 0; i < 3; i++){
        printf("Enter info for person %d (HouseNo, Block, City, State): \n", i + 1);
        scanf("%d", &adds[i].houseNo);
        scanf("%d", &adds[i].block);
        scanf("%s", adds[i].city);
        scanf("%s", adds[i].state);
    }

    printf("\n--- Addresses Entered ---\n");
    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);

    return 0;
}

void printAdd(struct address add){
    printf("Address: %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}
*/

// 9. Structure to Store Vector and Function to Return Sum of 2 Vectors
/*
#include<stdio.h>
#include<string.h>

struct vector{
    int x;
    int y;
};

void calcSum(struct vector v1, struct vector v2);

int main(){
    struct vector v1 = {5, 13};
    struct vector v2 = {9, 4};

    calcSum(v1, v2);
    return 0;
}

void calcSum(struct vector v1, struct vector v2){
    struct vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x: %d \n", sum.x);
    printf("Sum of y: %d \n", sum.y);
}
*/

// 10. Structure to Store Complex Numbers using Arrow Operator
/*
#include<stdio.h>

struct complex{
    int real;
    int img;
};

int main(){
    struct complex number1 = {5, 8};
    struct complex *ptr = &number1;
    
    printf("Real part = %d \n", ptr->real);
    printf("Imaginary part = %d \n", ptr->img);
    return 0;
}
*/

// 11. Structure to Store Bank Account Information with Typedef Alias
#include<stdio.h>

typedef struct BankAccount {
    int accountNo;
    char name[100];
} acc;

int main(){
    acc acc1 = {124, "krishna"};
    acc acc2 = {514, "rishna"};
    acc acc3 = {125, "krish"};
    acc acc4 = {824, "shiv"};

    printf("Account No = %d \n", acc1.accountNo);
    printf("Name = %s \n", acc1.name);

    return 0;
}
