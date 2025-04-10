#include <stdio.h>

void start() {}
void pause() {}

void function_one(int input) {
	int function_one_local = input;

	printf("Inside function_one: function_one_local = %d\n", function_one_local);
    
	pause();
}
    
int main(void) {

	int first = 357;
        int second = 0;
    
        start();
        function_one(first);
   
        printf("In main: second = %d\n", second);
    
        return 0;
}
