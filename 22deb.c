#include<stdio.h>
// int main()
// {
//     int a=9,c=90;
//     int *o , *b;
//     o=&a;
//     o=99;
//     *b=a;
//     printf("%d ",o);
//     printf("%d",*o);
//     printf("%d",*b);
    
// }
// #include<stdio.h>
// int main()
// {
//     int a[]={1,3,4,5,5,6};
//     int *p=a;
//     int *w=&a[3];
//     int b=p-w;
//     printf("%d \n %d\n",*p,b);
// }
#include<stdio.h>

int main()
{
    int a[]={0,1,-1,10,11};
    int *p,*q;
    p=a;
    q=&a[4];
    int d=p-q;
    printf("d=%d\n",d);
    *q=25;
     printf("*q=%d\n",*q);
     d=q-p;
      printf("d=%d\n",d);
      *p=27;
       printf("*p=%d\n",*p);
        printf("p=%d",p);
       p=p+3;
        printf("p=%d\n",p);
        d=p-q;
         printf("d=%d\n",d);
}
#include<stdio.h>
int main()
{
    int a=8;
    int *h=&a;
    int **j=&h;
    int ***k=&j;

    **k=90;
    printf("%d\n",&a);
    printf("%d\n",h);
    printf("%d\n",*j);
    printf("%d\n",j);
    printf("%d\n",**j);
    printf("%d\n",***k);
      printf("%d\n",**k);
}
//
#include<stdio.h>
// int main()
// {
//     char str[10];
//     scanf("%s",str);
//     printf("%s",str);
// }
// #include<stdio.h>
// int main()
// {
//     char str[10];
//     scanf("%[^\n]",str);
//     printf("%s",str);
// }
// #include <stdio.h>

// int main()
// {
//     char str[5];

//     fgets(str, sizeof(str), stdin);

//     printf("%s", str);
// }
#include<stdio.h>
int main()
{
    char str[10];
    scanf("%[^\0]",str);
    printf("%s",str);
}
