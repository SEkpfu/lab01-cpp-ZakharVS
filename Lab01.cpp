//2 �����.
//#include<iostream>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	double a, b,sum,raz,pr;
//	cout << "������� ����� �����. \n";
//	cout << "a = ";
//	cin >> a;
//	cout << "b = ";
//	cin >> b;
//	sum = a + b;
//	raz = a - b;
//	pr = a * b;
//	cout << "C���� �����:" << sum << endl;
//	cout << "�������� �����:" << raz << endl;
//	cout << "������������ �����:" << pr;
//	return 0;
//}	

//3 �����
//#include<iostream>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	double tC, tF, tK;
//	cout << "������� ����������� �� ����� � �������:\n";
//	cin >> tC;
//	tF = tC * 9.0 / 5.0 + 32;
//	tK = tC + 273;
//	cout << "�������:" << tC << endl;
//	cout << "���������:" << tF << endl;
//	cout << "�������:" << tK << endl;
//	return 0;
//
//
//
//}

//4 �����. 

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	double R, V;
//	const double PI = 3.141592653589793238463;
//	cout << "������� �������� �������: ";
//	cin >> R;
//	V = 4.0 / 3.0 * PI * pow(R, 3);
//	cout << "����� �����:" << V;
//
//	return 0;
//}

// 6 �����.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	double Rad, H, V, S;
//	cout << "������ ��������:";
//	cin >> Rad;
//	cout << "������ ��������:";
//	cin >> H;
//	S = (2.0 * M_PI * Rad * H) + (2 * M_PI * pow(Rad, 2));
//	V = M_PI * pow(Rad, 2) * H;
//	cout << "������� ����� " << S << " " << "����� ����� " << V;
//	return 0;
//7 �����.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int X, Y,sum2;
//	cout << "������� �������� X:";
//	cin >> X;
//	cout << "������� �������� Y:";
//	cin >> Y;
//	sum2 = (X % 10) + (Y % 10);
//	cout << "����� �� ��������� ����: " << sum2;
//	return 0;
//}
// 8 �����.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int CH, per, posl;
//	cout << "������� �����:";
//	cin >> CH;
//	per = CH / 1000;
//	posl = CH % 10;
//	cout << "������ �����: " << per << " " << "��������� �����: " << posl;
//	return 0;
//}
// 9 �����.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int n, ch, mn, s;
//	cout << "������� ������ ������ ������� �����? ";
//	cin >> n;
//	ch = n / 3600;
//	mn = (n % 3600)/60;
//	s = n % 60;
//	cout << "�����: " << ch << " " << "�����: " << mn << " " << " ������: " << s;
//	return 0;
//
//
//}
// 10 �����.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int A, B, C, V ,S;
//	cout << "������� ����� ������� �����: ";
//	cin >> A;
//	cout << "������� ����� ������� �����: ";
//	cin >> B;
//	cout << "������� ����� �������� �����: ";
//	cin >> C;
//	V = A * B * C;
//	S = 2 * (A * B + B * C + A * C);
//	cout << "����� �����: " << V << " " << " ������� �����: " << S;
//	return 0;
//}

