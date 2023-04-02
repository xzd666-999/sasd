#include"show.h"

node*  List;//链表头结点
node* tail = List;//指向List的当前尾结点处
int main()
{
	if (readFile(List))
	{
		put_record(List);

	}
	else {
		exit_record();
	}
	return 0;
}

int readFile(node* L)
{
	FILE* fpr = fopen("name.txt", "r");

	node st;

	node* s;
	//尾指针
	node* t = L;
	if (fpr == nullptr) return 0;
	else {
		//文件的输入
		while (fscanf(fpr, "%d %s %s", &st.id, &st.name, &st.star) != EOF)
		{
			//尾插法实现文件的读入
			s = (node*)malloc(sizeof node);
			if (s != nullptr) {
				*s = st;
				t->next = s;
				t = t->next;
				t->next = nullptr;
			}
		}
	}
	return 1;
}

void Save_data(node *&List,node *s) {
	//将传入的数据写入链表
	node* tail = (node*)malloc(sizeof(node));
	tail ->next= s;
	tail = tail->next;
	tail->next = nullptr;
}
//输出信息
void put_record(node* L) {
	//system("cls");
	cout << "序号  " << "名称  " << "星级  " << endl;
	node* p = L->next;
	if (p != nullptr) {
		while (p != nullptr) {
			cout << p->id << ' ' << p->name << ' ' << p->star << endl;
			p = p->next;
		}
	}
}
void exit_record() {
	return;
}