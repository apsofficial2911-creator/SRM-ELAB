#include <stdio.h>
int main()
{int age;
scanf("%d",&age);
if (age <= 1 || age >= 100)
printf("Invalid input");
else if (age>=18)
printf("Eligible");
else
printf("Not Eligible");
return 0;}
