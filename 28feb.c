
/*#include<stdio.h>
int main ()
{
    int op;
    printf("1 head massage cost =1000\n 2 leg massage cost=5000\n 3 neck massage cost=4000\n 4 thigh  massage cost =10000 \n 5 tuk tuk massage\n cost =100\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("head massage\n cost =1000");
        break;
        case 2:
        printf("leg massage\n cost=5000 ");
        break;
        case 3:
        printf("neck massage \n cost=4000 ");
        break;
        case 4:
        printf("thigh  massage\n cost =10000");
        break;
        case 5:
        printf("tuk tuk massage\n cost =100");
        break;
        default:
        printf("this massage is not here");
        break;

    }
}
 calculater 
#include<stdio.h>
int main (){

int a, b;
char c;

    printf("enter the expression\n");
    scanf("%d%c%d",&a,&c,&b);
    switch(c)
    {
        case '+':
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '/':
        if (b!=0)
        {
        printf("%1f\n",(float)a/b);
        }
        else{
            printf("the is zeero enter the  non zero value ");
            scanf("%d",&b);
             printf("%d\n",a/b);
        }
        break;
        default:
        printf("this massage is not here");
        break;

    }
}
