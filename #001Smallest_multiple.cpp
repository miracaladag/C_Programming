#include <stdio.h>
#include <math.h>
int main(){
	int result = 1;
	while(1){
		if(result % 2 == 0 && 
		result % 4 == 0 && 
		result % 5 == 0 &&
		result % 6 == 0 &&
		result % 7 == 0 &&
		result % 8 == 0 &&
		result % 9 == 0 &&
		result % 10 == 0 &&
		result % 11 == 0 &&
		result % 12 == 0 &&
		result % 13 == 0 &&
		result % 14 == 0 &&
		result % 15 == 0 &&
		result % 16 == 0 &&
		result % 17 == 0 &&
		result % 18 == 0 &&
		result % 19 == 0 &&
		result % 20 == 0)
		break;
		else result++;
	}
	printf("The result is: %d", result);
	return 0;
}
