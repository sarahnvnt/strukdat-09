/*
Nama Program : Exercise-02
Nama 		 : Sarah Navianti
NPM 		 : 140810180021
Kelas		 : A
Tahun	   	 : 2019
*/

#include<iostream>
using namespace std;

const int maxE=255;

struct stack{
	char n[maxE];
	int TOP;
};
stack S;
void createStack(stack& S){
	S.TOP=-1;
}
void pushStack (stack& S, char newElement){
	if(S.TOP==maxE-1){
		cout << "stack penuh\n";
	}
	else {
		S.TOP+=1;
		S.n[S.TOP]=newElement;
	}
}
void popStack(stack& S){
	cout << S.n[S.TOP];
	S.TOP--;
}
int main(){
	int n;
	char newElement;
	cout << "Masukan Banyaknya Huruf\t: "; cin >> n;
	for (int i=0; i<n;i++){
		cin>>newElement;
		pushStack(S, newElement);
	}
	for(int i=0;i<n;i++){
		popStack(S);
	}
}
