#include <iostream>
#include <string>

using namespace std;

int max(int a, int b);
void greet(string name);
void setName(string name = "小明");
void setStudent(string name, int age = 18/* 默认参数必须从右往左设定 */);

int main() {
	// 第二集复习（1）—— 函数（1）

	// 1. 函数定义
	// 语法：
	/*
	返回类型 函数名(参数列表) {
		函数体
	}
	*/
	// 见max、greet、setName函数

	// 2. 函数调用
	// 先进行函数原型

	// (1)有返回值函数调用
	
	int num1 = 20;
	int num2 = 30;
	cout << num1 << "和" << num2 << "中" << max(num1, num2) << "最大" << endl;

	
	cout << '\n'
		<< "---------------------------------------------------------------\n\n";
	

	// (2)无返回值函数调用

	string name_;
	cout << "请输入你的名字：";
	getline(cin, name_);
	
	greet(name_);

	
	cout << '\n'
		<< "---------------------------------------------------------------\n\n";


	// (3)默认参数

	string name = "小洪";
	setName(name);
	// 输出：   你的姓名：小洪

	setName();
	// 输出：   你的姓名：小明

	cout << '\n'
		<< "---------------------------------------------------------------\n\n";
	
	name = "小亮";
	int age = 20;
	setStudent(name, age);
	// 输出：   姓名：小亮，年龄：20

	cout << '\n';

	name = "小刚";
	setStudent(name);
	// 输出：   姓名：小刚，年龄：18
	

	return 0;
}

// 有返回值的函数定义：
int max(int a, int b) {
	int temp = a > b ? a : b;
	return temp;
}

// 无返回值的函数定义：
void greet(string name) {
	cout << name << "，你好！" << endl;
}

// 带默认参数的函数定义
void setName(string name) {
	cout << "你的姓名：" << name << endl;
}

void setStudent(string name, int age) {
	cout << "姓名：" << name << "\n年龄：" << age << endl;
}