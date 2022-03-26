#pragma once
#include <iostream>
#define MAX_Data 100

class DataStack {
public:
	DataStack();
	~DataStack();

public:
	void StackInit();
	void Stackend();
	bool Is_empty();
	bool Is_full();
	int GetSize();
	void Push(int InputData);
	int Pop();
	int Peek();
	void StackOverflowError();
	void StackUnderflowError();

private:
	int top;
	int PushCount;
	int PopCount;
	int* Data;
};
