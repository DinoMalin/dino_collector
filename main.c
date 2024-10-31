#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dino_collector.h"

int main() {
	char *str1 = dino_alloc(strdup("first alloc"));
	printf("string:\t\t%s\n", str1);
	printf("address:\t%p\n", str1);
	
	printf("\n");

	char *str2 = dino_alloc(strdup("second alloc -- freeing now"));
	printf("string:\t\t%s\n", str2);
	printf("address:\t%p\n", str2);
	dino_free();

	printf("\n");

	char *str3 = dino_alloc(strdup("third alloc -- independently"));
	printf("string:\t\t%s\n", str3);
	printf("address:\t%p\n", str3);
	dino_free();

	printf("\n");

	printf("trying to free when nothing is allocated\n");
	dino_free();

	printf("\n");

	printf("passing null to the allocator\n");
	char *str4 = dino_alloc(NULL);
	(void)str4;
	dino_free();
}
