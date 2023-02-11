#include "gen_number.h"
#include "print_menu.h"
#include "post_process.h"

int main() {
	int num;
	int choice;
	int exp;

	num = generateNum();
	std::cout << "The two digit number is: " << num << std::endl;

	do {
	print_menu();
	std::cin >> choice;

	if (choice == 1) {
			num = doubleNum(num);
	} else if (choice == 2) {
			num = reverseDigit(num);
	} else if (choice == 3) {
			std::cout << "Enter power (2, 3, or 4):" << std::endl;
			std::cin >> exp;
			num = raisePow2_3_4(num, exp);
	} else if (choice == 4) {
			num = sumDigits(num);
	}	else if (choice == 5) {
			num = raiseFirstDigitPowSecondDigit(num);
	} else if (choice == 6) {
			num = raiseFirstAndSecondDigitPowThirdDigit(num);
	}

	if (choice >= 1 && choice <= 6) {
			num = addTen(num);

			if (isNumPrime(num)) {
				std::cout << num << " is prime." << std::endl;
			}
			else {
				std::cout << num << " is not prime." << std::endl;
			}
	}
	}while (choice != 9);

	std::cout << "Program is Terminating..." << std::endl;
	return 0;
}
