#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "(攝氏轉華氏請輸入：1  華氏轉攝氏請輸入：2)\n請輸入轉換方式：";
    cin >> x;
    while (x < 1 || x > 2) {
        cout << "錯誤喔，再輸入一次：";
        cin >> x;
    }
    float tem;
    cout << "請輸入想轉換的溫度：";
    cin >> tem;
        if (x == 1) {
            cout << "華氏" << tem * 9 / 5 + 32 << "度";
        } else {
            cout << "攝氏" << (tem - 32) * 5 / 9 << "度";
        }
}
