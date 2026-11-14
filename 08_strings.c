//Strings:a character array terminated by a '\0'(null character)
   //null charactre denoted string termination
     //ex: char name[] ={'k','r','i','s','h','\0'};   -> char name[]="krishna";
         //char class[] ={'r','a','m','\0'};          -> char class[]="ram";
            //Notes: agar yachya mage automatic compilara \0 add karto Char name[]="krishna"; char class[]="ram"; 
/*
#include<stdio.h>

int main(){
    //char name[] ={'k','r','i','s','h','\0'};
    char name[]="krishna";
    //char class[] ={'r','a','m','\0'}; 
    char class[]="ram";
    return 0;
}
*/


//Q47. create a string firstName & lastName to store details of user & print all the characters using a loop.
/*#include<stdio.h>

void printString(char arr[]);

int main(){
    char firstName[] = "krishna";
    char lastName[] = "bari";

    printString(firstName);
    printString(lastName);
    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}                        //output:krishna
*/                              //bari





//String Format Specifier  ->  "%s"
                      //char name[]="krishna";
                      //printf("%s", name);

/*#include<stdio.h>

void printString(char arr[]);

int main(){
    char name[50];
    scanf("%s", name);
    printf("your name is %s", name);

    return 0;
}
void printString(char arr[]){
    for(int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}  */



//Q48. ask the user to enter their firstName & print it back to them.
     //also try this with thir fullName

 /*  #include<stdio.h>

     void printString(char arr[]);
     
     int main(){
        //  char firstname[50];
        //  scanf("%s", firstname);
        //  printf("your name is %s", firstname);        //1st Qustion ans

        char fullName[100];
        scanf("%s", fullName);
        printf("your full name is: %s", fullName);
         
         return 0;
     }
     void printString(char arr[]){
         for(int i=0; arr[i] !='\0'; i++){
             printf("%c", arr[i]);
         }
         printf("\n");
     }  
*/  




//IMPORTANT NOTES
//scanf() cannot input multi-word strings with spaces
//here, gets() & puts() come into picture



//string functions
   //gets(str) ->please it nit safe. dangerous & outdated = input a string(even multiword)
   //puts(str) -> output a sting
   //fgets(str, n, file) -> stops when n-1 chars input or new line is entered



/*#include<stdio.h>

int main(){

    char str[100];
    //gets(str);   //input geto
    fgets(str, 100, stdin);   //input geto
    puts(str);  // output deto

    return 0;
}*/



//string using Pointers
   
/*#include<stdio.h>

int main(){

    char *canChange = "hello krushna";
    puts(canChange);
    canChange = "krishna";
    puts(canChange);

    return 0;
}*/




//Q49.make a program that inputs user's name & prints its length.
/*
#include<stdio.h>

void printString(char arr[]);
int countLength(char arr[]);

int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("lenght is: %d",countLength(name));
    return 0;
}

int countLength(char arr[]){
    int count = 0;
    for (int i=0; arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}

void printString(char arr[]){
    for(int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}*/



// Standard Library Fuction : <string.h>

//  1) strlen(str): count number of characters  excluding '\0'
/*#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main(){
    char name[] ="krishna";
    int length = strlen(name);
    printf("lenght is: %d", length);
    return 0;
}

int countLength(char arr[]){
    int count = 0;
    for (int i=0; arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}

void printString(char arr[]){
    for(int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
*/




//2) strcpy(newStr,oldStr): copies value of old string to new string
/*#include<stdio.h>
#include<string.h>

int main(){
    char firstStr[] = "HHHA";
    char secStr[] = "HHHB";
    printf("%d \n", strcmp(firstStr, secStr));
    return 0;
}
*/


//Q50. take a string input from the user using %c.
/*#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}*/



//salting
//Q51. find the salted form of paaaword enterd by user if the salt is "123" & added at the end.
/*#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);
void salting(char password[]);

int main(){
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}

void salting(char password[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);  //newPass = "test"
    strcat(newPass, salt);   // newPass = "test" + "123";
    puts(newPass);
}

int countLength(char arr[]){
    int count = 0;
    for (int i=0; arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}

void printString(char arr[]){
    for(int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}*/




//Q52. write a function named slice, which takes a string & returns a sliced string from index n to m.
//slice
/*#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);
void salting(char password[]);
void slice(char str[], int n, int m);

int main(){
    char str[] = "krishna bari";
    slice(str,1,9);
    return 0;
}

void slice(char str[], int n, int m){      // n & m are vaild value
    char newStr[100];
    int j = 0;
    for(int i=n; i<=m; i++, j++){
        newStr[j] = str[i];
    }
    newStr[j]='\0';
    puts(newStr);

}

void salting(char password[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);  //newPass = "test"
    strcat(newPass, salt);   // newPass = "test" + "123";
    puts(newPass);
}

int countLength(char arr[]){
    int count = 0;
    for (int i=0; arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}

void printString(char arr[]){
    for(int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
} */


//Q53. write a function to count the occurrence of vowelsmin a string.

/*
#include<stdio.h>
#include<string.h>

int countVowels(char str[]);
int main(){
    char str[]="Helloworld";
    printf("vowels are: %d", countVowels(str));
    return 0;
}

int countVowels(char str[]){
    int count = 0;

    for(int i=0; str[i] != '\0'; i++){
        if(str[i]== 'a'|| str[i]=='e'|| str[i]=='i'||
            str[i]== 'o'|| str[i]=='u'){
                count++;
            }
    }
    return count;
}
*/



//Q54. check if a given character is present in a string or not.
#include<stdio.h>

void checkChar(char str[], char ch);

int main(){
    char str[]= "krishna";
    char ch = 's';
    checkChar(str,ch);
    return 0;
}

void checkChar(char str[], char ch){
    for(int i=0; str [i]!='\0'; i++){
        if(str[i]== ch){
            printf("chatacter is present!");
            return;
        }
    }
    printf("character is NOT present:");
}