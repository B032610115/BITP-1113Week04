/*
*BEGIN
*	READ hour (0-23)
*	IF hour >= 23 OR hour < 6 THEN
*		DISPLAY "Late entry: sign the log book."
*		DISPLAY "Show your matric card"
*	ELSE
*		DISPLAY "Welcome back."
*	ENDIF
*	DISPLAY "Good night."
*END
* 
*/

#include <iostream>
using namespace std;

int main() {
	int hour;
	cout << "Enter the hour (0-23): ";
	cin >> hour;
	if (hour >= 23 || hour < 6) {
		cout << "Late entry: sign the log book." << endl;
		cout << "Show your matric card" << endl;
	}
	else {
		cout << "Welcome back." << endl;
	}
	cout << "Good night." << endl;
	return 0;
}

/*
*hour|Branch(Yes/No)|Output line
* 22 |		NO 		|	26-28
* 23 |		YES 	|	22-25
* 0  |		YES 	|	22-25
* 5  |		YES 	|	22-25
* 6  |		NO 		|	26-28
*/