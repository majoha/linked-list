#include <iostream>
#include <time.h>

#include "linkedList.h"

class linkedList;

using namespace std;

int returnNewSeed(){

	time_t timeS;
	time(&timeS);
	int seed;

	seed = difftime(timeS, 2015);

	return seed;
}

int main(){

	linkedList linkedList;

	for(int i = 0; i < 5; i++){

		cout << i << "\n";
		linkedList.createNode(rand() % returnNewSeed());

	}

	linkedList.displayPrev();


	system("Pause");

	return 0;

}