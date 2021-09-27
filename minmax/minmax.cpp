// minmax.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//task4
void find_min() {
    int i, n, k, b;
    cout << "N:";
    cin >> n;
    cout << "i1" << "-";
    cin >> b;
    int m = b;
    for (i = 2; i <= n; i++)
    {
        cout << "i" << i << "-";
        cin >> k;
        if (b > k) b = k;
        if (m < k) m = k;
    }
    cout << "min: " << b << endl;
    cin.get();
    cin.get();
}
//task6
void find_number_of_extremal() {
    int i, n, k, t,b,x=1,y=1;
    cout << "N:";
    cin >> n;
    cout << "i1" << "-";
    cin >> b;
    int m = b;
     t = b;
    for (i = 2; i <= n; i++)
    {
        cout << "i" << i << "-";
        cin >> k;
        if (t> k) {
            m = k;
            x++;
        }
        if (m < k) {
            m = k;
           y++;
        }
    }
    cout << "nummin: " << x << endl;
    cout << "nummax: " << y;
}
//task10
void find_extremal() {
    int i, n, k, b;
    cout << "N:";
    cin >> n;
    cout << "i1"  << "-";
    cin >> b;
    int m = b;
    for (i = 2; i <= n; i++)
    {
        cout << "i" << i << "-";
        cin >> k;
        if (b > k) b = k;  
        if (m < k) m = k;
    }
    cout << "min: " << b<<endl;
    cout << "max: " << m;
}
//task22
void find_mins() {
    int a,i, b, min1, min2,n;
    cout << "N:";
    cin >> n;
    cout << "i1" << "-";
    cin >> a;
    cout << "i2" << "-";
    cin >> b;
    if (a < b) {
        min1 = a;
        min2 = b;
    }
    else {
        min1 = b;
        min2 = a;
    }
    for (i = 3; i <= n; i++) { 
        cout << "i" << i << "-";
        cin >> a;
        if (a < min1) min1 = a;
        else if (a < min2) min2 = a;
    }
    cout << "min1: " << min1 << " " << "min2: " << min2;
    cin.get();
    cin.get();
}
//task24
void find_max_sum() {
    int a, i, b, s, n;
    cout << "N:";
    cin >> n;
    cout << "i1" << "-";
    cin >> a;
    cout << "i2" << "-";
    cin >> b;
    s = a + b;
    for (i = 3; i <= n; i++) {
        cout << "i" << i << "-";
        cin >> a;
        if ((a + b) > s) s = a + b;
        b = a;
    }
    cout << "maxsum: " << s;

}
int main()
{
    find_extremal();
    find_mins();
    find_min();
    find_number_of_extremal();
    find_max_sum();
    return 0;
}

