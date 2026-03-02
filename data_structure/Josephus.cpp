#include <iostream>
#include <limits>
using namespace std;

int Josephus(int n, int m) {
    if (n == 1) {
        return 0;
    } else {
        return (Josephus(n - 1, m) + m) % n;
    }
}

int main() {
    int n, m;
    
    cout << "请输入两个数字，用空格分隔：";
    while (!(cin >> n >> m)) {
        cin.clear(); // 清除错误状态
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略掉当前行中所有的字符
        cout << "输入错误，请输入两个整数：";
    }
    
    int result = Josephus(n, m);
    cout << "最后剩下的人的位置是：" << (result + 1) << endl;
    
    return 0;
}
