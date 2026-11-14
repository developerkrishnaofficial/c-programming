// 1. Sizeof Operator Example
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Size of int: %lu \n", sizeof(int));
    printf("Size of float: %lu \n", sizeof(float));
    printf("Size of char: %lu \n", sizeof(char));
    return 0;
}
*/

// 2. Malloc Basic Example
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 6;
    ptr[4] = 8;

    for(int i = 0; i < 5; i++){
        printf("%d \n", ptr[i]);
    }
    
    free(ptr); // Good practice to free allocated memory
    return 0;
}
*/

// 3. Q65: Allocate Memory to Store 5 Prices using malloc
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 10.5;
    ptr[1] = 20.0;
    ptr[2] = 35.5;
    ptr[3] = 60.0;
    ptr[4] = 85.0;

    for(int i = 0; i < 5; i++){
        printf("%f \n", ptr[i]);
    }
    
    free(ptr);
    return 0;
}
*/

// 4. Calloc Basic Example (Initializes with 0)
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) calloc(5, sizeof(float));

    for(int i = 0; i < 5; i++){
        printf("%f \n", ptr[i]); // will print 0.000000
    }
    
    free(ptr);
    return 0;
}
*/

// 5. Q66: Allocate Memory of Size n Entered by User using calloc
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }
    
    free(ptr);
    return 0;
}
*/

// 6. Free Function Example (Freeing and Re-allocating memory)
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr); // free memory

    ptr = (int *) calloc(2, sizeof(int));
    for(int i = 0; i < 2; i++){
        printf("After re-allocation: %d\n", ptr[i]);
    }
    
    free(ptr);
    return 0;
}
*/

// 7. Realloc Example (Increasing memory size)
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("enter 5 numbers:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }

    // Reallocate memory for 8 integers (Note: pass total bytes i.e. 8 * sizeof(int))
    ptr = realloc(ptr, 8 * sizeof(int));
    printf("enter 3 more numbers:\n");
    for(int i = 5; i < 8; i++){
        scanf("%d", &ptr[i]);
    }

    // print values (Fixed bug: printing *ptr[i] instead of &ptr[i])
    for(int i = 0; i < 8; i++){
        printf("no %d is %d \n", i, ptr[i]);
    }
    
    free(ptr);
    return 0;
}
*/

// 8. Q69: Create an Array of Size 5 using calloc & Take Input from User
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("enter 5 numbers:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }

    // print values (Fixed loop bound from 8 to 5 to prevent out-of-bounds error)
    for(int i = 0; i < 5; i++){
        printf("no %d is %d \n", i, ptr[i]);
    }
    
    free(ptr);
    return 0;
}
*/

// 9. Q70: Allocate Memory for 5 Odd Numbers, then Reallocate for 6 Even Numbers
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    printf("Odd numbers:\n");
    for(int i = 0; i < 5; i++){
        printf("%d \n", ptr[i]);
    }

    // Reallocate memory for 6 integers
    ptr = realloc(ptr, 6 * sizeof(int));
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;

    printf("Even numbers after realloc:\n");
    for(int i = 0; i < 6; i++){
        printf("%d \n", ptr[i]);
    }

    free(ptr);
    return 0;
}
