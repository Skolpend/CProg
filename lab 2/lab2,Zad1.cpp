#include <iostream>
#include <cmath>
using namespace std;

float f(float x)
{
    return (sin(x) * sin(x)) / x;
}

void printTableHeader()
{
    cout << "+-----+-----+" << endl;
    cout << "|  x  |  y  |" << endl;
}

void printTableRow(float x, f)
{
    cout << "+-----+-----+" << endl;
    cout << "|";
    printf("%4.2f", x);
    cout << " |";
    printf("%5.2f", f);
    cout << "|" << endl;
}

void printTableEnd()
{
    cout << "+-----+-----+" << endl;
}


void getTableFor(float a, float b, float count)
{
    float step = (b - a) / count;
    printTableHeader();
    for (float x = a; x < b; x += step)
    {
        printTableRow(x, f);
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
        printTableRow(x, f);
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
        printTableRow(x, f);
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