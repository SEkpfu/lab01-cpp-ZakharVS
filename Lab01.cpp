//2 номер.
//#include<iostream>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	double a, b,sum,raz,pr;
//	cout << "ВВедите любые число. \n";
//	cout << "a = ";
//	cin >> a;
//	cout << "b = ";
//	cin >> b;
//	sum = a + b;
//	raz = a - b;
//	pr = a * b;
//	cout << "Cумма равна:" << sum << endl;
//	cout << "Разность равна:" << raz << endl;
//	cout << "Произведение равно:" << pr;
//	return 0;
//}	

//3 Номер
//#include<iostream>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	double tC, tF, tK;
//	cout << "Введите температуру на улице в цельсия:\n";
//	cin >> tC;
//	tF = tC * 9.0 / 5.0 + 32;
//	tK = tC + 273;
//	cout << "Цельсия:" << tC << endl;
//	cout << "Фаренгейт:" << tF << endl;
//	cout << "Кельвин:" << tK << endl;
//	return 0;
//
//
//
//}

//4 номер. 

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	double R, V;
//	const double PI = 3.141592653589793238463;
//	cout << "Введите значение радиуса: ";
//	cin >> R;
//	V = 4.0 / 3.0 * PI * pow(R, 3);
//	cout << "Объем равен:" << V;
//
//	return 0;
//}

// 6 номер.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	double Rad, H, V, S;
//	cout << "Радиус цилиндра:";
//	cin >> Rad;
//	cout << "Высота цилиндра:";
//	cin >> H;
//	S = (2.0 * M_PI * Rad * H) + (2 * M_PI * pow(Rad, 2));
//	V = M_PI * pow(Rad, 2) * H;
//	cout << "Площадь равна " << S << " " << "Объем равен " << V;
//	return 0;
//7 номер.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int X, Y,sum2;
//	cout << "Введите значение X:";
//	cin >> X;
//	cout << "Введите значение Y:";
//	cin >> Y;
//	sum2 = (X % 10) + (Y % 10);
//	cout << "Сумма их последних цифр: " << sum2;
//	return 0;
//}
// 8 НОМЕР.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int CH, per, posl;
//	cout << "Введите число:";
//	cin >> CH;
//	per = CH / 1000;
//	posl = CH % 10;
//	cout << "Первая цифра: " << per << " " << "Последняя цифра: " << posl;
//	return 0;
//}
// 9 номер.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int n, ch, mn, s;
//	cout << "Сколько секунд прошло сначала суток? ";
//	cin >> n;
//	ch = n / 3600;
//	mn = (n % 3600)/60;
//	s = n % 60;
//	cout << "часов: " << ch << " " << "минут: " << mn << " " << " Секунд: " << s;
//	return 0;
//
//
//}
// 10 НОМЕР.
//#define _USE_MATH_DEFINES
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int A, B, C, V ,S;
//	cout << "Введите длину первого ребра: ";
//	cin >> A;
//	cout << "Введите длину второго ребра: ";
//	cin >> B;
//	cout << "Введите длину третьего ребра: ";
//	cin >> C;
//	V = A * B * C;
//	S = 2 * (A * B + B * C + A * C);
//	cout << "Объем равен: " << V << " " << " Площадь равна: " << S;
//	return 0;
//}

