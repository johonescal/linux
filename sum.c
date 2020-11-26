#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;

	if(argc < 3){
		printf("引数を2つ以上指定してください\n");
		return 1;
	}

	for(i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return 0;
}
