#pragma once
#include<iostream>
#include<stdlib.h>
#include<Windows.h>

using namespace std;

typedef struct Record {
	int id;
	char name[20];
	char star[20];
	struct Record* next;
}node;
int readFile(node* L);
void Save_data(node *&,node*);
void put_record(node* L);
void exit_record();