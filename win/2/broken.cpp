#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

long long *a;
void color(){
	char ch[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	srand(clock());
	char command[1000];
	sprintf(command,"color %c%c\n",ch[rand()%16],ch[rand()%16]);
	system(command);
}
void print(){
	srand(clock());
	printf("%c",rand());
}
void move(){
	srand(clock());
	SetCursorPos(rand(),rand());
}
void space(){
	srand(clock());
	a=new (long long);
	(*a)=rand();
}

int main(){
	while(1){
		color();
		print();
		move();
		space();
		Sleep(1);
	}
}
