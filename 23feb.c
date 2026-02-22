// -----------------------------------------------------printing the array by the increment of the pointer--------
#include<stdio.h>
void array(int *ptr,int size)
{
    if(size==0)
    return;

    printf("%d",*ptr++);
    array(ptr,size-1);
    

}
void main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    array (arr,size);

    
}
