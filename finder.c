#include "head.h"

int have(char* name)
{
	int num = 0, i;
	char temp[100];
	char fadd[100] = txt_address; //�����ּ�

	FILE* fp;
	
	//File�� ������ �ҷ�����
	strcat(fadd, name);
	fp = fopen(fadd, "r");

	//������ ��ô
	if (fp == NULL)
	{
		printf("Error to open txt\n");
		system("pause");
	}

	//�� ���� �� ���� ��
	while (!feof(fp))
	{
		fscanf(fp, "\n%s", temp);
		if (temp == '\n')
			continue;
		for (i = 0; i < 100; i++)
		{

			if (temp[i] != word[i])
				break;
			if (temp[i] == '\0' && word[i] == '\0')
			{
				num++;
				break;
			}
		}

	}

	fclose(fp);
	return num;
}