#include <stdio.h>

main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\nResult: %.2f\n\n", pow(x, 2));
}
