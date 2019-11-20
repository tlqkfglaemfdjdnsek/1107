#include<stdio.h>
int main(int argc, char* argv[])
{

	int i;	

	printf("argument count : %d\n", argc);
	for(i=0; i<argc; i++)
		printf("%d번째인수 :%s\n, i, argc[i]);

	return 0;
} 
