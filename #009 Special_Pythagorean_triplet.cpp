#include <stdio.h>
#include <math.h>
int main(){
	double a, b, c, input;
	int var1 = 1;
	input = 1000;
		for (a = 1;a <= input && var1;a++){
			for (b = 1; (b <= input) && var1; b++){
				c = hypot(a, b);
				if((a + b + c) == input){
					var1 = 0;
					break;
				}
				else{
					continue;
				}
			}
		}
	a--;
	printf("a is: %.2f b is: %.2f c is: %.2f", a, b, c);
	return 0;
}
