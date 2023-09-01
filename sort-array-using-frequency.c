#include<stdio.h>
int main()
{
int a[100], f[100], n, i, j;
printf("\n Enter number of values \n");
scanf("%d",&n);
printf("\n Enter values \n");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
f[i]=1;
}

for(i=0;i<n;i++) {
    
if(f[i]==0)
continue;
    for(j=i+1;j<n; j++){
        
        if(f[j]==0)
        continue;
        if(a[i]==a[j])
        {
        
            f[i]++;
            f[j]=0;
        }
    }
 }
 

printf("\n Frequencies are \n");
for(i=0;i<n;i++)
{
if(f[i] !=0)
printf("\n Frequency of %d is %d\n", a[i], f[i]);
}

 for (int i = 0; i < n - 1; i++)
    {
      int temp = f[i];
      for (int j = i + 1; j < n; j++)
	{
	  if (temp < f[j])
	    {
	      temp = f[j];
	      f[j] = f[i];
	      f[i] = temp;
	      
	       temp = a[j];
	      a[j] = a[i];
	      a[i] = temp;
	    }
	}
    }
    
    printf("\n Sorted Array by Frequency \n");
for(i=0;i<n;i++)
{
if(f[i] !=0)
printf("{ %d }", a[i]);
}
}