// proc12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void  SortIns3(int* pa, int* pb, int* pc) {
    int x;
    if (*pb < *pa &&  *pb < *pc) {
        x = *pa;
        *pa = *pb;
        *pb = x;
   }
    if (*pc < *pa && *pc < *pb) {
        x = *pa;
        *pa = *pc;
        *pc = x;
    }
    if (*pc < *pb) {
        x = *pb;
        *pb = *pc;
        *pc = x;
    }
}
int main()
{
    int A, B, C;    
    for (int i = 1; i < 3; i++) {
        cout << "enter A: ";
        cin >> A;
        cout << "enter B: ";
        cin >> B;
        cout << "enter C: ";
        cin >> C;
        int* pa = &A;
        int* pb = &B;
        int* pc = &C;
        SortIns3(&A, &B, &C);
        cout << " A: " << *pa << " B: " << *pb << " C: " << *pc<<endl;
        

    }
    cin.get();
    cin.get();
    return 0;
}

