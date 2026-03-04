#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;

    // Get values from user
    printf("Enter value for A:\n");
    scanf("%d",&a);

    printf("Enter value for B:\n");
    scanf("%d",&b);

    // Prints values before swap
    printf("Before swap:\n");
    printf("A=%d\n",a);
    printf("B=%d\n",b);

    // Swap the values using a temporary variable
    temp=a;
    a=b;
    b=temp;

    // Prints values after swap
    printf("After swap:\n");
    printf("A=%d\n",a);
    printf("B=%d\n",b);

    return 0;
}
