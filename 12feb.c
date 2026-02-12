///////////////////////-------------------------------------FACTOR OF THE GIVEN NUMBER ----------------------------------------------
#include<stdio.h>
void  factor (int );
void  factor(int a )
{
    int i=1;
     while (i<=a)
     {
        if(a%i==0){
        printf("%d\n",i);
        }
        i++;
     }
}
int main()
{
    int a;
    scanf("%d",&a);
    factor(a);
}

//----------------------------------------------------------wap the reverrse the number -----------------
#include<stdio.h>
int rev(int a );
int rev( int a)
{
     int rev=0;
    while(a>0){
   
    rev=rev*10+(a%10);
    a=a/10;
    }
    return rev;


}
int main()
{
    int a;
    printf("%d is the revers number ",rev(123456789));
}
//-----------------------------------------------------------sum of the digits------------------------------------
#include<stdio.h>
int rev(int a );
int rev( int a)
{
     int sum=0;
    while(a>0){
        sum=sum+(a%10);
        a=a/10;
   
    }
    return sum;


}
int main()
{
    int a;
    printf("%d sum of the digits  ",rev(999));
}


//////////////////////////////////////------------------------------avg of the 3 numbers 
#include<stdio.h>
int avg (int a,int b , int c);
int avg (int a ,int b,int c)
{
    return (a+b+c)/3;
}
int main()
{

    printf("%d",avg(1,2,3));
}

//---------------------------------------------------sum of the even numbers --------------------------------
#include<stdio.h>
int evensum(int n);
int evensum (int n)
{
    int sum=0;
   for(int i=2;i<=n;i+=2)
   {
       sum=sum+i;
   }
   return sum;
}
int main ()

{
    int n;
    scanf("%d",&n);
    printf("%d is the sum of the even numbers ",evensum(n));
}
////////////////////////////////----------------check number is positive or the negative -==========================_
#include<stdio.h>
int pnz(int a);
int pnz(int a)
{
 if (a>0)
 {
    return 1;
 }
 else if (a<0)
 {
    return -1;
 }
 else 
 return 0;
}  
int main()
{
    int a ;
    scanf("%d",&a);
 int b;
 pnz(a);
    if(pnz(a)==1)
    {
        printf("the number is the positive");
    }
    else if (pnz(a)==-1)
    {
        printf("the nubmer is the negative ");
    }
    else 
    {
        printf ("the number is zero");
    }
}


//--------------------------------the alpabet is vowel or not----------------------------
#include<stdio.h>
char vowel(char a);
char main()
{
    char a;
    scanf("%c",&a);
        if(vowel(a))
        {
            printf("the value is vowel");
        }
        else 
        {
            printf("it is not vowel");
        }
}
char vowel(char a)
{
     if (a=='A'||a=='a'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
     {
        return 1;
     }
     else 
     {
        return 0;
     }

}
// ---------------------------------------find the sum of the first N narural numbers -------------------------------
#include<stdio.h>
int naturalsum(int n)
{
    return n*(n+1)/2;
}
int main()
{
    int a ;
    scanf ("%d",&a);
    printf("%d",naturalsum(a));
}
//-----------------------------------------check numbers are equal or not ------------------------------
#include<stdio.h>
int equal2(int a ,int b)
{
    if(a==b)
    return 1;
    else 
    return 0;
}
void main()
{
int a=9,b=88;
if(equal2(9,9))
{
 printf("equal");
}
else{
    printf("not equal");
}
}
//---------------------------------------calculate the nuber of the digit ----------------------

#include<stdio.h>
int digit(int a )
{
    int add=0,count=0;
    while(a!=0)
    {
add=add+(a%10);
count++;
a=a/10;
    }
    return count;

}
int main()
{
    printf("%d",digit(12));
}
//----------------------------------------------------------find the power of the numbeer--------------------------
#include<stdio.h>
int power(int a ,int b)
{
    int c=1;
  for(int i=1;i<=b;i++)
  {
    c*=a;
  }
  return c ;
}
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",power(a,b));
    printf("%d",a);
}*/
//------------------------------------------check the number is even or not and <100 or not --------------------------
#include<stdio.h>
int even(int a)
{
    if (a%2==0&&a<100)
    printf("condition satispy");
    else 
    printf("not satisphies ");

}
void main()
{
    int a;
    scanf("%d",&a);
    even(a);

}*/
 // stromgest number or  not 
#include<stdio.h>
int stronge(int a)
{    int digit=0,fact=0;
    while(a!=0)
    {
        digit= a%10;
        int sum=1;
        for( int i=1 ; i<=digit ;i++)
        {
            sum=sum*i;
        }
        fact=fact+sum;


        a=a/10;
    }
    return fact;

    
}
int main()
{
    int a;
    scanf("%d",&a);
    if(stronge(a)==a)
    {
        printf("it is stronge number ");
    }
    else
    {
      printf("it not stronge number");
    }
}
//----------------------------------------------------------------count the number of even digits of a number----------------------------
#include<stdio.h>
int digit(int a )
{
    int add=0,count=0,digit=0;
    while(a!=0)
    {
digit=(a%10);
if(digit%2==0)
{
    count++;
}

a=a/10;
    }
    return count;

}
int main()
{
    printf("%d",digit(1222422));
}






















