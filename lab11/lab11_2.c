#include <stdio.h>

struct laptops {
    char manufact[15];
    char disp_size[20];
    char disp_resol[30];
    char processor[30];
    char RAM[10];
    char stor_type[10];
    char stor_capac[10];
    char graph_card[30];
    char battery[10];
    char price[10];
};
int main() {

    struct laptops laptops[] = {
        {"Lenovo", "14 inches", "2560 x 1600 pixels", "Intel Core i7-1265U", "16 GB", "SSD", "512 GB", "Integrated Intel Iris Xe", "57 Wh", "67,960 "},
        {"HP", "13.5 inches", "1920 x 1280 pixels", "Intel Core i7-1165G7", "16 GB", "SSD", "512 GB", "Integrated Intel Iris Xe", "60 Wh", "59,960 "},
        {"Apple", "14.2 inches", "3024 x 1964 pixels", "Apple M1 Pro", "16 GB", "SSD", "512 GB", "Integrated Apple M1 Pro", "70 Wh", "79,960 "},
        {"Dell", "13.4 inches", "1920 x 1200 pixels", "Intel Core i7-1185G7", "16 GB", "SSD", "512 GB", "Integrated Intel Iris Xe", "52 Wh", "59,960 "},
        {"Asus", "14 inches", "2560 x 1600 pixels", "AMD Ryzen 9 6900HS", "16 GB", "SSD", "1 TB", "NVIDIA GeForce RTX 3060", "76 Wh", "65,960 "},
        {"Microsoft", "13.5 inches", "2256 x 1504 pixels", "Intel Core i5-1235U", "8 GB", "SSD", "512 GB", "Integrated Intel Iris Xe", "50.2 Wh", "51,960 "},
        {"Acer", "15.6 inches", "1920 x 1080 pixels", "Intel Core i7-12700H", "16 GB", "SSD", "1 TB", "NVIDIA GeForce RTX 3060", "58 Wh", "63,960 "},
        {"Samsung", "15.6 inches", "1920 x 1080 pixels", "Intel Core i7-1365U", "16 GB", "SSD", "512 GB", "Integrated Intel Iris Xe", "68 Wh", "55,960 "}
    };

    int n = sizeof(laptops) / sizeof(laptops[0]);  


    printf("%-15s %-15s %-20s %-30s %-10s %-10s %-10s %-30s %-10s %-9s\n",
           "Manufacturer", "Disp Size", "Disp Resolution", "Processor", "RAM", "Storage", "Capacity", "Graphics", "Battery", "Price(UAH)");
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");


    for (int i = 0; i < n; i++) {
        printf("%-15s %-15s %-20s %-30s %-10s %-10s %-10s %-30s %-10s %-9s\n",
               laptops[i].manufact, laptops[i].disp_size, laptops[i].disp_resol, laptops[i].processor,
               laptops[i].RAM, laptops[i].stor_type, laptops[i].stor_capac, laptops[i].graph_card,
               laptops[i].battery, laptops[i].price);
    }

    printf("\nОберіть комп\'ютер: ");
    int a;
    scanf("%d", &a);
    if (a > 0 && a < 9) {
        printf("Ви обрали комп\'ютер: \n");
        printf("%-15s %-15s %-20s %-30s %-10s %-10s %-10s %-30s %-10s %-9s\n",
           "Manufacturer", "Disp Size", "Disp Resolution", "Processor", "RAM", "Storage", "Capacity", "Graphics", "Battery", "Price (UAH)");
        for (int i = 0; i < n; i++) {
            if (i == a) {
                 printf("%-15s %-15s %-20s %-30s %-10s %-10s %-10s %-30s %-10s %-10s\n",
               laptops[i-1].manufact, laptops[i-1].disp_size, laptops[i-1].disp_resol, laptops[i-1].processor,
               laptops[i-1].RAM, laptops[i-1].stor_type, laptops[i-1].stor_capac, laptops[i-1].graph_card,
               laptops[i-1].battery, laptops[i-1].price);
        }
    }
    }
    else {
        printf("Невірний вибір. Оберіть комп\'ютер від 1 до 8.\n");
    }
    return 0;
}