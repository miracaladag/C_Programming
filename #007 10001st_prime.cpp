#include <stdio.h>
#include <math.h>
int isprime(int number){
	int result = 1, i;
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
	int input, j, k;
	while(1){
	printf("Please write down a number\n");
	scanf("%d", &input);
	if(input == -1) break;
	for (j = 0, k = 1; j <= input; k++){
		if(isprime(k))
			j++;
		else continue;
	}
	printf("The result is: %d\n", --k);
}
	return 0;
}
