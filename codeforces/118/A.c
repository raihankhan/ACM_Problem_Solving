#include<stdio.h>
#include<string.h>
int main()
{
    char str[101],a[101];
    int  i,len,t;
    scanf("%s",&str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>64&&str[i]<91)
            str[i]=tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
        continue;
        else
        {printf(".%c",str[i]);}
    }
   printf("\n");
}
