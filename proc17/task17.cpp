// proc17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>;
using namespace std;
int RootCount(int a, int b, int c) {
    int n;
    if (a != 0) {
        if ((b * b - 4 * a * c) > 0) n = 2;
        else if ((b * b - 4 * a * c) == 0) n = 1;
        else n = 0;
        return n;
    }
    else {
        n = 1;
        return n;
    }
}
int main()
{
    double a, b, c,n;
    for (int i = 1; i <= 3; i++) {
        cout << "enter koeficient A: ";
        cin >> a;
        cout << "enter koeficient B: ";
        cin >> b;
        cout << "enter koeficient C: ";
        cin >> c;
        n = RootCount(a, b, c);
        cout << "equation " << a << "x" << "+" << b << "x"<<"+" << c << "=0" << " has " << n << " roots " << endl;
    }
    cin.get();
    cin.get();
    return 0;
}

