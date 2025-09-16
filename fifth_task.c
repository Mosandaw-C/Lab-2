#include <stdio.h>

int main(){
	
	int l, i; // Length of the segment
	
	printf("How long is you segement\n");

	scanf("%d", &l);

	printf("\n+");

	for (i = 0; i < l; i++)
    {
	
		printf("-");

	}
	
	printf("+\n");
	
	
	return 0;
}
