#include<stdio.h>

int lab05(a, b)
{
   int i, max = 0;
   
   while(a > b)
   {
       b++;
       i = 2;
       while(b%i != 0) 
       {
           i++;
       }
       if(b == i && b > max)
       {
          max = b;      
       }      
   }
   
   return max;
}

int lab06(k, ticket)
{
    int A[63],sum1,sum2,n1,n2,n3,n4,n=0;
    
    while( k<=2000)
    {
        
        n1=k/1000;
        n2=(k/100)%10;
        n3=(k/10)%10;
        n4=k%10;
        
        sum1=n1+n2;
        sum2=n3+n4;
        
        if(sum1==sum2)
        {
          A[n]=k;
          n++;
        }
        
        k++;
    }
    
    n = A[ticket];
    
    return n;
}
