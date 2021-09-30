// proc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//task6
void DigitCountSum(int*pn,int*ps,int*pk ) {
    int a;
   
   
    while (*pn != 0) {
        a = *pn;
       *ps = *ps + a % 10;
        *pn = *pn / 10;
        a = (a % 10) / 10;
        *pn = *pn - a;
        *pk = *pk + 1;
        
    }
    /*cout << "amount of numbers: " << *pk << endl;
    cout << "sum of numbers: " << *ps << endl;*/
  
}

int main()
{
    int n;
    int k = 0;
    int s = 0;
    cout << "enter your number: ";
    cin >> n;
    int* pn = &n;
    int* ps = &s; 
    int* pk = &k;
    DigitCountSum(&n,&s,&k);
    cout << "amount of numbers: " << *pk << endl;
    cout << "sum of numbers: " << *ps << endl;
    cin.get();
    cin.get();
   
    return 0;
}

