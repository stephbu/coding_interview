#define NULL 0
#include <string.h>
#include <stdio.h>

typedef enum { false, true } bool;

void Reverse(char* input) {
	
    if(NULL == input) {
    	return;
    }
    
    int length = strlen(input);
    
    // rounding errors are ok here
    // middle letter in "odd" lengths are not moved
    int halfLength = length / 2;

    if(halfLength < 1) {
    	return;
    }
    
    // no need to check the last character
    for(int index = 0; index < halfLength; index++) {
        char tmp = input[index];
        input[index] = input[length - 1 - index];
        input[length - 1 - index] = tmp;
    }
}

int main() {
	char test1[] = "foo";
	char test2[] = "nonunique";
	char test3[] = "uniform";
    char test4[] = "rotavator";
	
	Reverse(test1);
	printf("%s\r\n", test1);
	
	Reverse(test2);
	printf("%s\r\n", test2);

	Reverse(test3);
	printf("%s\r\n", test3);

	Reverse(test4);
	printf("%s\r\n", test4);
}