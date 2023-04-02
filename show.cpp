#include"show.h"
node List;

int main()
{
	
	int choice = 0;
	readFile(&List);
	while (1) {
		cin >> choice;
		switch (choice)
		{
		case 2://删除信息
			delete_record();
			break;
		case 3://修改
			modify();
			break;
		case 4://查询
			search_record();
			break;
		case 5://输出
			put_record(&List);
			break;
		case 0://退出
			exit_record();
			break;
		}
		cout << "是否要继续操作" << "yes : 1   no :  2" << endl;
		cin >> choice;
		if (choice == 2) break;
		else continue;

	}
	return 0;
}


//通过一个结点来增加信息
void add_record(node *L) {

	node* s=(node*)malloc(sizeof(node));
	s->next = NULL;
	if(s) cin >> s->id >> s->name >> s->star;
	insert_record(&List, s);
}
//增加信息
void insert_record(node* L, node *st) {
	node* h = L;
	node* s = (node*)malloc(sizeof(node));
	*s = *st;
	s->next = h->next;
	h->next = s;
	SaveFile(L);
}
//删除信息
void delete_record() {
	cout << "删除信息" << endl;
}
//修改信息
void modify() {
	cout << "修改信息" << endl;
}
//输出信息
void put_record(node* L) {
	system("cls");
	cout << "序号  " << "名称  " <<"星级  " << endl;
	node* p = L->next;
	if (p != nullptr) {
		while (p != nullptr) {
			cout << p->id << ' ' << p->name << ' ' << p->star<<endl;
			p = p->next;
		}
	}
}
//退出程序
void exit_record() {
	cout << "退出程序" << endl;
}

int readFile(node *L)
{
	FILE* fpr = fopen("name.txt","r");
	
	node st;

	node* s;
	//尾指针
	node* t = L;
	if (fpr == nullptr) return 0;
	else {
		//文件的输入
		while (fscanf(fpr,"%d %s %s",&st.id,&st.name,&st.star) != EOF)
		{
			s = (node*)malloc(sizeof node);
			if (s!=nullptr) {
				*s = st;
				t->next = s;
				t = s;
				t->next = nullptr;
			}
		}
	}
	return 1;
}

//保存文件信息

int SaveFile(node* L) {
	FILE* fpw = fopen("name.txt", "w");
	if (fpw == nullptr) return 0;
	else {
		//采用fprintf存储信息 
		node* p = L->next;
		while (p)
		{
			fprintf(fpw, "%d %s %s\n", p->id, p->name, p->star);
			p = p->next;
		}
	}
}