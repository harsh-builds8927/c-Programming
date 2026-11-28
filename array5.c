#include <stdio.h>
int main ()
{
   int a[3],i,j,b[3];
   for (i=0;i<3;i++)
   {
   printf("Enter element %d of Array A: ", i+1);
    scanf("%d",&a[i]);
   } 
   for (j=0;j<3;j++)
   {
   printf("Enter element %d of Array B: ", j+1);
    scanf("%d",&b[j]);
   }
   printf("\n===== COMMON ELEMENTS =====\n");
   for(i=0;i<3;i++)
   {
    for (j=0;j<3;j++)
    {
        if (a[i]==b[j])
        {
            printf("%d\n",a[i]);
        }
    }
   }
   printf("============================\n");
}