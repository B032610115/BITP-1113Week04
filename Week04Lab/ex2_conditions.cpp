// 1) 1,1,0,1,1
//    1,1,0,1,1
// 2) 1,0,1,1,1
//    1,0,1,1,1
// 3) 0,0,1,1,1
//    0,0,1,1,1
// 4) 0,0,0,0,1
//    0,0,0,0,1
// 5) 1,0,1,0,1
//    1,0,1,0,1

#include <iostream>
using namespace std;

int main() {
	int battery;
	int charging;
	cout << "Battery level (0-100): ";
	cin >> battery;
	cout << "Is the phone charging? (1 for yes, 0 for no): ";
	cin >> charging;

	cout << "condition 1: " << (battery < 20) << endl;
	cout << "condition 2: " << (battery < 20 && !charging) << endl;
	cout << "condition 3: " << (battery == 100 || charging) << endl;
	cout << "condition 4: " << (battery >= 0 && battery <= 100) << endl;
	// The condition (0 <= battery <= 100) is not valid in C++.
	// It will always evaluate to true because it is interpreted as (0 <= battery) <= 100.
	cout << "condition 5: " << (0 <= battery <= 100) << endl;

	return 0;
}