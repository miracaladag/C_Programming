#include <stdio.h>
#include <math.h>
int isprime(int number){
	int result = 1, i;
	if(number == 1)
		result = 0;

	for (i = 2;i <= sqrt(number);i++){
		
		if(number % i == 0){
			result = 0;
			break;
		}
		else{
			continue;
		}
	}
	return result;
	
}
int main(){
	int input, i, result = 0;
	scanf(" %d", &input);
	for (i = 1; i <= input; i++){
		if(isprime(i)) result += i;
		else continue;
	}
	printf("Summation of prime numbers below %d is: %d\n", input, result);
	return 0;
}
