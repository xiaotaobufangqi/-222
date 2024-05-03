#pragma once
#include <graphics.h>  //easyxͼ�ο�
#include <vector>
using namespace std;

struct Point
{
	int row;
	int col;
};

class Block
{
public:
	Block();
	void drop();
	void moveLeftRight(int offset);
	void rotate(); //��ת
	void draw(int ledtMargin, int topMargin);
	static IMAGE** getImages();
	Block& operator=(const Block& other);

	bool blockInMap(const vector<vector<int>>&map);
	void solidify(vector<vector<int>>& map);
	int getBlockType();

private:
	int blockType;  //���������
	Point smallBlocks[4];  //ÿ�ַ������͵��ĸ����������
	IMAGE *img;

private:
	static int size;
	static IMAGE* imgs[7]; //���߸�����ͼƬ
};

