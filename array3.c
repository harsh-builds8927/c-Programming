#include <stdio.h>
int main ()
{
   int a[10],i,se=0,so=0,co=0,ce=0;
   for (i=0;i<10;i++)
   {
    printf("enter %d numbers ",i+1);
    scanf("%d",&a[i]);
   } 
   for(i=0;i<10;i++)
   {
    if (i%2==0)
    {
        se=se+a[i];
        ce++;
    }
    else 
    {
        so=so+a[i];
        co++;
    }
   }
  printf("\n========== RESULT ==========\n");

printf("Sum of Even Index Elements : %d\n", se);
printf("Sum of Odd Index Elements  : %d\n", so);

printf("Count of Even Index Elements : %d\n", ce);
printf("Count of Odd Index Elements  : %d\n", co);

printf("============================\n");
   }