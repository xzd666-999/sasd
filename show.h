#pragma once
#include<iostream>

#include<Windows.h>
#include<cstring>
#include<stdlib.h>
using namespace std;
typedef struct Node {
	int id;//顺序
	char name[50];//姓名
	char star[50];//星级
	struct Node* next;
}node;

//增加信息
void add_record(node *L);
//删除信息
void delete_record();
//修改信息
void modify();
//查询信息
void search_record();
//输出信息
void put_record(node*L);
//退出程序
void exit_record();
//读取文件   读取成功返回1 读取失败返回0

int SaveFile(node* L);
int readFile(node* L);
void insert_record(node* L, node *st);


