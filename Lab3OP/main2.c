#include <stdio.h>
int main ()
{
    printf("\nВведіть свої дані\n");
    char x0[1000], y0[1000], z0[1000], k0[1000];
    printf("\nПерший:\n");
    printf("\nІм'я: ");
    scanf("%s", x0);
    printf("\nПрізвище: ");
    scanf("%s", y0);
    printf("\nУлюблений колір: ");
    scanf("%s", z0);
    printf("\nВік: ");
    scanf("%s", k0);

    char x1[1000], y1[1000], z1[1000], k1[1000];
    printf("\nДругий:\n");
    printf("\nІм'я: ");
    scanf("%s", x1);
    printf("\nПрізвище: ");
    scanf("%s", y1);
    printf("\nУлюблений колір: ");
    scanf("%s", z1);
    printf("\nВік: ");
    scanf("%s", k1);
    char x2[1000], y2[1000], z2[1000], k2[1000];
    printf("\nТретій:\n");
    printf("\nІм'я: ");
    scanf("%s", x2);
    printf("\nПрізвище: ");
    scanf("%s", y2);
    printf("\nУлюблений колір: ");
    scanf("%s", z2);
    printf("\nВік: ");
    scanf("%s", k2);
    char x3[1000], y3[1000], z3[1000], k3[1000];
    printf("\nЧетвертий:\n");
    printf("\nІм'я: ");
    scanf("%s", x3);
    printf("\nПрізвище: ");
    scanf("%s", y3);
    printf("\nУлюблений колір: ");
    scanf("%s", z3);
    printf("\nВік: ");
    scanf("%s", k3);
    char x4[1000], y4[1000], z4[1000], k4[1000];
    printf("\nП'ятий:\n");
    printf("\nІм'я: ");
    scanf("%s", x4);
    printf("\nПрізвище: ");
    scanf("%s", y4);
    printf("\nУлюблений колір: ");
    scanf("%s", z4);
    printf("\nВік: ");
    scanf("%s", k4);


    char x[] = "Ім'я:", y[] = "Прізвище:", z[] = "Улюблений колір:", k[] = "Вік:";
    printf("\n№  %-13s %-20s %-13s %-16s", x, y, z, k);
    printf("\n1.  %-13s %-10s %-13s %-16s\n", x0, y0, z0, k0);
    printf("2.  %-13s %-10s %-13s %-16s\n", x1, y1, z1, k1);
    printf("3.  %-13s %-10s %-13s %-16s\n", x2, y2, z2, k2);
    printf("4.  %-13s %-10s %-13s %-16s\n", x3, y3, z3, k3);
    printf("5.  %-13s %-10s %-13s %-16s\n", x4, y4, z4, k4);


    return 0;
}