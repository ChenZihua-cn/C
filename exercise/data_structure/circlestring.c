#include <stdio.h>
#include <string.h>

// 函数声明
int isPalindrome(char *str);

int main() {
    char str[100];
    
    // 读取输入字符串
    printf("请输入一个长度小于100的字符串: ");
    fgets(str, sizeof(str), stdin);
    
    // 去掉换行符
    str[strcspn(str, "\n")] = '\0';
    
    // 判断是否为回文并输出结果
    if (isPalindrome(str)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}

// 函数定义
int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // 不是回文
        }
    }
    return 1; // 是回文
}
