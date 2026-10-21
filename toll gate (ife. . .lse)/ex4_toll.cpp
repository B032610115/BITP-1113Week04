/*
*BEGIN
*	SET cardBalance and tollFee
*	READ cardBalance and tollFee
*	IF cardBalance >= tollFee THEN
*		DISPLAY "Gate open"
*		DIAPLAY "Balance after toll: RM" + (cardBalance - tollFee)
*	ELSE
*		DISPLAY "Insufficient balance. Please reload."
*		DIAPLAY "The shortfall: RM" + (tollFee - cardBalance)
*	ENDIF
* END
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	double cardBalance, tollFee;
	cout << "Enter card balance (RM) and toll fee (RM): ";
	cin >> cardBalance >> tollFee;
	cout << fixed << setprecision(2);

	if (cardBalance >= tollFee) {
		cout << "Gate open" << endl;
		cout << "Balance after toll: RM" << cardBalance - tollFee << endl;
	}
	else {
		cout << "Insufficient balance. Please reload." << endl;
		cout << "The shortfall: RM" << tollFee - cardBalance << endl;
	}

	return 0;
}

/*
* 1. Gate open
	 Balance after toll: RM4.70
* 2. Gate open
	 Balance after toll: RM0.00
* 3. Insufficient balance. Please reload.
	 The shortfall: RM0.01
* 4. Insufficient balance. Please reload.
	 The shortfall: RM2.10
*/