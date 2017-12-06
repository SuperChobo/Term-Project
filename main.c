#include "head.h"

int main(int argc, char* argv[])
{
	int i;
	int load;
	int a,b;
	strcpy(word, argv[1]);
	a = clock();

	//첫번째 파일 불러오고 없을시 종료
	load = _findfirst(data_address , &txt);

	if (load == -1)
	{
		printf("Failed to load txt");
		return 0;
	}

	//find 시작
	do {
		many = have(txt.name);

		if (many != 0)
		{
			add(many);
		}

	}while (_findnext(load, &txt)== 0);

	//출력

	printf("-----------------------------------------\n");
	node_print();

	b = clock();
	printf("\n** Time: %lf\n",(double)(b - a) / (double)CLOCKS_PER_SEC);

	return 0;
}