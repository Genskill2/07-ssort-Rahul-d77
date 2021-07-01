void swap_max(int a[],int b, int c)
{
  int j,max=a[c];
  for(int i=c;i<b;i++)
  {  
    if(a[i]>max)
    {
      max=a[i];
      j=i;
    }
  }
  a[j]=a[c];
  a[c]=max;
}

void ssort(int d[],int e) 
{
  for(int i=0;i<e;i++) 
  {
    swap_max(d, e, i);
  }
}
