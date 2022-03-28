#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* Giai he phuong trinh bac nhat */
    int a, b, c, d, e, f;
    
    float D, Dx, Dy, x, y;
    printf("a*x + b*y = c\n");
    printf("d*x + e*y = f\n");
    printf("\nNhap a: "); scanf("%d", &a);
    printf("\nNhap b: "); scanf("%d", &b);
    printf("\nNhap c: "); scanf("%d", &c);
    printf("\nNhap d: "); scanf("%d", &d);
    printf("\nNhap e: "); scanf("%d", &e);
    printf("\nNhap f: "); scanf("%d", &f);
    //tính D, Dx, Dy theo công thức
    D = a * e - d * b;
    Dx = c * e - f * b;
    Dy = a * f - d * c;
    if (D == 0) {
        //nếu D = 0 và Dx + Dy = 0 thì phương trình vô số nghiệm, ngược lại thì vô nghiệm
        if (Dx + Dy == 0)
        printf("He phuong trinh co vo so nghiem");
        else
        printf("He phuong trinh vo nghiem");
        }
    //tính x và y theo công thức
    else {
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem (x, y) = (%.5lf, %.5lf)", x, y);
    }
        
    
    return 0;
}
