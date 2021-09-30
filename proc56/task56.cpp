// proc56.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
double Leng( double xa, double ya, double xb, double yb) {
	double AB;
	AB = sqrt(pow(xa - xb, 2) + (ya - yb, 2));
	return AB;
}
int main()
{
	double  xa, ya, xb, yb, xc, yc, xd, yd,resAB,resAC,resAD;
	cout << "enter x  of A: ";
	cin >> xa ;
	cout << "enter y  of A: ";
	cin >> ya;
	cout << "enter x  of B: ";
	cin >> xb;
	cout << "enter y  of B: ";
	cin >> yb;
	cout << "enter x  of C: ";
	cin >> xc;
	cout << "enter y  of C: ";
	cin >> yc;
	cout << "enter x  of D: ";
	cin >> xd;
	cout << "enter y  of D: ";
	cin >> yd;
	resAB = Leng(xa, ya, xb, yb);
	resAC = Leng(xa, ya, xc, yc);
	resAD = Leng(xa, ya, xd, yd);
	cout << "AB= " << resAB<<endl;
	cout << "AC= " << resAC<<endl;
	cout << "AD= " << resAD<<endl;
}

