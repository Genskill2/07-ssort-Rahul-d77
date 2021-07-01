void swap_max(int arr[], int l, int position){
  int flag = 0; 
 int max = position;
   for(int i = position ; i < l; i++){
     if( arr[i] > arr[max] ){
       max = i;
      }
    }
     flag = arr[max];
     arr[max] = arr[position];
     arr[position] = flag;
  
   }
void ssort(int d[],int e) 
{
  for(int i=0;i<e;i++) 
  {
    swap_max(d, e, i);
  }
}
