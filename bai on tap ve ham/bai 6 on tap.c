#include <stdio.h>
#include <math.h>

float dientich(float chieudai, float chieurong);
float chuvi(float chieudai, float chieurong);
int main(int argc, const char * argv[]) {
    float a,b,s;
    char ch;
    do
    {
        ch = 'y';
        printf("Nhap chieu dai 2 canh: ");
        scanf("%f%f", &a, &b);
        s = dientich(a, b);
        printf("Dien tich hinh chu nhat la: %0.2f\n",s);
        s = chuvi(a, b);
        printf("Chu vi hinh chu nhat la: %0.2f\n",s);
        printf("ban co muon tiep tuc Y/N ?");
            fflush(stdin);
            scanf("%c", &ch);
            }while(ch == 'y' || ch == 'Y');
    return 0;
}
float dientich(float chieudai, float chieurong)
{
    float s;
    s = chieudai * chieurong;
    return s;
}
float chuvi(float chieudai, float chieurong)
{
    float c;
    c = (chieudai + chieurong) * 2;
    return c;
}