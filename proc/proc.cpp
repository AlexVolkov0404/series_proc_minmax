// proc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//task6
int DigitCount(int n ) {
    int a;
    int  k=0;
   
    while (n != 0) {
        a = n;
       
        n = n / 10;
        a = (a % 10) / 10;
        n = n - a;
        k = k + 1;
        
    }
    return k;
    
  
}
int DigitSum(int n) {
    int a;
    int  s = 0;
   
    while (n != 0) {
       a = n;
       s = s + a % 10;
       n = n / 10;
       a = (a % 10) / 10;
       n = n - a;
     

    }
    return s;
}
int main()
{
    int n;
    cout << "enter your number: ";
    cin >> n;
  int res1= DigitCount(n);
  int res2 = DigitSum(n);
    cout << "amount of numbers: " << res1<< endl;
    cout << "sum of numbers: " << res2 << endl;
    return 0;
}

