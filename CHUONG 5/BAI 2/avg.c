#include<stdio.h>
#define MAX 100
void input(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void avg(int a[], int n){
    int sum1=0,sum2=0;
    int dem1=0,dem2=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            sum1 += a[i];
            dem1++;
        }
        else
        {
            sum2 += a[i];
            dem2++;
        }
        
    }
    printf("Trung binh cong so duong: %.2f\n", 1.0*sum1/dem1);
    printf("Trung binh cong so duong: %.2f\n", 1.0*sum2/dem2);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap n phan tu: ");
    scanf("%d", &n);
    int a[MAX];
    printf("Nhap day so:\n");
    input(a, n);
    avg(a,n);

    return 0;
}

