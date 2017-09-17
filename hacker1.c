#include<stdio.h>
int main()
{
    int a,b,fact=0;
    scanf("%d %d",&a,&b);
        int i=1;
        while(1){
            if(a<2)
                break;
            if(a%i==0){
                a/=i;
                if(b%i==0){
                    fact++;
                }
            }
            i++;
        }
        printf("%d\n",fact);
}