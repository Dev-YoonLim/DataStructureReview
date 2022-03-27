#include "DataQueue.h"

DataQueue::DataQueue() {
	Queue_Init();
}

DataQueue::~DataQueue() {
	delete[] Data;
}

void DataQueue::Queue_Init() {
	SetFront(0);
	SetRear(0);
	Data = new int[MAX_QUEUESIZE];
}

bool DataQueue::Is_Full() {
	if (GetFront() == (GetRear() + 1) % MAX_QUEUESIZE)
		return true;
	else
		return false;
}

bool DataQueue::Is_Empty() {
	if (GetFront() == GetRear())
		return true;
	else
		return false;
}

int DataQueue::GetSize() {
	return (GetRear() - GetFront() + MAX_QUEUESIZE) % MAX_QUEUESIZE;
}

int DataQueue::Peek() {
	return Data[(GetFront() + 1) % MAX_QUEUESIZE];
}

int DataQueue::Dequeue() {
	if (Is_Empty() == true)
		QueueUnderFlow();
	int ReturnData = Data[(GetFront() + 1) % MAX_QUEUESIZE];
	SetFront((GetFront() + 1) % MAX_QUEUESIZE);
	return ReturnData;
}

void DataQueue::Enqueue(int InputData) {
	if (Is_Full() == true)
		QueueOverFlow();
	SetRear((GetRear()+1)%MAX_QUEUESIZE);
	Data[GetRear()] = InputData;
}

void DataQueue::QueueOverFlow() {
	std::cout << "큐 오버플로우" << std::endl;
	exit(1);
}

void DataQueue::QueueUnderFlow() {
	std::cout << "큐 언더플로우" << std::endl;
	exit(1);

}