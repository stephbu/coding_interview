#define NULL 0
#include <string.h>
#include <stdio.h>

typedef enum { false, true } bool;

bool IsPermutation(char* src, char* test) {
	
    if(NULL == src || NULL == test) {
    	return false;
    }

    int srcLength = strlen(src);
    int testLength = strlen(test);

    if(srcLength != testLength) {
        return false;
    }
    
    int map[256];
    for(int index = 0; index < 256; index++) {
        map[index] = 0;
    }
    
    // set the map
    for(int index = 0; index < srcLength; index++) {
        map[src[index]]++;
    }
    
    // test against map
    for(int index = 0; index < testLength; index++) {
        if(--map[test[index]] < 0) {
            return false;
        }
    }

    return true;    
}

int main() {
	char test1[] = "foo";
	char test2[] = "fof";
	char test3[] = "sets";
    char test4[] = "tess";
	char test5[] = "bad";
    char test6[] = "length";
	
    bool result;
    
	result = IsPermutation(test1,test2);
    if(result == true) {
    	printf("%s is permutation of %s\r\n", test1, test2);    
    }
    else {
    	printf("%s is not permutation of %s\r\n", test1, test2);    
    }
    
	result = IsPermutation(test3,test4);
    if(result == true) {
    	printf("%s is permutation of %s\r\n", test3, test4);    
    }
    else {
    	printf("%s is not permutation of %s\r\n", test3, test4);    
    }
    
	result = IsPermutation(test5,test6);
    if(result == true) {
    	printf("%s is permutation of %s\r\n", test5, test6);    
    }
    else {
    	printf("%s is not permutation of %s\r\n", test5, test6);    
    }
}