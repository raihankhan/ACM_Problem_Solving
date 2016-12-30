#include<stdio.h>
int main()
{
     int i,lena,lenb,j;
     char  a[100],b[100];
     gets(a);
     gets(b);
     lena=strlen(a);
     lenb=strlen(b);
     for(j=0;j<lena;j++)
     {
         a[j]=tolower(a[j]);
     }
     for(j=0;j<lenb;j++)
     {
         b[j]=tolower(b[j]);
     }
     i=strcmp(a,b);
     printf("%d\n",i);
     return 0;
}
