#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tien;
    unsigned int time;
    printf("Nhap so tien ban dau: ");
    scanf("%lf", &tien);
    printf("Nhap so thang gui: ");
    scanf("%u", &time);
    double lai = 0.0045;
    double phantram = 1 + lai;
    double tong = tien;
    for (unsigned int i = 0; i < time; i++)
    {
        tong *= phantram;
    }
    printf("Sau %u thang, nguoi do se rut duoc: %.2f VND\n", time, tong);
    return 0;
}
