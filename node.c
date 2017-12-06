#include "head.h"

void add(int num)
{
	node* new = (node*)calloc(1, sizeof(node));
	node* temp;

	new->data = num;
	strcpy(new->name, txt.name);

	//처음일 시 저장 후 종료
	if (head == NULL)
	{
		head = new;
		return;
	}

	//head와 먼저 비교
	if (head->data < num)
	{
		new->next = head;
		head = new;
		return;
	}

	temp = head;

	//더 크면 그 곳에 저장
	while (temp->next != NULL)
	{
		if ((temp->next)->data < num)
		{
			new->next = temp->next;
			temp->next = new;
			return;
		}
		temp = temp->next;
	}

	//젤 끝에 저장
	temp->next = new;
}

void node_print()
{
	node* temp = head;
	if (head == NULL)
	{
		printf("None of Files\n");
		return;
	}

	printf("File name: number of words   \n\n");

	while (1)
	{
		printf("%s: %d개\n", temp->name, temp->data);
		if (temp->next == NULL)
			return;
		temp = temp->next;
	}
}