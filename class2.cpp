#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class TOne // объявляем класс
{
public:
    TOne(int a) // конструктор
    {
        this->a = a;
    }
    int a;
    void ReCalc() // метод, изменяющий значение a
    {
        a = a * a;
    }
    void Print() // метод, использующий ReCalc
    {
        ReCalc(); // вызываем другой метод
        cout << endl << a << endl;
    }
};

class TTwo : public TOne // класс наследник
{
public:
    TTwo(int a) : TOne(a)
    {
    }
    void ReCalc() // переопределяем метод
    {
        a = a * a * a;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    TOne* One = new TOne(2);
    One->Print(); // будет выведено 4

    TTwo* Two = new TTwo(2);
    Two->Print(); // будет выведено 4
}