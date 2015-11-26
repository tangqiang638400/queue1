// queue1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#define LEN 5

using namespace std;
class Queue{
public:
	char top();
	bool empty();
	void push(char);
	Queue(){
		front = 0;
		rear = 0;
	}
private:
	char data[5];
	int front;
	int rear;
};

bool Queue::empty(){
	return front == rear;
}

char Queue::top(){
	if (this->empty())
	{
		return NULL;
	}
	return data[front++];
}

void Queue::push(char c){
	data[rear++] = c;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Queue* q = new Queue();
	q->push('1');
	q->push('2');
	q->push('3');
	q->push('4');
	q->push('5');
	q->push('6');
	cout << q->top();
	cout << q->top();
	cout << q->top();
	cout << q->top();
	cout<< q->top() << q->top() << endl;

	int i = 5;
	cout << ++i << "\t";
	cout<< --i << endl;
	return 0;
}

