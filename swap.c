#include<stdio.h>

void swap_max(int a[],int b, int c)
{
  
  int j,max=a[c];
  for(int i=c;i<b;i++)
  { 
    
    if(a[i]>max)
    {
      max=a[i];   printf("max%i ",max);
      j=i;
    }
  }
  a[j]=a[c];      printf(" a[j]%i",a[j]);
  a[c]=max;       printf("  a[c]%i\n",a[c]);
  
  
}

void ssort(int d[],int e) 
{
  for(int i=0;i<e;i++) 
  {
    swap_max(d, e, i);
    for(int j=0;j<e;j++) printf("%i ",d[j]);printf("\n");
  }
}
