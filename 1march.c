//
//                      -----------                find the 3rd largest number in the array
 

#include <stdio.h>

int third_largest(int *arr, int size);

int main()
{
    int size, ret;
    
    //Read size from the user
    //printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //funtion call
    ret = third_largest(arr, size);
    if(ret==-1)
    {
          printf("enter the more than 3 elements in the array");
  
    }
    else
    {
          printf("Third largest element of the array is %d\n", ret);

    }
}
int third_largest(int *arr,int size)
{
    if(size<2)
    {
        return -1;
    }
    int st,nd,rd,i;
    st=nd=rd=-22222222;
    for(i=0;i<size;i++)
    {
    
           if( arr[i]>st)
        {
            rd=nd;
            nd=st;
            st=arr[i];
        }
        else if(arr[i]>nd&&arr[i]!=st)
        {
            rd=nd;
            nd=arr[i];
        }
        else
        {
            if(arr[i]>rd&&arr[i]!=nd&&arr[i]!=st)
            {
                rd=arr[i];
            }
        }
    }
    return rd;
}
//                                           ----------------------------              find the 2nd largest number in the array 
#include <stdio.h>

int sec_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //funtion call
    ret = sec_largest(arr, size);
    if(ret==-1)
    {
    printf("the elements in the array is more than one ");
    }
    else
    {
         printf("Second largest element of the array is %d\n", ret);
    }
}
int sec_largest(int *arr,int size)
{
    if(size<1)
    {
        return -1;
    }
    int i,st,nd;
    st=nd=-2222222;
    for(i=0;i<size;i++)
    {
        if(arr[i]>st)
        {
            nd=st;
            st=arr[i];
        }
        
    
    else if(arr[i]>nd&&arr[i]!=st)
    {
        nd=arr[i];
    }
    }
    return nd;
}
//                            wap to remove the duplicate the in the array with out modifying the array
#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size);

int main()
{
    int size;
    scanf("%d",&size);
    int arr1[size];
    int size2=0;
    int arr2[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    fun(arr1,size,arr2,&size2);
    printf("After removing duplicates: ");
    for (int i=0;i<size2;i++)//as the new size is updated by the pass by reference 
    {
        printf("%d ",arr2[i]);
    }
    
}
void  fun(int *arr1, int size, int *arr2, int *new_size)
{
    int i,j;
    for( i=0;i<size;i++)
    {
        for( j=0;j<i;j++)
        {
            if(arr1[i]==arr1[j])
            {
                break;// if the same element then it break the inner loop 
            }
            
        }
        if(j==i)// chaeck that if same is in the same index then only we passing the valuesss
        {
            arr2[(*new_size)++]=arr1[i];
        }
    }
}
 
    //             sort the array without soting that array 
    
    #include <stdio.h>

void print_sort(int arr[], int*
size);

int main()
{
    int size, iter;
    
   // printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    //printf("Enter the %d elements\n");
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    
    print_sort(arr, &size);
}
void print_sort(int *arr,int *size)
{
    int count=0,i;
    int sortarray[*size];
    for(i=0;i<*size;i++)
    {
        sortarray[i]=arr[i];
    }
    int temp;
    for(i=0;i<*size-1;i++)
    {
        for(int j=0;j<*size-i-1;j++)
        {
            
        
        if(sortarray[j]>sortarray[j+1])
        {
            temp=sortarray[j];
            sortarray[j]=sortarray[j+1];
            sortarray[j+1]=temp;
            
            
        }
        }
    }
    printf("after sorting ");
    for(int k=0;k<*size;k++)
    {
        printf("%d ",sortarray[k]);
    }
    printf("\n");
     printf("Original array values  ");
    for(int k=0;k<*size;k++)
    {
        printf("%d ",arr[k]);
    }
    
}
///                  wap to the print the number is prime or not by using the function 
#include <stdio.h>

int is_prime(int);

int main()
{
    int n;
    scanf("%d",&n);
    if (n<0)
    {
        printf("Invalid input");
    }
    else if(is_prime(n))
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    return 0;
}
int is_prime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;// not prime then returns the flag 1
        }
    }
    if(flag==1)
    {
        return 0;//not prime
    }
    else
    {
        return 1;//prine
    }

}

