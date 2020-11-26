#include <stdio.h>
#include <stdlib.h>
#define N 256

int main()
{
	const char *sensors = "sensors > cpu_temp.txt";
	int code = system(sensors);
	FILE *fp;
	char fname[] = "cpu_temp.txt";
	char str[N];
	int i = 0;

	if(code == 0){
		fp = fopen(fname, "r");
		if(fp == NULL){
			printf("ファイル '%s' を開けませんでした。\n", fname);
			return -1;
		}else{
			while(fgets(str, N, fp) != NULL)
			{
				i++;
				if(){
					system("sed -i %dd cpu_temp.txt", i);
				}
			}
		}

		fclose(fp);
	}else{
		printf("コマンドが正しく実行されていません。\n");
		return code;
	}

	return 0;
}

