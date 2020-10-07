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
        float y = (sin(x) * sin(x)) / x;
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
        float y = (sin(x) * sin(x)) / x;
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
        float y = (sin(x) * sin(x)) / x;
        printTableRow(x, y);
        x += step;
    } while (x < b);
    printTableEnd();
}

int main()
{
    setlocale(LC_ALL, "rus");
    float a, b, count;
    cout << "������� ���������� x1 : ";
    cin >> a;
    cout << "������� ���������� x2 : ";
    cin >> b;
    cout << "������� ����� ����� : ";
    cin >> count;
    getTableFor(a, b, count);
    getTableWhile(a, b, count);
    getTableDoWhile(a, b, count);
    return 0;
}