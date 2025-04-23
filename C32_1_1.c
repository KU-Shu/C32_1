#include <stdio.h>

int main() {
    int price = 120;
    int input, change;

    printf("投入金额を入力してください：");
    scanf("%d", &input);

    change = input - price;

    int count_5000 = change / 5000;
    change %= 5000;

    int count_2000 = change / 2000;
    change %= 2000;

    int count_1000 = change / 1000;
    change %= 1000;

    int count_500 = change / 500;
    change %= 500;

    int count_100 = change / 100;
    change %= 100;

    int count_50 = change / 50;
    change %= 50;

    int count_10 = change / 10;
    change %= 10;

    printf("おつり：%d円\n", input - price);
    printf("5000円札：%d 枚\n", count_5000);
    printf("2000円札：%d 枚\n", count_2000);
    printf("1000円札：%d 枚\n", count_1000);
    printf("500円玉 ：%d 枚\n", count_500);
    printf("100円玉 ：%d 枚\n", count_100);
    printf("50円玉  ：%d 枚\n", count_50);
    printf("10円玉  ：%d 枚\n", count_10);

    return 0;
}
