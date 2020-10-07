#include <iostream>
using namespace std;

float f1(float x, float y)
{
    return y - (2 * x + 2);
}

float f2(float x, float y)
{
    return y - (0.5 * x - 1);
}

float f3(float x, float y)
{
    return y - (-x + 2);
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << " Первое уровнение прямой: у = 2 * х + 2 " << endl;
    cout << " Второе уровнение прямой: у = 0.5 * х - 1 " << endl;
    cout << " Третье уровнение прямой: у = -х + 2 " << endl;
    float x, y;
    cout << " Введите коардинату x ";
    cin >> x;
    cout << " Введите коардинату y ";
    cin >> y;
    if (f1(x, y) != 0 && f2(x, y) != 0 && f3(x, y) != 0)
    {
        if (f1(x, y) < 0 && f2(x, y) > 0 && f3(x, y) > 0)
            cout << 1 << " Область " << endl;
        else if (f1(x, y) < 0 && f2(x, y) < 0 && f3(x, y) > 0)
            cout << 2 << " Область " << endl;
        else if (f1(x, y) < 0 && f2(x, y) < 0 && f3(x, y) < 0)
            cout << 3 << " Область " << endl;
        else if (f1(x, y) > 0 && f2(x, y) < 0 && f3(x, y) < 0)
            cout << 4 << " Область " << endl;
        else if (f1(x, y) > 0 && f2(x, y) > 0 && f3(x, y) < 0)
            cout << 5 << " Область " << endl;
        else if (f1(x, y) > 0 && f2(x, y) > 0 && f3(x, y) > 0)
            cout << 6 << " Область " << endl;
        else
            cout << 7 << " Область " << endl;
    }
    else if (f1(x, y) == 0 && f2(x, y) == 0 && f3(x, y) != 0)
        cout << "На пересичении 1 и 2 прямой" << endl;
    else if (f1(x, y) != 0 && f2(x, y) == 0 && f3(x, y) == 0)
        cout << "На пересичении 2 и 3 прямой" << endl;
    else if (f1(x, y) == 0 && f2(x, y) != 0 && f3(x, y) == 0)
        cout << "На пересичении 1 и 3 прямой" << endl;
    else if (f1(x, y) == 0 && f2(x, y) != 0 && f3(x, y) != 0)
        cout << "На 1 прямой" << endl;
    else if (f1(x, y) != 0 && f2(x, y) == 0 && f3(x, y) != 0)
        cout << "На 2 прямой" << endl;
    else
        cout << "На 3 прямой" << endl;
    return 0;
}