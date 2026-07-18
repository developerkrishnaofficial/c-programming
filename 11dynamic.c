//dynamic memory allocation:it is a way allocate memory to a data structure during the runtime.
//we need some function to allocate & free memory dynamically.
  // function for DMA:
   //1.malloc()=memory allocation 2.calloc()=continus allocation  3.free()=    4.realloc()=re-allocation



  // 1.malloc()=memory allocation
   //takes no. of bytes to be allocated & returns a pointer of type void.
    //ptr=(*int)malloc(5*sixeof(int));           means (5*4) = 20 bytes
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(float));
    printf("%d \n", sizeof(char));
    return 0;
}*/


/*
#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0]= 1;
    ptr[1]= 2;
    ptr[2]= 3;
    ptr[3]= 6;
    ptr[4]= 8;

    for(int i=0; i<5; i++){
        printf("%d \n", ptr[i]);
    }
    return 0;
}
    */



//Q65. WAP to allocate memory to store 5 prices.
/*#include<stdio.h>
#include<stdlib.h>

int main(){

    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0]= 1;
    ptr[1]= 2;
    ptr[2]= 3;
    ptr[3]= 6;
    ptr[4]= 8;

    for(int i=0; i<5; i++){
        printf("%f \n", ptr[i]);
    }
    return 0;
}*/





//2. calloc()= continuous allocation  = 
                                    //initializes with 0  
                                    //ptr =(*int) calloc(5, sizeof(int));
/*#include<stdio.h>
#include<stdlib.h>

int main(){

    float *ptr;
    ptr = (float *) calloc(5 , sizeof(float));


    for(int i=0; i<5; i++){
        printf("%f \n", ptr[i]);
    }
    return 0;
}*/



//Q66. WAP to allocate memory of size n, where n is entered by the user.
/*#include<stdio.h>
#include<stdlib.h>

int  main(){
    int *ptr;
    int n;
    printf("enter n:");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    for(int i=0; i<n; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}*/




//3. free()= we use it to free memory that is allocated using malloc & calloc   
  //free(ptr);

/*#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter n:");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    for(int i=0; i<n; i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    ptr =(int *) calloc(2, sizeof(int));
    for(int i=0; i<2; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}*/



//4. realloc()= reallocate(increase or decrease) memory using the same pointer & size.
    //ptr = realloc(ptr, newSize);

/*#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr =(int *) calloc(5, sizeof(int));

    printf("enter no(5):");
    for(int i=0; i<5; i++){
        scanf("%d\n", &ptr[i]);
    }

    ptr =realloc(ptr, 8);
    printf("enter no(8):");
    for(int i=0; i<8; i++){
        scanf("%d\n", &ptr[i]);
    }

    //print
    for(int i=0; i<8; i++){
        printf("no %d is %d",i, &ptr[i]);
    }
    return 0;
}*/


//Q69. Create an arrray of size5(using calloc)& enter its values from the user.
/*#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr =(int *) calloc(5, sizeof(int));

    printf("enter no(5):");
    for(int i=0; i<5; i++){
        scanf("%d\n", &ptr[i]);
    }


    //print
    for(int i=0; i<8; i++){
        printf("no %d is %d",i, &ptr[i]);
    }
    return 0;
}*/





//Q70. allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.
#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0]= 1;
    ptr[1]= 2;
    ptr[2]= 3;
    ptr[3]= 5;
    ptr[4]= 7;

    for(int i=0; i<5; i++){
        printf("%d \n", ptr[i]);
    }

    ptr = realloc(ptr, 6);
    ptr[0]= 2;
    ptr[1]= 4;
    ptr[2]= 6;
    ptr[3]= 8;
    ptr[4]= 10;
    ptr[5]= 12;

    for(int i=0; i<6; i++){
        printf("%d\n", ptr[i]);
    }

    
    return 0;
}