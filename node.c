#include "head.h"

void add(int num)
{
	node* new = (node*)calloc(1, sizeof(node));
	node* temp;

	new->data = num;
	strcpy(new->name, txt.name);

	//ó���� �� ���� �� ����
	if (head == NULL)
	{
		head = new;
		return;
	}

	//head�� ���� ��
	if (head->data < num)
	{
		new->next = head;
		head = new;
		return;
	}

	temp = head;

	//�� ũ�� �� ���� ����
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

	//�� ���� ����
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
		printf("%s: %d��\n", temp->name, temp->data);
		if (temp->next == NULL)
			return;
		temp = temp->next;
	}
}