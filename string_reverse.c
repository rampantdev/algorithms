#include <stdio.h>

char final_string[50];
int x = 0;

char* reverseString(char* s) 
{
	
	final_string[x] = s;
	x++;

	return s;    
}

int main()
{
	char string[50];
	char tmp;
	scanf("%s" , string);
	int len = strlen(string);
	int i = 0;

	for(i = len-1; i >= 0; i--) {
		tmp = string[i];
		reverseString(tmp);
	}

	printf("Reversed string: %s\n", final_string);
}	