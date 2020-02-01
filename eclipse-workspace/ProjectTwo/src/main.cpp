/*
 * Jeff Perkinson
 * CS-210-J3528
 * Feb 2020
 * Project Two Airgead Banking
 */

#include <iostream>

/*
 * A file that uses the class must include the .h file.  Its contents are
 * sufficient to allow compilation, as long as the corresponding .cpp file
 * is compiled into the program too.
 * (Programming Languages, ZyBooks, 7.8: Separate files for classes)
 */
#include "Investment.h"
#include "bankFunctions.h"

using namespace std;

int main() {

	double invest = inputNumberYears("Enter the number of years please: ");
	cout << "Years: " << invest << endl;

	return 0;
}


