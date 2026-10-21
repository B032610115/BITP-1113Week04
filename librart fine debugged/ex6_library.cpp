#include <iostream>
using namespace std;

int main() {
    int daysLate;
	double fine = 0; // Bug: The fine variable should be initialized to 0 to avoid undefined behavior.

    cout << "Days late: ";
    cin >> daysLate;

	if (daysLate > 0) // Bug: The semicolon ends the if statement prematurely, causing the fine calculation to always execute.
        fine = daysLate * 0.50;

	if (daysLate == 0) // Bug: It should be '==' for comparison, not '=' for assignment.
        cout << "Returned on time. No fine." << endl;

    if (daysLate >= 14) {// Bug: Logical condition error, rule requires 14 days or more.
        cout << "Membership suspended." << endl;
        cout << "Contact the library counter." << endl; // Bug: This line should be inside the if block to only execute when daysLate > 14.
    }

    cout << "Fine: RM" << fine << endl;
	return 0;
}

/*
*Days Late|Expeacted Output            |Actual (buggy)
*    0    |Returned on time. No fine.  |Contact the library counter. Fine: RM0
*         |Fine: RM0                   |
*    1    |Fine: RM0.50                |Contact the library counter. Fine: RM0.50
*   13    |Fine: RM6.50                |Contact the library counter. Fine: RM6.50
*   14    |Membership suspended.       |Contact the library counter.
*         |Contact the library counter.|Fine: RM7.00
*         |Fine: RM7.00                |
*   15    |Membership suspended.       |Contact the library counter.
*         |Contact the library counter.|Fine: RM7.50
*         |Fine: RM7.50                |
*/