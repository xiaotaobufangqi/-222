#pragma once
#include <graphics.h>
#include <vector>
#include "Block.h"
using namespace std;

class Tetris
{
public:
	Tetris(int rows, int cols, int left, int top, int blockSize);
	void init(); //��ʼ��
	void play();  //��ʼ��Ϸ

private:
	void keyEvent();
	void updateWindow();
	int getDelay(); //���ؾ����ϴε��øú���������˶���ʱ��(ms)
	void drop();
	void clearLine();
	void moveLeftRight(int offset);
	void rotate();  //��ת
	void drawScore();  //���Ƶ�ǰ�ķ���
	void checkOver();  //�����Ϸ�Ƿ����
	void saveScore();  //������߷�
	void displayOver(); //������Ϸ��������

private:
	int delay;
	bool update; //�Ƿ����
	
	/*int map[20][10];*/
	//0:�հף�û�з���
	//5����5�ַ���
	vector<vector<int>> map;
	int rows;
	int cols;
	int leftMargin;
	int topMargin;
	int blockSize;
	IMAGE imgBg;

	Block* curBlock;
	Block* nextBlock;  //Ԥ�淽��
	Block bakBlock;  //��ǰ���齵������У�����������һ���Ϸ�λ��

	int score; //��ǰ�ķ���
	int highestScore; //��߷�
	int level; //��ǰ�ؿ�
	int lineCount; //��ǰ�Ѿ������˶�����
	bool gameOver; //��Ϸ�Ƿ��Ѿ�����

	IMAGE imgOver;
	IMAGE imgWin;
};

