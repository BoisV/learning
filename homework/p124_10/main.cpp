#include <iostream>
#include <array>

using namespace std;

int main() {
    array<double, 4> scores = {0};
    cout << "����������40���ܳɼ�:\n";
    double total = 0;
    for (int i = 0; i < 3; ++i) {
        cin >> scores.at(i);
        total += scores.at(i);
    }
    cout << "��һ�Σ�" << scores.at(0) << "s\n"
         << "�ڶ��Σ�" << scores.at(1) << "s\n"
         << "�����Σ�" << scores.at(2) << "s\n"
         << "ƽ���ɼ�Ϊ��" << total / 3;
    return 0;
}