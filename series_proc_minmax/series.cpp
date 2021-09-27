// series_proc_minmax.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//task8
void find_order_amount()
{
    int i, n, k, num = 0;
    cout <<"N:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "i" << i << "-";
        cin >> k;
        if (k % 2 == 0) {
            cout << k << endl;
            num++;
        }
    }
    cout << "Amount: " << num;
    cin.get();
    cin.get();
}  
//task18
void find_different_elements() {
    int i, n, b, a, num = 0;
    cout << "N:";
    cin >> n;
    cout << "i1" << "-";
    cin >> a;
    
    for (i = 2; i <= n; i++) {
        cout << "i" << i << "-";
        cin >> b;
        if (b > a) {
            cout << b<<endl;
        }
            a = b;

        }
       
        }
//task26
void find_stepen() {
    int i, n, k,b,p, m;
    cout << "N:";
    cin >> n;
    cout << "K:";
    cin >> k;
   
    
   

    for (i = 1; i <= n; i++)
    {
        cout << "i" << i << "-";
        cin >> b;
        p = b;
        for (int f =2 ; f <= k; f++) {
            p = p * b;
            
      }
        cout << p << endl;
        
    }
}
//task33
void find_number_of_two() {
    int i, j, k, n,p, b;
    cout << "N: ";
    cin >> n;
    cout << "K: ";
    cin >> k;
    for (j = 1; j <= k;j++) {
        cout << "enter elem of " << j <<" grup" << "-" << endl;
        p = 0;
        for (i = 1; i <= n; i++) {
            cout << "i" << i << "-";
            cin >> b;
            if (b == 2) p = i;
        }
        cout <<"number of 2: " << p << endl;
    }

}
//task37
void find_ups_downs() {
    int k, m=0, a, b, c,i, p, l;
    cout << "amount of grups:";
    cin >> k;
    for (i = 1; i <= k; i++) {
        l = 0;
        p = 0;
        cout << "enter first element: ";
        cin >> a;
        cout << "enter second element: ";
        cin >> b;
        cout << "enter next element: ";
        cin >> c;
        while (c != 0) {
            if (c <= b) l = 1;
            else if (c >= b) p = 1;
            b = c;
            cout << "enter next element: ";
            cin >> c;
        }
        if (l == 0 || p == 0) m = m + 1;

    }
    cout << "amount of ups and downs: " << m;
 }
    
    


int main()
{
   find_order_amount();
   find_different_elements();  
   find_stepen(); 
   find_number_of_two();
   find_ups_downs();
    return 0;
}

  