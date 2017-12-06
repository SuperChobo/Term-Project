#include "head.h"

int comp(char a, char b)
{
	int result = 1;
	if (a == b)
		result = 0;
	if (a < 91 && a == b - 32)
		result = 0;
	if (a > 96 && a == b + 32)
		result = 0;
	return result;
}

int have(char* name)
{
	int num = 0, i, j;
	char temp[100];
	char fadd[100] = txt_address; //파일주소

	FILE* fp;
	
	//File명 복사후 불러오기
	strcat(fadd, name);
	fp = fopen(fadd, "r");

	//오류시 투척
	if (fp == NULL)
	{
		printf("Error to open txt\n");
		system("pause");
	}

	//한 글자 한 글자 비교
	while (!feof(fp))
	{
		fscanf(fp, "\n%s", temp);
		for (i = 0; temp[i] != '\0'; i++)
		{
			for (j = 0; j < 100; j++)
			{
				if (word[j] == '\0')
				{
					num++;
					break;
				}
				if (comp(temp[i + j], word[j]))
					break;
			}
		}

	}

	fclose(fp);
	return num;
}