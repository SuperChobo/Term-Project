#pragma once

#define word_MAX 10
#define name_MAX 30
#define data_address "dataset\\*.txt"
#define txt_address "dataset\\"

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <string.h>
#include <time.h>

#pragma warning(disable:4996)

typedef struct _finddata_t search;
typedef struct node node;

struct node {
	int data;
	char name[name_MAX];
	node* next;
};

search txt;
node* head;

int many;
int tnum;

char word[word_MAX];