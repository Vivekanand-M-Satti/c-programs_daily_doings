//----------------------------------------------------------------------24/02/2026------------------------
//----------------------------1..............write the own string in the function/
/*#include<stdio.h>
void strin(char *str)
{
    printf("%s",str);
}
int main()
{
    char str1[]="hello mav";
    strin (str1);

}*/
//-----------------------------2-------wap to convert the upper case to the lower ccase and the lower case to the upper case-
#include<stdio.h>
void change(char str[])
{
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            printf("%c",str[i]=str[i]-32);
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            printf("%c",str[i]=str[i]+32);
            
        }
    }
    printf("%s",str);

}
int main()
{
    char str[]="heLLlo";
    change(str);
}
