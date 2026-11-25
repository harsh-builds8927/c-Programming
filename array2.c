#include <stdio.h>
int main ()
{
   int a[10],i,se=0,so=0,ce=0,co=0;
   for (i=0;i<10;i++)
   {
    printf("enter %d number ",i+1);
    scanf("%d",&a[i]);
   } 
   for(i=0;i<10;i++)
   {
    if (a[i]%2==0)
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
   printf("\n===== RESULT =====\n");

printf("Sum of Even Numbers : %d\n", se);
printf("Sum of Odd Numbers  : %d\n", so);

printf("Count of Even Numbers : %d\n", ce);
printf("Count of Odd Numbers  : %d\n", co);

printf("===================\n");
   }