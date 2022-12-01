/*#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int sum, k, a[11],i, p;
   // a[11] = {10,11,12,13,14,15,16,17,18,19,20};
    k=0;
    sum=0;
    for (i=0;i<11;i++)
    {
        a[i]=rand()%21;
        printf("%d", a[i]);
    }
    for ( i=0;i<11;i++){
      p=0;
      if (a[i]%5==0)
       p+=1;
      else
       p=p;
      if (a[i]%7 != 0)
       p+=1;
      else
       p=p;
      if (p==2)
      {
        sum=sum+a[i];
       k+=1;
      }
    else
    {
       sum=sum;
       k=k;
    }

    }
    printf("k = %k\n", k);
    printf("sum = %sum\n", sum);
    return 0;
}
*/
