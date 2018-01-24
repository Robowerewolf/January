#include <iostream>
#include<time.h>

namespace Senate {
	int rand() {
		return 5;
	}

}

int main() {
	srand(time(NULL));
	int randNum;
	int fakeRandNum;
	randNum = rand();
	fakeRandNum = Senate::rand();

	std::cout << randNum << " , " << fakeRandNum << std::endl;


}