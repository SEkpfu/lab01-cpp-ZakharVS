 //1 �����.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	double S, V, R;
//	setlocale(0, "");
//	cout << "������� ������� ����������� ����:";
//	cin >> S;
//	R = pow((S / (4 * M_PI)), 0.5);
//	V = 4.0 / 3.0 * M_PI * pow(R, 3);
//	cout << "����� ���� �����:" << V;
//
//	return 0;
//}


// 2 �����.
//#include<iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int D;
//	double Sot, Des, Res;
//	cout << "������� ����� ����� ����� ������� 999:";
//	cin >> D;
//	Des = D%10;
//	Sot = (D / 10) % 10;
//	Res = ((D / 100) * 10 + Des) * 10 + Sot;
//	(D > 999) ? cout << "���������:" << Res : cout << "����� ������ 999";
//
//
//
//	return 0;
//}

//3 �����.
//#include<iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int A, B, C, pr;
//	cout << "������� ������ �����:";
//	cin >> A;
//	cout << "������� ������ �����:";
//	cin >> B;
//	cout << "������� ������ �����:";
//	cin >> C;
//	pr = A * C;
//	(pr > 100) ?  ((A>B && A>C)? cout << A : (B > C && B > A)? cout << B : (C > B && C > A) ? cout << C : cout << A ) : cout << A * A << " " << B * B << " " << C * C;
//	return 0;
//
//}

//4 �����.
//#include<iostream>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	double y, x, x2, x4, x5, x8, x13;
//	cout << "������� �������� x: ";
//	cin >> x;
//	x2 = x * x;
//	x4 = x2 * x2;
//	x8 = x4 * x4;
//	x5 = x * x4;
//	x13 = x5 * x8;
//	y = x13 - x5 + x2 - 2;
//	cout << "��������� y = " << y;
//	return 0;
//
//}
//5 �����.

//#include<iostream>
//#include<cmath>
//#include <iomanip>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	double x, y, vr1,vr2;
//	cout << "������� �������� x: ";
//	cin >> x;
//	cout << "������� �������� y: ";
//	cin >> y;
//	vr1 = log(fabs(cos(x))) / log(1 + pow(x, 2));
//	vr2 = 3 + exp(y - 1) / (1 + pow(x, 2) * fabs(y - tan(x)));
//	cout << "������ ��������� ����� = " << showpos <<fixed<< setprecision (5) << vr1 <<endl;
//	cout << "������ ��������� ����� = " << showpos  << scientific << vr2<<endl;
//	
//	return 0;
//}