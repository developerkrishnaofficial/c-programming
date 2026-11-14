//File Input/Output
//file-container in a storege device to store data.
//-Ram is valatile
//-contenrs are lost when program terminates.
//-files are used to persist the data.
 

// crete,open, close, read from, write in a file


// types of files   1)text files : textual data  .txt, .c
               //   2) binary files:binary data, .exe, .mp3, .jpg


//File Pointer
             //FILE is(hidden) structure that neesa to bw created for opening a file
             // a FILE ptr that points to this structure & is used to access the file.
             //FILE *fptr;


// File opening mpdes
    //"r" open to read, 
    //"rb" open to read in binary, 
    //"w" open to write, 
    //"wb" open to write in binary, 
    //"a" open to append

/*#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");     //r mean read
    fclose(fptr);
    return 0;
}
*/



/*#include<stdio.h>

int main(){
    FILE *fptr;
    //fptr = fopen("Newtest.txt","r");
    fptr = fopen("Newtest.txt","w"); //crete the new txt file
    if(fptr == NULL){
        printf("FILE doesn't exist \n");
    }else{
        fclose(fptr);
    }
    
    return 0;
}*/


//reading from a file: char ch:
                     //fscanf(fptr, "%c", &ch); // file pointer, format Pacifier,address of varible
/*#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r"); //crete the new txt file

    int ch;
    fscanf(fptr, "%d", &ch); // file pointer, format Pacifier,address of varible
    printf("character = %d \n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character = %d \n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character = %d \n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character = %d \n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character = %d \n", ch);
    return 0;
}*/



//writing to a file: char ch='A':
                     //fprintf(fptr, "%c", &ch);
/*#include<stdio.h>

int main(){
    FILE *fptr;
    //fptr = fopen("test.txt","w");     
    fptr = fopen("test.txt","a"); 

    fprintf(fptr, "%c", 'k');
    fprintf(fptr, "%c", 'r');
    fprintf(fptr, "%c", 'i');
    fprintf(fptr, "%c", 's');
    fprintf(fptr, "%c", 'h');
    fclose(fptr);
    return 0;
}
*/


//Read & Write a char
             //fgetc(fptr) //read
             //fputc('A',fptr) // write
/*#include<stdio.h>

int main(){
    FILE *fptr;
//fgetc(fptr) //read
    // fptr = fopen("test.txt","r"); 

    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));


//fputc('A',fptr) // write
    fptr = fopen("test.txt","w"); 

    fputc('s', fptr);
    fputc('h', fptr);
    fputc('i', fptr);
    fputc('v', fptr);
    fclose(fptr);

    return 0;
}*/




//EOF(End of File)
 //fgetc returns EOF to show that the file has ended.
 /*#include<stdio.h>

 int main(){
     FILE *fptr;
     fptr = fopen("test.txt","r"); 
     char ch;
     ch =fgetc(fptr);
     while(ch != EOF){
        printf("%c", ch);
        ch =fgetc(fptr);
     }
     printf("\n");
     fclose(fptr);
     return 0;
 }*/



//Q61. make a program to read 5 integers from a file.
 /*#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("test.txt", "r");


    int n;
    fscanf(fptr, "%d", &n);
    printf("number = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d \n", n);

    fclose(fptr);
    return 0;
}
*/



//Q62. make a program to input student information from a user & enter it to a file.
/*#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name: ");
    scanf("%s", &name);
    printf("enter age: ");
    scanf("%d", &age);
    printf("enter cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name: %s \n", name);
    fprintf(fptr, "student age:%d \n", age);
    fprintf(fptr, "student cgpa:%f \n", cgpa);
    fclose(fptr);
    return 0;
}*/



//Q63. write a program to write all the odd numbers from 1 to n in a file.
/*#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("odd.txt", "w");
    
    int n;
    printf("enter n:");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        if(i % 2 != 0) {
            fprintf(fptr, "%d \n", i);

        }
    }

    fclose(fptr);
    return 0;
}*/


//Q64. 2 numbers- a & b, are written in a file. write a program to replace them with thier sum.
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("sum.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);
    
    fclose(fptr);

    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);
    return 0;
}