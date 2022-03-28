#include<stdio.h>
typedef struct
{
   char ho[100];
   char dem[100];
   char ten[100];
} HoTen;
typedef struct 
{
   char xa[99];
   char huyen[99];
   char tinh[99];
} QueQuan;
typedef struct 
{
   int toan;
   int ly;
   int hoa;
} Diem;
typedef struct
{

    char truong[100];
    int tuoi;
    int sbd;
    HoTen hoten;
    Diem diem;
    QueQuan quequan;   
} Student;
int main(int argc, char const *argv[])
{
    /* code */
    Student student;
    printf("Nhap thong tin thi sinh: \n");
    printf("SBD: ");
    scanf("%d", &student.sbd);
    fflush(stdin);
    printf("Truong: ");
    gets(student.truong);
    printf("Tuoi: ");
    scanf("%d", &student.tuoi);
    fflush(stdin);
    printf("Ho: ");
    gets(student.hoten.ho);
    fflush(stdin);
    printf("Ten dem: ");
    gets(student.hoten.dem);
    fflush(stdin);
    printf("Ten: ");
    gets(student.hoten.ten);
    fflush(stdin);
    printf("Diem Toan: ");
    scanf("%d", &student.diem.toan);
    fflush(stdin);
    printf("Diem Ly: ");
    scanf("%d", &student.diem.ly);
    fflush(stdin);
    printf("Diem Hoa: ");
    scanf("%d", &student.diem.hoa);
    fflush(stdin);
    printf("Xa: ");
    gets(student.quequan.xa);
    fflush(stdin);
    printf("Huyen: ");
    gets(student.quequan.huyen);
    fflush(stdin);
    printf("Tinh: ");
    gets(student.quequan.tinh);
    printf("====THONG TIN THI SINH======\n");
    printf("SBD: %d",student.sbd);
    printf("\nTruong: %s",student.truong);
    printf("\nHo va ten: %s %s %s",student.hoten.ho,student.hoten.dem, student.hoten.ten);
    printf("\nDiem toan: %d",student.diem.toan);
    printf("\nDiem ly: %d",student.diem.ly);
    printf("\nDiem hoa: %d",student.diem.hoa);
    printf("\nDia chi: %s, %s, %s",student.quequan.xa, student.quequan.huyen, student.quequan.tinh);
    return 0;
}

    