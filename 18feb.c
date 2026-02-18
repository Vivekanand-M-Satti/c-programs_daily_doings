// =======================================================try toimpliment your own islower function-----------------------
/*
#include <stdio.h>

int my_islower(char);

int main()
{
    char ch;
    int ret;
    
    //printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_islower(ch);
    if (ret)
    {
        printf("Entered character is lower case alphabet");
    }
    else
    {
        printf("Entered character is not lower case alphabet");
    }
}
int  my_islower(char a)
{
    if (a<='z'&&a>='a')
    {
        return 1;
    }
    else
    {
      return 0;
    }
}
//========================================================================try to impliment your owm isalnum() function================
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
        printf("Entered character is alphanumeric character");
    }
    else
    {
        printf("Entered character is not alphanumeric character");
    }
    
}
    */
   // ---------------------------------------practicing the fibbonoci number ---------------------------
   #include<stdio.h>
   int main()
   {
        int i=0,a=1,b=0,c=0,num;
        scanf("%d",&num);
        while(c<num)
        {
            printf("%d",c);
            c=a+b;
            a=b;
            b=c;
        
        }
   }
   //---------------------------------------positive fibbonocii by the recursion -----------------------------
   #include <stdio.h>

void positive_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    //printf("Enter the limit : ");
    scanf("%d", &limit);
    
    positive_fibonacci(limit, 0, 1, 0);
    return 0;
}
void positive_fibonacci(int limit,int b,int a,int c)
{
    if(limit>=0)
    {
    if(c>limit)
    {
        return 1 ;
    }
    printf("%d ",c);
    c=a+b;
     a=b;
    b=c;
  
    positive_fibonacci(limit,b,a,c);
    }
    else
    {
        printf("Invalid input");
    }
    
}
//---------------------------------------find the sum and avg by using the functions and  the pointers -----------------

#include<stdio.h>
int sp(int*a,int*b)
{
    printf("sum =%d,",*a+*b);
    printf(" product =%d",(*a)*(*b));
    
}
int main()
{
    int a,b;
    //printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    sp(&a,&b);
}
//----------------------------------------------swap the numbers by using the pointers -----------------------------------
#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d",&a);
    scanf("%d",&b);
    int *aptr=&a;
    int*bptr=&b;
    printf("before swap:");
    printf("num1 is %d\n",*aptr);
    printf("num2 is %d\n",*bptr);
    printf("after swap:\n");
    temp=*aptr;
    *aptr=*bptr;
    *bptr=temp;
    printf("num1 is %d\n",*aptr);
    printf("num2 is %d\n",*bptr);
}
//-----------------------------------------factorial of the number by using the recursion -----------------------
#include <stdio.h>
int factor(int a)
{    if(a==0)
{
    return 1;
}
    
    if(a==1)
    {
        return 1;
    }
    return a*factor(a-1);
    
}

int  main()
{
    static int num;
    static unsigned long long int fact = 1;
    scanf("%d",&num);
    if(num>=0)
    {
    printf(" Factorial of the given number is %d",factor(num));
    }
     else
    {
        printf("Invalid input");
    }
    return 0;
    

}
//------------------------------------------------negative fibbonacy serious by using the recursion-----------------------------------------
#include <stdio.h>

void negative_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    //printf("Enter the limit : ");
    scanf("%d", &limit);
    
    negative_fibonacci(limit, 0, 1, 0);
}
void negative_fibonacci(int limit,int b,int a, int c)
{
    if(limit>0)
    {
        printf("Invalid input");
        return ;
    }
      printf("%d, ",c);
    if(c<=limit)
    {
        return;
    }
  
    c=a-b;
    a=b;
    b=c;
    negative_fibonacci(limit,b,a,c);
    
}