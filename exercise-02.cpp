/*
Nama Program : Exercise-02
Nama 		 : Sarah Navianti
NPM  		 : 140810180021
Kelas		 : A
Tahun		 : 2019
*/

#include<iostream>
using namespace std;

struct Stack{
	char s;
	Stack* next;
};
typedef Stack* pointer;
typedef pointer List;

void createList (List& TOP){
	TOP=NULL;
}

void createElement(pointer& pBaru){
	pBaru=new Stack;
	cin>>pBaru->s;
}

void pushStackS(List& TOP,pointer pBaru){
	if(TOP==NULL){
		TOP=pBaru;
	}
	else {
		pBaru->next=TOP;
		TOP=pBaru;
	}
}

void popStackS(List& TOP){
	pointer pHapus;
	cout << TOP->s;
	if(TOP->next==NULL){
		TOP=NULL;
	}
	else {
		pHapus=TOP;
		TOP=TOP->next;
		pHapus->next=NULL;
	}
}

int main(){
	int n;
	pointer pBaru;
	List TOP;
	cout << "Masukan Banyaknya Huruf	: "; cin>>n;
	createList(TOP);
	for (int i=0;i<n;i++){
		createElement(pBaru);
		pushStackS(TOP,pBaru);
	}
	for (int i=0;i<n;i++){
		popStackS(TOP);
	}
}
