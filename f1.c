#include <stdio.h>
#include <conio.h>


int f1(){

int sum=0, k=0, a[11], i, p;
   for (i=0;i<11;i++)
    {
        a[i]=rand()%21;
        printf("%d ", a[i]);
    }
    for ( i=0;i<11;i++)
        {
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
    printf("\nk = %d\n", k);
    printf("sum = %d\n", sum);
}
