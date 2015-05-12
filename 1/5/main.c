#define NULL 0
#include <string.h>
#include <stdio.h>

typedef enum { false, true } bool;

char* RunLengthEncode(char* input) {
	
    if(NULL == input) {
    	return false;
    }
}

int main() {
	char test1[] = "foo bar  ";
	char test2[] = "Mr John Smith    ";
	
	SpaceEncode(test1, 7);
	printf("%s\r\n", test1);
	
    SpaceEncode(test2, 13);
	printf("%s\r\n", test2);
}