////----------------------------------------------------16/02/2026----------------------------------
//---------------------------------------------------sum of the first n natural numbers---------------------------
/*#include<stdio.h>
int sum(int a)
{
 if(a==0)
 {
    return 0;

 }
 return a+sum(a-1);
}
void main()
{
    int a ;
    scanf("%d",&a);
    printf("%d",sum(a));
}
// -------------------------------------------factorial number-----------------------------------
#include<stdio.h>
int sum(int a)
{
 if(a==0)
 {
    return 1;

 }
 return a*sum(a-1);
}
int  main()
{
    int a ;
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}
//----------------------------------------------power of the number----------------------------------------
#include<stdio.h>
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
 
 return a*power(a,b-1);
}
int  main()
{
    int a ,b;
    scanf("%d%d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}*/
//--------------------------------------------------------prime number by the recursion ----------------------------------------
 #include<stdio.h>
int prime(int b, int a)
{
    if ( a==b)
    return 1;
    if (a%b==0)
    return 0;
    return prime (b+1,a);
}
void main()
{
    int a;
    
    scanf("%d",&a);
    if (prime(2,a))
    {
        printf("%d is a prime number",a);
    }
    else
    {
        printf("%d is not a prime number",a);
    }
}