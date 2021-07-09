#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#include <stdlib.h> 
#include <time.h> 
#include <algorithm> 
#include <iostream> 
#include <queue> 
#include <stack> 
#include <vector> 
#include <string> 
#include <conio.h>
#include <fstream>
#include <thread>
using namespace std;
string musiclist[100] = { "TestSong","end" };
string gamemap;
char ch_ls;
string str_ls;
int bpm;
bool gamestart = false;
void init();
void lobby();
void select();
void help();
void game(int id);
void input_E();
void input_F();
void input_J();
void input_I();
void nothing() { return; };
int main() {
	init();
	lobby();
	return 0;
}
void init() {

	return;
}
void lobby() {
	printf("欢迎各位前来测试!\n");
	printf("1:开始游戏\n");
	printf("2:获得帮助\n");
	printf("3:退出游戏\n");
	printf(">");
	cin >> ch_ls;
	if (ch_ls == '1') {
		select();
	}
	else if (ch_ls == '2') {
		help();
	}
	else if (ch_ls == '3') {
		exit(0);
	}
	else {
		lobby();
	}
	return;
}
void select() {
	int i = 0;
	while (musiclist[i++] == "end") {
		printf("%d:%s\n", i + 1, musiclist[i]);
	}
	int selectname = 0;
	while (selectname < 0 && selectname >= i) {
		cin >> str_ls;
		selectname = atoi(str_ls.c_str()) - 1;
	}
	game(selectname);
}
void game(int id) {
	gamestart = false;
	ifstream loadfile(musiclist[id] + ".mgt", ios::in);
	loadfile >> bpm >>gamemap;
	thread th_input_E(input_E);
	thread th_input_F(input_F);
	thread th_input_J(input_J);
	thread th_input_I(input_I);
}
void help() {
	printf("\"E\",\"F\",\"J\",\"I\"键分别对应第一第二第三第四音轨\n");
	printf("当note到达判定线时按下按键即可得分");
	printf("按任意键继续...");
	_getch();
}
void input_E() {
	while (!gamestart)nothing();

}
void input_F() {

}
void input_J() {

}
void input_I() {

}
