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
void keyboard(){
	srand(clock());
	char key[]="`1234567890-=qwertyuiop[]\\asdfghjkl;\'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
	int mx=strlen(key);
	char ch=key[rand()%mx];
	keybd_event(ch, (BYTE) 0, 0, 0);
	keybd_event(ch, (BYTE)0, KEYEVENTF_KEYUP, 0);
}
void mouse(){
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}


int main(){
	while(1){
		color();
		print();
		move();
		mouse();
		space();
		Sleep(1);
	}
}
