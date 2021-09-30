// proc21.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int SumRange(int a, int b) {
    if (b > a) {
        int s = 0;
        for (int i = a; i <= b; i++) {
            s = s + i;
        }
        return s;
    }
    else {
        return 0;
    }
}
int main()
{
    int a, b,res;
    cout << "enter A: ";
    cin >> a;
    cout << "enter B: ";
    cin >> b;
    res = SumRange(a, b);
    cout << "your sum: " << res; 
}

