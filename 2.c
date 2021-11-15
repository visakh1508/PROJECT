#include <stdio.h>

int main() {
	int num1, num2;
	printf("20:");
	scanf("%d" ,&num1);
	printf("54:");
	scanf("%d" ,&num2);
	
	
/*swapping*/
num1 = num1 + num2;
num2 = num1 - num2;
num1 = num1 - num2;

printf("\nAfter swapping: ");
printf("\n Value of first number = %d",num1);
printf("\n Value of secomd number =%d",num2);

return 0;
}

