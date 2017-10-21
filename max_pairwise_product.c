#include <stdio.h>


int main()
{
	int input[10];
	int tmp;
	int x = 0;
	int i = 0;
	int big_a = 0;
	int big_b = 0;
	int sum = 0;

	//take user input until we're done; enter x to finish
	while(scanf("%d", &tmp)) {

	
	if(tmp == 'x') 
		break;
	
	//store each number in our numbers array
	input[x] = tmp;
	x++;

	}

	//lets loop through our stored numbers and keep track of the two biggest numbers
	for(i=0;i < x; i++) {

		tmp = input[i];

		if(tmp > big_a && big_b)
			if(big_a > big_b) {
				big_b = big_a;
				big_a = tmp;

			} else big_a = tmp;

		else

			if(tmp > big_b)
				big_b = tmp;
		
	}

	sum = big_a * big_b;
	
	//printf("A: %d\n", big_a);
	//printf("B: %d\n", big_b);
	printf("Sum: %d\n", sum);

	return 0;
}