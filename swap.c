void swap_max(int a[], int b, int c)
{
  int j = 0; 
  int max = c;
  for(int i = c; i < b; i++)
  {
     if( a[i] > a[max] )
      {
       max = i;
      }
   }
     j = amax];
     a[max] = a[c];
     a[c] = j;
   }

void ssort(int d[],int e) 
{
  for(int i=0;i<e;i++) 
  {
    swap_max(d, e, i);
  }
}
