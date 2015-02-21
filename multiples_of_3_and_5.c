#include <stdio.h>

int main(){
	int sum;
	for(int i = 0; i < 1000; i++){
		if((i % 5 == 0) || (i % 3 == 0)){
			sum += i;
		}
	}
	printf("Sum of all multiples of 3 or 5 below 1000: %d\n",sum);
}