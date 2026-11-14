//Arrays: collection of similar data types stored at contiguous memory locations.
/*#include<stdio.h>

int main(){
    //int marks1 = 97;
    //int marks2 = 98;
    //int marks3 = 89;

    // int marks[] = {97, 98, 89};

    int marks[3];
    printf("enter phy:");
    scanf("%d", &marks[0]);

    printf("enter chem:");
    scanf("%d", &marks[1]);

    printf("enter math:");
    scanf("%d", &marks[2]);

    printf("enter bio:");
    scanf("%d", &marks[3]);

    printf("phy=%d, chem=%d, math=%d, bio=%d", marks[0],marks[1],marks[2],marks[3]);
    return 0;
}*/


//write a program to enter price of 3 items & print their final cost with gst.
/*#include<stdio.h>

int main(){
    float price[3];
    printf("enter 3 price:");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price 1: %f \n", price[0]+(0.18+price[0]));
    printf("total price 2: %f \n", price[1]+(0.18+price[1]));
    printf("total price 3: %f \n", price[2]+(0.18+price[2]));
    return 0;
}*/




//Pointer Arithmetic:pointer can be incremented & decremented.
/*#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
    //ptr++;
    ptr--;
    printf("ptr = %u \n", ptr);
    return 0;
}*/



/*#include<stdio.h>
int main(){
    float price = 100.00;
    float *ptr = &price;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
    //ptr++;
    ptr--;
    printf("ptr = %u \n", ptr);     //output:ptr = 6422296  ptr = 6422300  ptr = 6422296

    return 0;
}
*/




/*#include<stdio.h>
int main(){
    char star = '*';
    char *ptr = &star;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
    //ptr++;
    ptr--;
    printf("ptr = %u \n", ptr);
    return 0;
}*/



//we can also subtract one piter from anoter
/*#include<stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("difference= %u \n", ptr-_ptr);
    printf("%u, %udifference= %u \n", ptr, _ptr, ptr-_ptr);
    _ptr = &age;
    printf("comparison= %u \n", ptr==_ptr);  //output: 1
    return 0;
}*/



//Array is a Pointer : int*ptr = &arr[0];    int *ptr=arr;



//Traverse an array : int aadar[10];    int *ptr = &aadhar[0];
/*#include<stdio.h>

int main(){
    int aadhar[5];

    //input
    int *ptr = &aadhar[0];
    for(int i = 0; i<10; i++){
        printf("%d index:",i);
        scanf("%d", (ptr+i));

    }

    //output
    for(int i=0; i<5; i++){
        printf("%d index = %d \n", i, *(ptr+i));
    }
    return 0;
}
*/


//array as function argumrnt 
//function declaration  
     // void printNumber(int arr[], int n)      or      void printNumber(int *arr, int n)    
//function call  
     //printNumber(arr,n);

  /*  
#include<stdio.h>

//void printNumbers(int arr[], int n);
void printNumbers(int *arr, int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    printNumbers(arr, 6);

    return 0;
}

//void printNumbers(int arr[], int n){
void printNumbers(int *arr, int n){
    for (int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
    */ 





//Multidimensional Arrays
  //2D Arrays 
      //int arr[][]={{1,2,3,4}}  //declare
        //Access:   arr[0][0]->1,  arr[0][1]->2, arr[1][0]->3, arr[1][1]->4   //means matrix sarekhe aste
/*#include<stdio.h>

int main(){
    //2 * 3
    int marks[2] [3];    //_ _ _ | _ _ _
    marks[0] [0] = 85;
    marks[0] [1] = 95;
    marks[0] [2] = 75;

    marks[1] [0] = 83;
    marks[1] [1] = 82;
    marks[1] [2] = 89;

    printf("%d \n", marks[0] [0]);
    return 0;
}

*/



//Q42. write a function to count the number of odd numbers in an array.
/*#include<stdio.h>

int countOdd(int arr[], int n);

int  main(){
    int arr[] = {1,2,3,4,5,6};
    printf("%d ", countOdd(arr,6));
    return 0;
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){  //odd
            count++;
        }
    }
    return count;
}*/




//Q43. int arr[]= {1,2,3,4,5}
  //for the given array, what will the following give?
    //a.  *(arr+2)    b. *(arr+5)
    /*#include<stdio.h>

    int countOdd(int arr[], int n);
    
    int  main() {
        int arr[] = {1, 2, 3, 4, 5};
        printf("%d \n", *(arr+2));
        printf("%d \n", *(arr+5));
        return 0;
    }
    
    int countOdd(int arr[], int n){
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] % 2 != 0){  //odd
                count++;
            }
        }
        return count;
    }
        */




//Q44.write a function to reverse an array.
   //1,2,3,4 <-> 4,3,2,1
  /* #include<stdio.h>

   int countOdd(int arr[], int n);
   void reverse(int arr[], int n);
   void printArr(int arr[], int n);
   
   int  main() {
       int arr[] = {1, 2, 3, 4, 5};
       reverse(arr, 5);
       printArr(arr, 5);
       return 0;
   }

   void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
   }

   void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
   }
   
   int countOdd(int arr[], int n){
       int count = 0;
       for(int i=0; i<n; i++){
           if(arr[i] % 2 != 0){  //odd
               count++;
           }
       }
       return count;
   }
       */




//Q45. write a program to store the first n fibonacci numbers.
/*#include<stdio.h>

int main(){
    int n;
    printf("enter  n :");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i =2; i<n; i++) {  //1,2,3,5,8,13 .....
        fib[i] = fib[i-1] + fib[i-2];  //important
        printf("%d \t", fib[i]);
    }
    printf("\n");
    return 0;
}*/


//create a 2D array, storing the tables of 2 & 3.
#include<stdio.h>

void storeTable(int arr[][10], int n, int m, int number);

int main(){
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    for(int i=0; i<10; i++){ //0 to 10
        printf("%d \t", tables[0][i]);
    }
    
    printf("\n");

    for(int i=0; i<10; i++){ //0 to 10
        printf("%d \t", tables[1][i]);
    }

    return 0;
}
void storeTable(int arr[][10], int n, int m, int number){
    for(int i=0; i<m; i++){   //0 to 10
        arr[n][i] =number * (i+1);  //2,4,6,8,10....
    }
}