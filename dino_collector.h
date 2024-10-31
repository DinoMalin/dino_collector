#pragma once
#include "stdlib.h"

typedef enum {
	ADD,
	FREE
} COLLECTOR_ACTION;

typedef struct lnk_list {
	void *ptr;
	struct lnk_list *next;
} lnk_list;

void *dino_alloc(void *ptr);
void dino_free();
