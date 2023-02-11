#include "post_process.h"

bool isNumPrime(int num) {
	bool isPrime = true;

	if (num <= 1) {
		isPrime = false;
	}

	for (int i = 2; i < num && isPrime == true; i++) {
		if (num % i == 0) {
			isPrime = false;
		}
	}
	return isPrime;
}

int addTen(int num) {
	return num + 10;
}
