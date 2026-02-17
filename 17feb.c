// ---------------------------find the frequenccy of the array -------------------

/*#include<stdio.h>
int main()
{
    int size ,b;
    scanf("%d",&size);
    int arr[size];
    int final_count=0,count=0,i,j;
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {  count = 0;
        for(j=0;j<size;j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        if (final_count < count )
            {
                 final_count=count;
                b=arr[i];
            }
    }
    printf("the nuber %d  have the %d frequenxy",b,final_count );
}
//---------------------------------------------------------------check the 2 array are same or not ---------------
#include<stdio.h>
int main()
{
    int size,count =0 ;
    scanf("%d",&size);
    int arr[size],brr[size];
    for(int i=0;i<size;i++)
    {
    scanf("%d %d",&arr[i],&brr[i]);
    if (arr[i]==brr[i])
    {
        count ++;
    }
    }
    if (count==size)
    {
        printf("The both array is the same bosss");
    }
    else 
    {
        printf("THE both array are not same boss srry");
    }
}
// --------------------------------------------check the array palindrome or not--------------------------------
#include<stdio.h>
int main()
{
    int size,temp=0,count=0 ;
    scanf("%d",&size);
    int arr[size],brr[size];
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    brr[i]=arr[i];

    }
    for(int j=0;j<size/2;j++)
    {
        temp=arr[j];
        arr[j]=arr[size-j-1];
        arr[size-j-1]=temp;
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]==brr[i])
        {
            count++;
        }
    }
    if(count==size)
    {
        printf("the array is the palindrome ");
    }
    else
    {
         printf("the array is not palindrome");
    }
}
//------------------------------------------------------shift the array to the left position -----------------------
#include<stdio.h>
int main()
{
    int size ,b,i;
    scanf("%d",&size);
    int arr[size];
    //int final_count=0,count=0,i,j;
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
    for(i=0;i<size-1;i++)
    { 
        arr[i]=arr[i+1];
    
    }
      arr[size-1]=temp;
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }

}
//-----------------------------------------------------------shift the value by the right side --------------
#include<stdio.h>
int main()
{
    int size ,b,i;
    scanf("%d",&size);
    int arr[size],brr[size];
    //int final_count=0,count=0,i,j;
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        brr[i]=arr[i];
    }
    int temp=arr[size-1];
    for(i=0;i<size-1;i++)
    { 
        arr[i+1]=brr[i];
    
    }
      arr[0]=temp;
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }

}
#include <stdio.h>

int my_isalnum(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:\n");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    
}
int my_isalnum(int a)
{
    if ((a>= 'a' &&a<=  'z')||(a<='Z' &&a>='A')||(a<='9'&&a>='0'))
    {
        printf("Entered %c character is alphanumeric character",a);
    }
    else
    {
        printf("Entered character is not alphanumeric character");
    }
    
}


