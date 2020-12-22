#include <stdio.h>
#include <math.h>
  int main()
{
    const double PI=acos(-1);
    int s,t;
    scanf("%d", &t);
    for(s=1;s<=t;s++)
    {
        double R,r;
        int n;
        scanf("%lf %d", &R,&n);
        r = (R*sin(PI/n)) / (sin(PI/n)+1);
                printf("Case %d: %.10lf\n",s,r);
    }
        return 0;
}