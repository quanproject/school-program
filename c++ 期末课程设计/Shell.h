#pragma once

#include"main_game.h"
//=============================炮弹类===============================//
class Shell
{
public:
	void SetDirection(int dir);          //设定炮弹方向

	void ShellMotionUp();                //展示炮弹上下左右飞行，分开写减少判断次数
	void ShellMotionDown();
	void ShellMotionLeft();
	void ShellMotionRight();

	int Shoot();                         //发射炮弹函数（确定方向及结果
	void Kill();                         //确定命中并删除炮弹
	void Print();                        //打印炮弹
private:
	int direction;          //炮弹行进的方向
	int speed;              //炮弹的速度
	COORD xy;               //炮弹的当前坐标
	int flag;
};


////////////////////////////类的实现//////////////////////////////
