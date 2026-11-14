// 1. Union Basic Example (Shared Memory Allocation)
/*
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    
    data.i = 10;
    printf("data.i : %d\n", data.i);
    
    data.f = 220.5;
    printf("data.f : %.2f\n", data.f);
    
    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);
    
    // Note: Only the last assigned member holds valid data due to shared memory
    printf("Size of union : %lu bytes\n", sizeof(data));
    return 0;
}
*/

// 2. Enum (Enumeration) Basic Example
/*
#include <stdio.h>

enum Week {
    Monday,     // 0
    Tuesday,    // 1
    Wednesday,  // 2
    Thursday,   // 3
    Friday,     // 4
    Saturday,   // 5
    Sunday      // 6
};

int main() {
    enum Week today;
    today = Wednesday;
    printf("Day number: %d\n", today);
    return 0;
}
*/

// 3. Enum with Custom Values (Status Codes)
/*
#include <stdio.h>

enum Status {
    SUCCESS = 1,
    PENDING = 0,
    FAILED = -1
};

int main() {
    enum Status orderStatus = SUCCESS;
    
    if (orderStatus == SUCCESS) {
        printf("Order completed successfully! (Code: %d)\n", orderStatus);
    } else {
        printf("Order pending or failed.\n");
    }
    return 0;
}
*/

// 4. Preprocessor Directives (#define Constants and Macros)
/*
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    float radius = 5.0;
    printf("Area of circle: %.2f\n", PI * SQUARE(radius));
    printf("Max between 10 and 25: %d\n", MAX(10, 25));
    return 0;
}
*/

// 5. Conditional Compilation (#ifdef, #ifndef, #endif) & Predefined Macros
#include <stdio.h>

#define DEBUG_MODE

int main() {
#ifdef DEBUG_MODE
    printf("Debug Mode is ON\n");
#else
    printf("Debug Mode is OFF\n");
#endif

    // Predefined Macros
    printf("Current File: %s\n", __FILE__);
    printf("Current Date: %s\n", __DATE__);
    printf("Current Time: %s\n", __TIME__);
    printf("Line Number: %d\n", __LINE__);

    return 0;
}
