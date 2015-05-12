#define NULL 0
#include <string.h>
#include <stdio.h>

typedef enum { false, true } bool;

bool IsUnique(char* input) {
	
    if(NULL == input) {
    	return true;
    }
    
    int length = strlen(input);
    
    if(length < 2) {
    	return true;
    }
    
    // no need to check the last character
    for(int index = 0; index < length - 1; index++) {
    	for(int offset = index + 1; offset < length; offset++) {
    		
    		printf("%c = %c\r\n", input[index], input[offset]);
    		
    		if(input[index] == input[offset]) {
                return false;
            }
    	}
    }
    
    return true;
}

int main() {
	char test1[] = "foo";
	char test2[] = "nonunique";
	char test3[] = "uniform";
	
	bool result;
	
	result = IsUnique(test1);
	printf("%s = %d\r\n", test1, result);
	
	result = IsUnique(test2);
	printf("%s = %d\r\n", test2, result);

	result = IsUnique(test3);
	printf("%s = %d\r\n", test3, result);
}