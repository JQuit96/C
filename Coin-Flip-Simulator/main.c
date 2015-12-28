/*
/ Coin Flip Simulator v1.0.0
/ Author: Julian D. Quitian
/ Date: 12/27/2015
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	int heads = 0, tails = 0, loops;
	srand(time(NULL));

	//Welcome Screen & User Input
	printf("%s\n", "Welcome!\nPlease enter number of times you'd like the coin to be flipped: ");
	scanf("%d", &loops);

	//Randomize & count heads, tails
	for(int i = 0; i < loops; i++){
		num = (rand() % 2) + 1;
		if(num == 1)
			heads++;
		if(num == 2)
			tails++;
	}

	//Print results
	printf("Heads: %d times\nTails: %d times\n", heads, tails);
	return 1;
}