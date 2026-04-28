#include <iostream>
using namespace std;

int main() {
	cout << boolalpha;

	bool t = true, f = false;
	cout << "Operator ||" << endl;

	cout << t << ' ' << t  << ' ' << (t || t) << endl;
	cout << f << ' ' << t << ' ' << (t || f) << endl;
	cout << t << ' ' << f << ' ' << (t || t) << endl;
	cout << f << ' ' << f << ' ' << (f || f) << endl;
	cout << endl;

	cout << "Operator &&" << endl;

	cout << t << ' ' << t << ' ' << (t && t) << endl;
	cout << f << ' ' << t << ' ' << (f && t) << endl;
	cout << t << ' ' << f << ' ' << (t && f) << endl;
	cout << f << ' ' << f << ' ' << (f && f) << endl;

		return 0;
}