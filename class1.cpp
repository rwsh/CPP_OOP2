#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class TPoint // ��������� �����
{
public:
    TPoint(double x, double y); // ��������� ����������� 
    double Dist(); // ��������� �����
private:
    double XY[2]; // ���������� (x, y)
};

TPoint::TPoint(double x, double y) // ��������� ����������� 
{
    XY[0] = x;
    XY[1] = y;
}

double TPoint::Dist() // ��������� �����
{
    return sqrt(XY[0] * XY[0] + XY[1] * XY[1]);
}

class TCircle : public TPoint // ������� �����, ����������� TPoint  
{
public:
    TCircle(double x, double y, double r) : TPoint(x, y) // �������� ����������� ������
    {
        this->r = r; // ��������� ����������
    }

    bool IsO() // ����� ��� �������� ���������� �� ������ ��������� � �����
    {
        return (Dist() < r); // ���������� ���������� ��������
    }

private:
    double r; // ������� ���� � ������ �����
};

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    TCircle* C = new TCircle(3, 4, 10); // ������� ������ � �������� ���������

    cout << C->Dist() << endl; // ������� ���������� �� ������ �� ����
    cout << C->IsO() << endl; // ������� ��������� ��������
}