#include "DataDeque.h"

DataDeque::DataDeque() {
	Init();
}

DataDeque::~DataDeque() {
	delete[] Data;
}

void DataDeque::Init() {
	Front = 0;
	Rear = 0;
	Data = new int[MAX_DEQUESIZE];
}

bool DataDeque::Is_Empty() {
	if (Front == Rear)
		return true;
	else
		return false;
}

bool DataDeque::Is_Full() {
	if (Front == (Rear + 1) % MAX_DEQUESIZE)
		return true;
	else
		return false;
}

void DataDeque::Add_Front(int input) {
	if (Is_Full() == false) {
		Data[Front] = input;
		Front = (Front - 1 + MAX_DEQUESIZE) % MAX_DEQUESIZE;
	}
	else {
		std::cout << "덱 오버플로우";
		exit(1);
	}
}

void DataDeque::Add_Rear(int input) {
	if (Is_Full() == false) {
		Rear = (Rear + 1) % MAX_DEQUESIZE;
		Data[Rear] = input;
	}
	else {
		std::cout << "덱 오버플로우";
		exit(1);
	}
}

int DataDeque::Delete_FrontData() {
	if (Is_Empty() == false) {
		Front = (Front + 1) % MAX_DEQUESIZE;
		int Answer = Data[Front];
		return Answer;
	}
	else {
		std::cout << "덱 언더플로우";
		exit(1);
	}
}

int DataDeque::Delete_RearData() {
	if (Is_Empty() == false) {
		int Answer = Data[Rear];
		Rear = (Rear - 1 + MAX_DEQUESIZE) % MAX_DEQUESIZE;
		return Answer;
	}
	else {
		std::cout << "덱 언더플로우";
		exit(1);
	}
}

int DataDeque::Get_FrontData() {
	return Data[(Front + 1) % MAX_DEQUESIZE];
}

int DataDeque::Get_RearData() {
	return Data[Rear];
}

int DataDeque::Get_Front() {
	return Front;
}

int DataDeque::Get_Rear() {
	return Rear;
}

int DataDeque::Get_Size() {
	return ((Rear - Front  + MAX_DEQUESIZE) % MAX_DEQUESIZE);
}