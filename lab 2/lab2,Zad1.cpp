#include <iostream>
#include <cmath>
using namespace std;

void printTableHeader()
{
    cout << "+-----+-----+" << endl;
    cout << "|  x  |  y  |" << endl;
}

void printTableRow(float x, float y)
{
    cout << "+-----+-----+" << endl;
    cout << "|";
    printf("%4.2f", x);
    cout << " |";
    printf("%5.2f", y);
    cout << "|" <<endl;
}

void printTableEnd()
{
    cout << "+-----+-----+" << endl;
}

float f(float x)
{
    return x * x;
}

void getTableFor(float a, float b, float count)
{
    float step = (b - a) / count;
    printTableHeader();
    for (float x = a; x < b; x += step)
    {
        float y = x * x;
        printTableRow(x, y);
    }
    printTableEnd();
}

void getTableWhile(float a, float b, float count)
{
    float step = (b - a) / count;
    float x = a;
    printTableHeader();
    while (x < b)
    {
        float y = x * x;
        printTableRow(x, y);
        x += step;
    }
    printTableEnd();
}

void getTableDoWhile(float a, float b, float count)
{
    float step = (b - a) / count;
    float x = a;
    printTableHeader();
    do
    {
        float y = x * x;
        printTableRow(x, y);
        x += step;
    } while (x < b);
    printTableEnd();
}

int main()
{
    setlocale(LC_ALL, "rus");
    float a, b, count;
    cout << "Введите коардинату x1 : ";
    cin >> a;
    cout << "Введите коардинату x2 : ";
    cin >> b;
    cout << "Введите число шагов : ";
    cin >> count;
    getTableFor(a, b, count);
    getTableWhile(a, b, count);
    getTableDoWhile(a, b, count);
    return 0;
}