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
    Student student[20];
    for (int i = 0; i <= 20 ; i++)
    {
        printf("Nhap thong tin thi sinh thu %d: \n",i);
        printf("SBD: ");
        scanf("%d", &student[i].sbd);
        fflush(stdin);
        printf("Truong: ");
        gets(student[i].truong);
        printf("Tuoi: ");
        scanf("%d", &student[i].tuoi);
        fflush(stdin);
        printf("Ho: ");
        gets(student[i].hoten.ho);
        fflush(stdin);
        printf("Ten dem: ");
        gets(student[i].hoten.dem);
        fflush(stdin);
        printf("Ten: ");
        gets(student[i].hoten.ten);
        fflush(stdin);
        printf("Diem Toan: ");
        scanf("%d", &student[i].diem.toan);
        fflush(stdin);
        printf("Diem Ly: ");
        scanf("%d", &student[i].diem.ly);
        fflush(stdin);
        printf("Diem Hoa: ");
        scanf("%d", &student[i].diem.hoa);
        fflush(stdin);
        printf("Xa: ");
        gets(student[i].quequan.xa);
        fflush(stdin);
        printf("Huyen: ");
        gets(student[i].quequan.huyen);
        fflush(stdin);
        printf("Tinh: ");
        gets(student[i].quequan.tinh);
    }
    for (int i = 0; i <= 20; i++)
    {
        for (int j = i + 1; j <= 20; j++)
        {
            if (student[i].diem.toan + student[i].diem.ly + student[i].diem.hoa < student[j].diem.toan + student[j].diem.ly + student[j].diem.hoa)
            {
                Student sv = student[i];
                student[i] = student[j];
                student[j] = sv;
            }
            
        }
    
    }
    
    for (int i = 0; i <= 20; i++)
    {
        printf("====THONG TIN THI SINH======\n");
        printf("SBD: %d",student[i].sbd);
        printf("\nTruong: %s",student[i].truong);
        printf("\nHo va ten: %s %s %s",student[i].hoten.ho,student[i].hoten.dem, student[i].hoten.ten);
        printf("\nDiem toan: %d",student[i].diem.toan);
        printf("\nDiem ly: %d",student[i].diem.ly);
        printf("\nDiem hoa: %d",student[i].diem.hoa);
        printf("\nDia chi: %s, %s, %s",student[i].quequan.xa, student[i].quequan.huyen, student[i].quequan.tinh);
    }
    
    
    
    return 0;
}
