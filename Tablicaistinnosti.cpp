#include <iostream>
using namespace std;

int main() {
	cout << boolalpha;

	cout << "Operator: ||" << endl;
	cout << "true " << ' ' << "true " << ' ' << "true " << endl;
	cout << "false " << "true " << ' ' << "true " << endl;
	cout << "true " << " false " << "true" << endl;
	cout << "false " << "false " << "false" << endl;

	cout << "\nOperator: &&" << endl;
		cout << "true " << " true" << " true" << endl;
		cout << "false " << "true " << " false" << endl;
		cout << "true " << " false " << "false" << endl;
		cout << "false " << "false" << " false" << endl;



	return EXIT_SUCCESS;


}