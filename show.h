#pragma once
#include<iostream>

#include<Windows.h>
#include<cstring>
#include<stdlib.h>
using namespace std;
typedef struct Node {
	int id;//˳��
	char name[50];//����
	char star[50];//�Ǽ�
	struct Node* next;
}node;

//������Ϣ
void add_record(node *L);
//ɾ����Ϣ
void delete_record();
//�޸���Ϣ
void modify();
//��ѯ��Ϣ
void search_record();
//�����Ϣ
void put_record(node*L);
//�˳�����
void exit_record();
//��ȡ�ļ�   ��ȡ�ɹ�����1 ��ȡʧ�ܷ���0

int SaveFile(node* L);
int readFile(node* L);
void insert_record(node* L, node *st);


