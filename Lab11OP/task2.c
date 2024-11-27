#include <stdio.h>
#include <string.h>


struct computer {
    int num;
    char firm[30];
    int size;
    char resol[10];
    char cpu[10];
    int ram;
    char drive[5];
    int dSize;
    char gpu[10];
    int battery;
    float price;
};

int main() {
    
    const int count = 7;
    struct computer nouts[count] = {
        {1, "Lenovo Gaming 3", 16, "1920x1080", "AMD", 16, "SSD", 512, "Nvidia3050", 45, 36000.00},
        {2, "  ACER Nitro 5 ", 16, "1920x1080", "Intel", 16, "SSD", 512, "Nvidia1650", 58, 37000.00},
        {3, "ASUS Laptop M51", 16, "1920x1080", "AMD", 8, "SSD", 256, "Radeon Gr", 37, 20000.00},
        {4, "Lenovo IdeaPad3", 16, "1920x1080", "Intel", 8, "SSD", 512, "Intel Iris", 38, 27000.00},
        {5, " ACER Aspire 5 ", 15, "1920x1080", "AMD", 8, "SSD", 512, "Radeon Gr", 48, 26000.00},
        {6, "HP ProBook 455 ", 15, "1920x1080", "AMD", 16, "SSD", 256, "RadeonVega", 45, 45000.00},
        {7, "DELL Vostro 351", 16, "1920x1080", "Intel", 16, "SSD", 512, "Intel UHD", 41, 46000.00}
    };

   
    printf("\n+----+---------------------+-------+------------+-------+-----+-------------+-------+------------+---------+---------+\n");
    printf("| %-2s | %-19s | %-5s | %-10s | %-5s | %-3s | %-11s | %-5s | %-10s | %-7s | %-7s |\n",
           "№", "Model", "Screen", "Resolution", "CPU", "RAM", "Storage", "Size", "GPU", "Battery", "Price");
    printf("+----+---------------------+-------+------------+-------+-----+-------------+-------+------------+---------+---------+\n");

   
    for (int i = 0; i < count; i++) {
        printf("| %-2d | %-19s | %-5d | %-10s | %-5s | %-3d | %-11s | %-5d | %-10s | %-7d | %-7.2f |\n",
               nouts[i].num, nouts[i].firm, nouts[i].size, nouts[i].resol,
               nouts[i].cpu, nouts[i].ram, nouts[i].drive, nouts[i].dSize,
               nouts[i].gpu, nouts[i].battery, nouts[i].price);
    }


    printf("+----+---------------------+-------+------------+-------+-----+-------------+-------+------------+---------+---------+\n");

  
    printf("Введіть номер ноутбука для перегляду деталей (1-7): ");
    int numm;
    scanf("%d", &numm);
    numm--; 

   
    if (numm >= count || numm < 0) {
        printf("Введено неіснуючий номер ноутбука!\n");
        return 0;
    }

    
    printf("\nОсь вибраний ноутбук:\n");
    printf("+----+---------------------+-------+------------+-------+-----+-------------+-------+------------+---------+---------+\n");
    printf("| %-2s | %-19s | %-5s | %-10s | %-5s | %-3s | %-11s | %-5s | %-10s | %-7s | %-7s |\n",
           "№", "Model", "Screen", "Resolution", "CPU", "RAM", "Storage", "Size", "GPU", "Battery", "Price");
    printf("+----+---------------------+-------+------------+-------+-----+-------------+-------+------------+---------+---------+\n");
    printf("| %-2d | %-19s | %-5d | %-10s | %-5s | %-3d | %-11s | %-5d | %-10s | %-7d | %-7.2f |\n",
           nouts[numm].num, nouts[numm].firm, nouts[numm].size, nouts[numm].resol,
           nouts[numm].cpu, nouts[numm].ram, nouts[numm].drive, nouts[numm].dSize,
           nouts[numm].gpu, nouts[numm].battery, nouts[numm].price);
    printf("+----+---------------------+-------+------------+-------+-----+-------------+-------+------------+---------+---------+\n");

    return 0;
}
