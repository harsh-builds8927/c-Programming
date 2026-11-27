#include <stdio.h>
int main ()
{
   int a[10],i,max,min;
   for (i=0;i<10;i++)
   {
    printf("enter %d numbers ",i+1);
    scanf("%d",&a[i]);
   } 
   max=a[0];
   min=a[0];
   for (i=1;i<10;i++)
   {
    if(a[i]>max)
    {
        max=a[i];
    }
    if (a[i]<min)
    {
        min=a[i];
    }
   }
   printf("\n========== RESULT ==========\n");
printf("Greatest Number : %d\n", max);
printf("Smallest Number : %d\n", min);
printf("============================\n");
}