#include <iostream>
#include <cmath>
using namespace std;
double ploshad(double radius)
{
    double s = 3.14 * radius * radius;
    return s;
}
int ploshad(int a, int b, int c)
{
    int p = (a + b + c) / 2;
    int s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
int ploshad(int a, int b)
{
    int s = a * b;
    return s;
}
int ploshad(int a)
{
    int s = a * a;
    return s;
}
int main()
{
    double radius;
    char figure;
    int a, b, c, p;
    cout << "enter your task_-_-_\nT=triangle\nC=circle\nR=rectangle\nS=square"<< endl;
    cin >> figure;
    switch (figure)
    {
    case 't':
    case 'T':
        cout << "enter a-";
        cin >> a;
        cout << "enter b -";
        cin >> b;
        cout << "enter c-";
        cin >> c;
        cout << "Your Square is equal to : " << ploshad(a, b, c) << endl;
        break;
    case 'C':
    case 'c':
        cout << "enter your radius :";
        cin >> radius;
        cout << "your square is equal to :" << ploshad(radius) << endl;
        break;
    case 'R':
    case 'r':
        cout << "enter a:";
        cin >> a;
        cout << "enter b -";
        cin >> b;
        cout << "your area is equal to :" << ploshad(a, b) << endl;
        break;
    case 'S':
    case 's':
        cout << "enter a:";
        cin >> a;
        cout << "your area is equal to :"<< ploshad(a)<< endl;
        break;
    default :
        cout << "ERROR";

    }

    return 0;
}