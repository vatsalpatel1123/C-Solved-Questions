#include <stdio.h>
#include<math.h>
int main ()
{
  int a, n, r, temp, i;		
  float sum = 0;		
  printf ("\nEnter First Number of an G.P Series:  ");
  scanf ("%d", &a);		
  printf ("\nEnter the Total Numbers in this G.P Series:  ");
  scanf ("%d", &n);	
  printf ("\nEnter the Common Ratio:  ");
  scanf ("%d", &r);		
  temp = a;
  
  printf ("The G.P Series is  :  ");
  
  for(i=0; i<n; i++){
      
     printf ("%d  ", temp);
      sum = sum + temp;		
      temp = temp * r;
      
  }
  printf("\nSum of GP series : %0.2f",sum);
}