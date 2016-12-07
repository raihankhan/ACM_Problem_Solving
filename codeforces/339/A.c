#include<stdio.h>
int main()
{
    char str[101],temp;
    int len1,i,j;
    scanf("%s",&str);
    len1= strlen(str);
    for(i=0;i<len1;i+=2)
    {
        for(j=0;j<i;j+=2)
        {
            if(str[i]<str[j])
            {
                temp=str[j];
                str[j]=str[i];
                str[i]=temp;
            }
        }
    }

    printf("%s\n",str);
    return 0;

}
