#include "pointers.h"


void fill_cup_reference(int *cup, int percentage)
{
		printf("cup direcion is %p in fill_cup_reference\n", cup);
		*cup = percentage;
}

void fill_cup_value(int cup, int percentage)
{
		printf("cup direcion is %p in fill_cup_value\n", &cup);
		cup = percentage;
}

void reference(void)
{
		int cup = 0;
		printf("Nuestra tacita esta llena en un %d%%\n", cup);
		fill_cup_value(cup, 80);
		printf("cup direcion is %p in reference\n", &cup);
		printf("Nuestra tacita esta llena en un %d%%\n", cup);
		fill_cup_reference(&cup, 80);
		printf("cup direcion is %p in reference\n", &cup);
		printf("Nuestra tacita esta llena en un %d%%\n", cup);
}






