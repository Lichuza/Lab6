#pragma once
#include<stdlib.h>

//Ёлемент списка
struct Node
{
	int x;
	Node *next, *prev;
};

class Deq
{
	
public:
	// онструктор по умолчанию
	Deq():head(NULL), tail(NULL){}
	~Deq();

	void display();
	void input(int x);
	void del(int x);
	bool verify();
private:
	long int count;
	Node *head, *tail;
};

