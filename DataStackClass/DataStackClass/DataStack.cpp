#include "DataStack.h"

DataStack::DataStack() {
	StackInit();
}

DataStack::~DataStack() {
	Stackend();
}

void DataStack::Stackend() {
	delete[] Data;
}

void DataStack::StackInit() {
	top = -1;
	PushCount = 0;
	PopCount = 0;
	Data = new int[MAX_Data];
}

void DataStack::StackOverflowError() {
	std::cout << "스택 꽉 참" << std::endl;
	exit(1);
}

void DataStack::StackUnderflowError() {
	std::cout << "스택 없음" << std::endl;
	exit(1);
}

bool DataStack::Is_empty() {
	if (top == -1)
		return true;
	else
		return false;
}

bool DataStack::Is_full() {
	if (top == MAX_Data - 1)
		return true;
	else
		return false;
}

int DataStack::GetSize() {
	return top + 1;
}

void DataStack::Push(int InputData) {
	if (Is_full() == true)
		StackOverflowError();
	top += 1;
	Data[top] = InputData;
}

int DataStack::Pop() {
	if (Is_empty() == true)
		StackUnderflowError();
	int returnValue = Data[top];
	top -= 1;
	return returnValue;
}

int DataStack::Peek() {
	return Data[top];
}
