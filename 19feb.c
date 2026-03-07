//-------------------------------------------rule number 5--------------------------------------------
// #include<stdio.h>
// int main()
// { int a=5;
// int *ptr=&a;
// printf("%u\n",ptr);
// printf("%u",ptr+2);
// }
//-------------------------------pass by the referece--------------------
/*#include<stdio.h>
void update(int *a,int *b)
{
  *a+=1;
  *b+=3;
}
  void main()
  {
  int a=80,b=90;
  printf("%d\t%d\n",a,b);
  update(&a,&b);
  printf("%d\t%d",a,b);
  return 0;


}*/
//-------------------------------------------print the array by using the pointer ---------------------------------------
// #include<stdio.h>
// int main()
// {
//     int arr[]={5,4,6,7};
//     int *ptr=arr;
//     for(int i=0;i<4;i++)
//     {
//         printf("%d ",(*ptr+i));
//     }
//     printf("%u",arr);
// }
//---------------------------------------------printing the array in the definiation --------------------------------------------
#include<stdio.h>
void print(int arr[],int size)
{
for(int i=0;i<=size;i++)
{
    printf("%d",arr[i]);
}
}
int main()
{
    int arr[]={5,4,6,7};

    print(arr,3);
   
}
//----------------------------------------------------change the variable by using the fuctions and the pointers---------------------
#include<stdio.h>
float change(float* a)
{

 return *a+=20;
}
void main()
{
    float a;
    scanf("%f",&a);
    printf( "Age after increasing by 20 is %g",change(&a));
}
//-------------------------------------------rule number 5--------------------------------------------
// #include<stdio.h>
// int main()
// { int a=5;
// int *ptr=&a;
// printf("%u\n",ptr);
// printf("%u",ptr+2);
// }
//-------------------------------pass by the referece--------------------
/*#include<stdio.h>
void update(int *a,int *b)
{
  *a+=1;
  *b+=3;
}
  void main()
  {
  int a=80,b=90;
  printf("%d\t%d\n",a,b);
  update(&a,&b);
  printf("%d\t%d",a,b);


}*/
//-------------------------------------------print the array by using the pointer ---------------------------------------
// #include<stdio.h>
// int main()
// {
//     int arr[]={5,4,6,7};
//     int *ptr=arr;
//     for(int i=0;i<4;i++)
//     {
//         printf("%d ",(*ptr+i));
//     }
//     printf("%u",arr);
// }
#include<stdio.h>
void print(int arr[],int size)
{
for(int i=0;i<=size;i++)
{
    printf("%d",arr[i]);
}
}
int main()
{
    int arr[]={5,4,6,7};

    print(arr,3);
   
}
// ----------------------------------------------------------check the little endian or big endian----------------------------
#include<stdio.h>
int main()
{
    int a=0x12345680;
    unsigned char*ptr=&a;
    printf("%x",*ptr);
    if(*ptr=0x80)
    {
        printf("little endian");
    }
    else
    {
        printf("Big endian");
    }
} 
//-----------------------------------------------change the value of the variable by using the functions and the pointers-------------------
#include<stdio.h>
float change(float* a)
{

 return *a+=20;
}
void main()
{
    float a;
    scanf("%f",&a);
    printf( "Age after increasing by 20 is %g",change(&a));
}
//-------------------------------------------------------------read the value of the variavle by using the pointer ------------------------
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    char *ptr=&ch;
    printf("Character entered is %c",*ptr);
    
}
//----------------------------------------------------print the value of the sum--------------------
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int *ptr=&a;
    printf("value is %d" ,*ptr);
}
//----------------------------------------print the square of the array broii--------------
#include <stdio.h>
int square(int arr[], int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("square is");
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]*arr[i]);
    }
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
   square(arr,size);
    

}
