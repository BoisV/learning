#include <iostream>
#include <array>

using namespace std;

int main() {
    array<double, 4> scores = {0};
    cout << "请输入三次40米跑成绩:\n";
    double total = 0;
    for (int i = 0; i < 3; ++i) {
        cin >> scores.at(i);
        total += scores.at(i);
    }
    cout << "第一次：" << scores.at(0) << "s\n"
         << "第二次：" << scores.at(1) << "s\n"
         << "第三次：" << scores.at(2) << "s\n"
         << "平均成绩为：" << total / 3;
    return 0;
}