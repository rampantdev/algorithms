// This is my solution to a problem posted at https://leetcode.com/problems/array-partition-i/description/ 


int arrayPairSum(int* nums, int numsSize) 
{
	int reduced[numsSize / 2];
	int i = 0;
	int x = 0;
	int sum = 0;
	int tmp = 0;;
	int tmp2 = 0;
	int big_a = 0;
	int big_b = 0;

	//step through the code in increments of two since we are reading [i] and [i+1] in each iteration
	//store the highest of the two values into reduced array
	for(i = 0; i <= numsSize -1; i+=2) {
		tmp = nums[i];
		tmp2 = nums[i+1];

		if(tmp < tmp2) {
			reduced[x] = tmp;
			x++;
		}else{
			if(tmp2 < tmp){
			reduced[x] = tmp2;
			x++;
			}
		}
	}
		
		
	for(i = 0; i < numsSize / 2; i++) {
		
		tmp = reduced[i];

		if(tmp > big_a && big_b)
			if(big_a > big_b) {
				big_b = big_a;
				big_a = tmp;

			} else big_a = tmp;

		else

			if(tmp > big_b)
				big_b = tmp;
		
	}

	sum = big_a + big_b;

	printf("THIS IS THE RESULT: %d\n", sum);

	
	return 0;

}

int main()
{

int n = 0;
printf("How many numbers will you enter? Range should be in 1-10000 and should be an even number\n");
scanf("%d", &n);

if(n < 0 | n > 10000) {
	printf("FAIL NUM OUT OF RANGE\n");

	return 1;
}

printf("Integers must be between -10000 and 10000\n");

int array[n];	
int i = 0;

for(i = 0; i < n; i++) {
	scanf("%d", &array[i]);
	if(array[i] < -10000 | array[i] > 10000) {
		printf("FAIL NUM OUT OF RANGE\n");
		return 1;	
		}
	}

	arrayPairSum(array, n);

	return 0;
}