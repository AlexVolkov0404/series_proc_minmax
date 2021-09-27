// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void DigitCountSum(int n) {
    int a;
   int  k = 0;
  int   s = 0;
    while (n != 0) {
        a = n;
        s = s + a % 10;
        n = n / 10;
        a = (a % 10) / 10;
        n = n - a;
        k = k + 1;

    }
    cout << "amount of numbers: " << k << endl;
    cout << "sum of numbers: " << s << endl;
    

}

int main()
{
    int n;
    cout << "enter your number: ";
    cin >> n;
    
    DigitCountSum(n);
    
    return 0;
}



