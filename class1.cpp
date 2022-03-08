#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class TPoint // объ€вл€ем класс
{
public:
    TPoint(double x, double y); // объ€вл€ем конструктор 
    double Dist(); // объ€вл€ем метод
private:
    double XY[2]; // координаты (x, y)
};

TPoint::TPoint(double x, double y) // реализуем конструктор 
{
    XY[0] = x;
    XY[1] = y;
}

double TPoint::Dist() // реализуем метод
{
    return sqrt(XY[0] * XY[0] + XY[1] * XY[1]);
}

class TCircle : public TPoint // создаем класс, наследующий TPoint  
{
public:
    TCircle(double x, double y, double r) : TPoint(x, y) // вызываем конструктор предка
    {
        this->r = r; // сохран€ем переменную
    }

    bool IsO() // метод дл€ проверки содержитс€ ли начало координат в круге
    {
        return (Dist() < r); // возвращаем логическое значение
    }

private:
    double r; // скрытое поле Ц радиус круга
};

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    TCircle* C = new TCircle(3, 4, 10); // создаем объект и передаем параметры

    cout << C->Dist() << endl; // выводим рассто€ние от центра до нул€
    cout << C->IsO() << endl; // выводим результат проверки
}