#include <stdio.h>

#define MAX 100

int main()
{
    /* ma trận nguyên cấp n x m, neu ma tran 6x6 thi n = 6, m = 6 */
    int a[MAX][MAX];
    int n,m;
    printf("----------MA TRAN-------------\n");
    printf("Nhap so hang n = ");
    scanf("%d",&n);
    printf("\nNhap so hang m = ");
    scanf("%d",&m);
    int i,j;
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= m; j++)
        {
            printf("\n a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("====MA TRAN====\n");
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= m; j++)
        {
            printf("%5d",a[i][j]);
            
        }
        printf("\n");
        
    }

    
    return 0;
}
