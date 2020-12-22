#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double mealCost,a,b,c;
    int tip,tax,total;
    scanf("%lf%d%d",&mealCost,&tip,&tax);
    a=(mealCost*tip)/100;
    b=(mealCost*tax)/100;
    c=mealCost+a+b;
    total=c;
    if(c>(total+.50))
        ++total;
    printf("The total meal cost is %d dollars.\n",total);
    return 0;
}
