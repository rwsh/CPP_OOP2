#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class TOne // ��������� �����
{
public:
    TOne(int a) // �����������
    {
        this->a = a;
    }
    int a;
    void ReCalc() // �����, ���������� �������� a
    {
        a = a * a;
    }
    void Print() // �����, ������������ ReCalc
    {
        ReCalc(); // �������� ������ �����
        cout << endl << a << endl;
    }
};

class TTwo : public TOne // ����� ���������
{
public:
    TTwo(int a) : TOne(a)
    {
    }
    void ReCalc() // �������������� �����
    {
        a = a * a * a;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    TOne* One = new TOne(2);
    One->Print(); // ����� �������� 4

    TTwo* Two = new TTwo(2);
    Two->Print(); // ����� �������� 4
}