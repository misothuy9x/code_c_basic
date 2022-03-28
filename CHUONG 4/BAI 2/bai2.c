#include<stdio.h>
int main(){
    int n,m;
    printf("nhap so hang n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
           
            if (i == m - 1)
            {
                printf("*");
                continue;
            }
            if (j <= (((n - 1)/2) - i) || j >= (((n - 1)/2) + i))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}