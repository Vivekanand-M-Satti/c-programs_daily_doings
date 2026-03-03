//---------------------------------------------print the array by using the functoins and the pointers brooo-------------------------
// #include<stdio.h>
// void ptrr(int *ptr,int size)
// {   printf("Array's elements are\n");
//     for(int i=0;i<size;i++)
//     {  
//         printf("%d\n",*(ptr+i));
//     }
    
// }
// int main()
// {
//     int arr[]={10,20,30,40,50};
    
//     ptrr(arr,5);
// }
//
// #include<stdio.h>
// int main()
// {
//     int*atr=&a,a=9;
//     printf("%d",*atr);
// }

// #include<stdio.h>
// int main()
// {
//     int a=9,b=10;
//     int *ptr=
// }
// ------------------------------------------------remove the dupplicate the numbers-----------------------

// #include<stdio.h>
// int main()
// {
//     int size,i,j,k;
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<size;i++)
//     {
//         for(j=i+1;j<size-1;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 for(k=0;k<size-1;k++)
//                 {
//                     arr[i]=arr[i+1];

//                 }
//                 size--;
//                 j--;
                
//             }
//         }
//     }
//     for (i=0;i<size;i++)
//     {
//         printf("%d",arr[i]);
//     }
// }
//--------------------------------------printing the array by using the pointers and the recursion ---------------
/*#include<stdio.h>
void print(int arr[],int limit,int size)
{
       if (limit==size)
       {
      return;
       }
       
       printf("%d ",arr[limit]);

           print(arr,limit+1,size);
    }
int main()
{
    int arr[5]={5,6,7,8,9};
    int size=5;
    print(arr,0,size);

}*/
// #include<stdio.h>
// int  print(int arr[],int size)
// {
//        if (size==0)
//        {
//       return 0;
//        }
       
    

//            int j= print(arr,size-1);
//             printf("%d ",arr[j]);

//     }
// int main()
// {
//     int arr[5]={5,6,7,8,9};
//     int size=5;
//     print(arr,size);

// }
// #include<stdio.h>
// void array (int arr[],int size)
// {
//     for(int i=0;i<size ;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
// }
// int main()
// {
//     int size;
//     int arr[]={1,2,3,4,5};
//     size=5;
//     array(arr,size);
//     for(int i=0;i<size;i++)
//     {
//     printf("%d",arr[i]);
//     }
    
// }
// int main()
// {
// char ch = 'A';
// int n=ch;
// printf("%c", n);
// }
//---------------------------------------------------------reverse the array -----------------------------
/*#include<stdio.h>
int main()
{
    int size,i;
    scanf("%d",&size);
    int arr[size];
    int temp=arr[0];
     for(int i=0;i<size;i++)
     {
        scanf("%d",&arr[i]);
     }
    for(int i=0;i<size/2;i++)
    {    int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
        
    }
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}
//--------------------------------------------------by using the racurrion and array passing ------------------------
#include<stdio.h>
void array(int arr[],int size,int a,int b)
{ int temp;
    b=size;
    if(a==size/2)
    {
        return ;
    }
    temp=arr[a];
    arr[a]=arr[size-a-1];
    arr[size-1-a]=temp;


    array(arr,size,a+1,b);
}
int main()
{
    int size,a=0,b=1;
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    array (arr,size,a,b);
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }


}
///-----------------------------------------------------print the largest elmet of the attay -------------------------
#include<stdio.h>
int main()
{
    int size,i,final,last;
    scanf("%d",&size);
    int arr[size];
    int temp=arr[0];
     for(int i=0;i<size;i++)
     {
        scanf("%d",&arr[i]);
     }
     last=arr[0];
    for(int i=0;i<size;i++)
    {    if(last<arr[i])
        {
            last=arr[i];
        }
        
    }
        printf("%d",last);
    
}*/
//-------------------------------------------------------------print the largest elmet of the attay  by using the recursion -------------------------
#include<stdio.h>
void array(int arr[],int size,int a,int b)
{ int temp;
    b=size;
    if(a==size/2)
    {
        return ;
    }
   


    array(arr,size,a+1,b);
}
int main()
{
    int size,a=0,b=1;
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    array (arr,size,a,b);
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }



}

