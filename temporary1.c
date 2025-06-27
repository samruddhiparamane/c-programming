#include <stdio.h>

int main() {
    int a, b;

    
    printf("Enter two integers:");
    scanf("%d %d", &a, &b);
     
    printf("original values %d %d",a,b);
    
    
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping using temporary variable is : %d %d", a, b);

    //swapping back for next method
    temp = a;
    a = b;
    b = temp;

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping using + and - operators is:%d %d", a, b);

    // Swapping back for next method
    a = a + b;
    b = a - b;
    a = a - b;

    
    if (b != 0) {
        a = a * b;
        b = a / b;
        a = a / b;
        printf("After swapping using * and / operators is: %d %d", a, b);
    } else {
        printf("Cannot swap using * and / as one number is 0 ");
    }

    return 0;
}
