#include<stdio.h>
int main()
{
    char s[100],z;
    int i,j,x,len,k=0;
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i+=x)
    {
            x=1;
            for(j=1;j<7;j++)
            {
                if(s[i+j]==s[i])
                    ++x;
                else break;
            }
        if(x>=7)
        {
            k=1;
            break;
        }
    }
    if(k==1)
        printf("YES\n");
    else if(k==0) printf("NO\n");
    return 0;
}
