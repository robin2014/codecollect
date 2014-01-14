#include <stdio.h>
extern "C"{
#include "add.h"
}
int main()
{
	int i = add(2,3);
	printf("=====%d\n",i);
	
}
