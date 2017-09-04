#include <stdio.h>
void main()
{
int no,a,b;
printf("ENTER TWO INTERVALS:\t");
scanf("%d",&a);
scanf("%d",&b);
printf("Print Odd Numbers in a given range a to b:");
for(no=a;no<=b;no++)
{
if(no%2==1)
printf ("%d\t",no);
}
} 
