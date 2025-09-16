#include <stdio.h>
#include <math.h>

int main() {
	float  a, b, A,B; // At first we tried to use integers but to use pow() from math
		      // we went back and changed the type to float to still conserve memory but 
		      // still be compatible with out approach
	float distance;  // we take a normal float to conserve memory

	printf("Please input first coordinates seperated by space (eg. 1 2.5)\n");
	scanf("%f %f", &a, &b);

	printf("Please input second coordinates seperated by space \n");
	scanf("%f %f", &A, &B);

	distance = sqrt(pow(a-A,2)+pow(b-B,2));
	printf("Distance between points is:  %f \n", distance);





	return 0;
}
