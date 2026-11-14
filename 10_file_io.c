// 1. Basic File Opening and Closing
/*
#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");     // r means read
    fclose(fptr);
    return 0;
}
*/

// 2. Check if File Exists or Create New File
/*
#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Newtest.txt", "w"); // creates a new txt file for writing
    if(fptr == NULL){
        printf("FILE doesn't exist \n");
    } else {
        fclose(fptr);
    }
    
    return 0;
}
*/

// 3. Reading Integers from a File using fscanf
/*
#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r"); 

    int ch;
    fscanf(fptr, "%d", &ch); 
    printf("character = %d \n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character = %d \n", ch);
    
    fclose(fptr);
    return 0;
}
*/

// 4. Writing Characters to a File using fprintf (Write or Append mode)
/*
#include<stdio.h>

int main(){
    FILE *fptr;
    // fptr = fopen("test.txt", "w");       
    fptr = fopen("test.txt", "a"); // append mode

    fprintf(fptr, "%c", 'k');
    fprintf(fptr, "%c", 'r');
    fprintf(fptr, "%c", 'i');
    fprintf(fptr, "%c", 's');
    fprintf(fptr, "%c", 'h');
    fclose(fptr);
    return 0;
}
*/

// 5. Read and Write a Character using fgetc and fputc
/*
#include<stdio.h>

int main(){
    FILE *fptr;

    // fgetc(fptr) -> read example
    // fptr = fopen("test.txt", "r");  
    // printf("%c \n", fgetc(fptr));

    // fputc('A', fptr) -> write example
    fptr = fopen("test.txt", "w");  
    fputc('s', fptr);
    fputc('h', fptr);
    fputc('i', fptr);
    fputc('v', fptr);
    fclose(fptr);

    return 0;
}
*/

// 6. Read Entire File Until EOF (End of File)
/*
#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r"); 
    char ch;
    ch = fgetc(fptr);
    
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}
*/

// 7. Q61: Read 5 Integers from a File
/*
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    int n;
    for(int i = 0; i < 5; i++){
        fscanf(fptr, "%d", &n);
        printf("number = %d \n", n);
    }

    fclose(fptr);
    return 0;
}
*/

// 8. Q62: Input Student Information from User & Write to File
/*
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name: ");
    scanf("%s", name);
    printf("enter age: ");
    scanf("%d", &age);
    printf("enter cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name: %s \n", name);
    fprintf(fptr, "student age: %d \n", age);
    fprintf(fptr, "student cgpa: %f \n", cgpa);
    
    fclose(fptr);
    return 0;
}
*/

// 9. Q63: Write All Odd Numbers from 1 to n in a File
/*
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("odd.txt", "w");
    
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            fprintf(fptr, "%d \n", i);
        }
    }

    fclose(fptr);
    return 0;
}
*/

// 10. Q64: Read Two Numbers from File and Replace with Their Sum
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("sum.txt", "r");

    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    
    fclose(fptr);

    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "%d", a + b);
    
    fclose(fptr);
    return 0;
}
