#include <stdio.h>

int main() {
    double money = 0.0; // 初始化账户余额
    char key;

    while (1) {
        printf("Please key in the number of the service you want to use:\n\
                0. Check my account\n\
                1. Save some money today!\n\
                2. Use some money today!\n\
                3. Exit\n");

        key = getchar();
        getchar(); // 清除缓冲区中的换行符

        switch (key) {
            case '0':
                printf("Your account still has %.2lf in bank.\n", money);
                break;
            case '1':;
                double gain;
                printf("How much money would you like to save?\n");
                scanf("%lf", &gain);
                getchar(); // 清除缓冲区中的换行符
                money += gain;
                printf("You have saved %.2lf. Your new balance is %.2lf.\n", gain, money);
                break;
            
            case '2':;
                double cost;
                printf("How much money would you like to use today?\n");
                scanf("%lf", &cost);
                getchar(); // 清除缓冲区中的换行符
                money -= cost;
                printf("You have used %.2lf. Your new balance is %.2lf.\n", cost, money);
                break;
            
            case '3':
                printf("Have a good day!\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}

