#include <iostream>
#include <string>
#include <cstring>

using namespace std;
struct Pizza {
    string bussiness;
    double diameter;
    double weight;
};

int main() {
    using namespace std;
    Pizza *pizza = new Pizza;
    cout << "���������Ĺ�˾��Ϣ��";
    getline(cin, pizza->bussiness);
    cout << "����������ֱ����";
    (cin >> pizza->diameter);
    cout << "����������������";
    cin >> pizza->weight;
    cout << "��������"<< pizza->bussiness << "��ֱ��Ϊ" << pizza->diameter << "���ף�����Ϊ" << pizza->weight << "�ˡ�";
    return 0;
}