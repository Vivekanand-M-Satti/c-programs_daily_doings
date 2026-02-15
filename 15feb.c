//-------------------------------------------1. Print only even numbe-------------------------

/*#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr [size];
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for (int i=0;i<size;i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d  ",arr[i]);
        }
        
    }
}
//--------------------------------------------------------------------------2. Search a number in------------------------------------------
#include<stdio.h>
int main()
{
    
    int size,b=9,found=0;
    scanf("%d",&size);
    int arr [size];
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for (int i=0;i<size;i++)
    {
        if (arr[i]==b)
        {
            found=1;
        }
      
    }
        
    
    if (found==1)
     {
            printf(" b is found ");
        }
        else 
        {
            printf(" b is not found ");
        }
}

//=------------------------------------------------------------3. Find the sum of an arry-------------------

#include<stdio.h>
int main()
{
    int size,sum=0;
    scanf("%d",&size);
    int arr [size];
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for (int i=0;i<size;i++)
    {
        sum+=arr[i];
        
    }
    printf("%d",sum);
}
//-----------------------------------------------------------------------4. Remove an element from an a----------------
#include<stdio.h>
int main()
{
    int size,a;
    scanf("%d%d",&size,&a);
    
    int arr [size];
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for (int i=0;i<size;i++)
    {
        if (arr[i]==a)
        {
            arr[i]=arr[i+1];
            
        }
        
    }
    size--;
     for (int i=0;i<size;i++)
     {
        printf("%d",arr[i]);
     }
    


}
//----------------------------------------------------------------------------------------Find the largest number from an array--------
#include<stdio.h>
int main()
{
    int size,largest;
    scanf("%d",&size);
    int arr [size];
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    largest=arr[0];
    for (int i=0;i<size;i++)
    {
        if (arr[i]>largest)
        largest=arr[i];
        
    }
    printf(" Largest is the %d",largest);
}
//-------------------------------------------------------------6. Find difference between largest and smallest number ---------------------
#include<stdio.h>
int main()
{
    int size,largest;
    scanf("%d",&size);
    int arr [size];
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    largest=arr[0];
    for (int i=0;i<size;i++)
    {
        if (arr[i]>largest)
        largest=arr[i];
        
    }
    printf("largest number in the array is %d\n",largest);
    int smallest =arr[0];
    for (int i=0;i<size;i++)
    {
        if (arr[i]<smallest)
        smallest=arr[i];
        
    }
    printf("smallest numbet in the aray is %d\n",smallest);
    printf(" diffrencne between largest and the smallest is  %d",largest-smallest);
}
//---------------------------------------------------------------7. Print prime numbers ffrom the array---------------

#include<stdio.h>
int main()
{
    int size,sum=0;
    scanf("%d",&size);
    int arr [size];
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for (int i=0;i<size;i++)

    {
        if (arr[i]==1)
        continue;

        sum=0;
        for (int j=2;j<arr[i];j++)
        {
           if (arr[i]%j==0)
           {
            sum=1;
            break;
           }
           

        }
        if (sum==0)
        {
            printf("%d",arr[i]);
        }
        
    }
    
}
//------------------------------------------reverse the number ------------------------------
#include<stdio.h>
int main()
{
    int size ;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)

    {
        scanf("%d",&arr[i]);
        
    }
    int temp;
    for(int i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
     
    }
    for(int i=0;i<size;i++)

    {
        printf("%d",arr[i]);
        
    }
}*/
//----------------------------------------Remove duplicates from an array -----------------------------------
#include<stdio.h>
int main()
{
    int size,largest;
    scanf("%d",&size);
    int arr [size];
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int count=0;
    for (int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)

        {
            if(arr[i]==arr[j+1])
            {
                arr[i]=arr[i+1];
                break;
            }
            
        }
        
    }
    for(int i=0;i<size;i++)
    {
    printf("  %d",arr[i]);
}
}
     