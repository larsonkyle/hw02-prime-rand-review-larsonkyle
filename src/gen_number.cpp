#include "gen_number.h"

int generateNum() {
	int num;
	// std::srand((unsigned) std::time(0));
	num = (rand() % 100) + 10;
	return num;
}

int doubleNum(int num) {
	return num * 2;
}

int reverseDigit(int num) {
	int reverseDigit = 0;
	int lastDigit = 0;

	while (num != 0) {
		lastDigit = num % 10;
		reverseDigit = reverseDigit * 10 + lastDigit;
		num = num / 10;
	}

	return reverseDigit;
}

int sumDigits(int num) {
	int num2 = num;
	int sumDigit = 0;
	int lastDigit;

	while(num2 != 0) {
		lastDigit = num2 % 10;
		sumDigit += lastDigit;
		num2 /= 10;
	}
	return sumDigit;
}

int raisePow2_3_4(int num, int exp) {
	return pow(num, exp);
}

int raiseFirstDigitPowSecondDigit (int num) {
	int secondDigit;

	if (num > 9 && num < 99) {
		secondDigit = num % 10;
		num /= 10;
		num = pow(num, secondDigit);
	}
	return num;
}

int raiseFirstAndSecondDigitPowThirdDigit(int num) {
	int lastDigit;
	
	if (num > 99 && num < 999) {
		lastDigit = num % 10;
		if (lastDigit <= 4) {
			num /= 10;
			num = pow(num, lastDigit);
		}
	}
	return num;
}
