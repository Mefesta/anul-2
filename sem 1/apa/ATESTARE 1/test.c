#include <stdio.h>

int main()
{
    int a, b, m, dc=1, c=2;
    printf("introduceti a="); scanf("%d", &a);
        printf("introduceti b="); scanf("%d", &b);
if (a<=b) m=a; else m=b;
while (c<=m){
    if((a%c)==0 && (b%c)==0){
        dc=dc*c;
        a=a/c;
        b=b/c;
        m=m/c;
    }
    else c++;
}
   printf("%d", dc) ;
   return 0;
}
