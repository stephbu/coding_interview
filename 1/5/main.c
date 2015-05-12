#define NULL 0
#include <string.h>
#include <stdio.h>

typedef enum { false, true } bool;

bool SpaceEncode(char* input, int unencodedLength) {
	
    if(NULL == input || unencodedLength == 0) {
    	return false;
    }
    
    int absLength = strlen(input);
    
    int destIndex = absLength - 1;
    int copyIndex = unencodedLength - 1;
    
    // work backwards from back of buffer moving characters as you go
    while(destIndex >= 0) {
        if(input[copyIndex] != ' ') {
            input[destIndex--] = input[copyIndex--];
        } 
        else {
            input[destIndex--] = '0';
            input[destIndex--] = '2';
            input[destIndex--] = '%';
            copyIndex--;
        }
    }
    
    return true;
}

int main() {
	char test1[] = "foo bar  ";
	char test2[] = "Mr John Smith    ";
	
	SpaceEncode(test1, 7);
	printf("%s\r\n", test1);
	
    SpaceEncode(test2, 13);
	printf("%s\r\n", test2);
}