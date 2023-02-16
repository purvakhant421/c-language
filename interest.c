
#include <stdio.h>

 main()
{
    int principal, rate, t, interest;

    printf("Enter the principal: ");
    scanf("%d", &principal);

    printf("Enter the rate: ");
    scanf("%d", &rate);

    printf("Enter the time: ");
    scanf("%d", &t);

    interest = principal * rate * t / 100;
    printf("The Simple interest is %d", interest);



}
