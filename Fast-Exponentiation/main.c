/* 
* FastExponentiation v1.0.0
* @Author: Julian D. Quitian
* @Date:   2015-12-28 20:31:13
* @Last Modified by:   Julian D. Quitian
* @Last Modified time: 2015-12-28 21:55:55
*/

#include <stdio.h>
int getExponent(int x, int n);
int main(){
	int base = 0, power = 0;
	printf("%s\n", "Welcome to Fast Exponentiator!");
	printf("%s", "Enter base: ");
	scanf("%d", &base);
	printf("\n%s", "Enter power: ");
	scanf("%d", &power);
	printf("\n%d to the %dth power equals %d\n", base, power, getExponent(base,power));
    return 0;
}
///
/// Exponent method. Base = x; Power = n. Time Complexity = O(log(n)). Does not use recursion.
///
int getExponent(int x, int n){
	int y = 1;
	int z = 1;
	while(n != 0){
		if(n % 2 == 1){		//Important for final step (final bit)
			y = x * n;
		}
		n = n / 2;		//Remove last bit (left to right)
		x = x * x;		//Accumulated square base
		z++;
	}
	return y;
}