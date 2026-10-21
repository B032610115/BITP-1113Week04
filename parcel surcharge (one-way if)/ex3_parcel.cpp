/*
*BEGIN
*	SET BASE_FEE = 8.00
*	SET SURCHARGE = 5.00
*	SET weight, fee
*	READ weight
*	SET fee = BASE_FEE
*	IF weight > 2.0 THEN
*		SET fee += SURCHARGE
*		DISPLAY "Heavy parcel: RM5.00 surcharge added"
*	ENDIF
*	DISPLAY "Total fee: RM" + fee
* END
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const double BASE_FEE = 8.00;
	const double SURCHARGE = 5.00;
	double weight, fee;

	cout << "Weight of the parcel (kg): ";
	cin >> weight;

	fee = BASE_FEE;
	
	if (weight > 2.0) {
		fee += SURCHARGE;
		cout << "Heavy parcel: RM5.00 surcharge added" << endl;
	}
	
	cout << fixed << setprecision(2);
	cout << "Total fee: RM" << fee << endl;
	
	return 0;
}

// 1. Total fee: RM8.00
// 2. Total fee: RM8.00
// 3. Heavy parcel: RM5.00 surcharge added
//    Total fee : RM13.00
// 4. Heavy parcel: RM5.00 surcharge added
//    Total fee : RM13.00