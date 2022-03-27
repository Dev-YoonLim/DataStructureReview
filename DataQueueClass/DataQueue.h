#include <iostream>
#define MAX_QUEUESIZE 100

class DataQueue {

private:
	int Front;
	int Rear;
	int* Data;

public:
	DataQueue();
	~DataQueue();
	void Queue_Init();
	bool Is_Full();
	bool Is_Empty();
	void Enqueue(int InputData);
	int Dequeue();
	int Peek();
	int GetSize();
	void SetFront(int NewFront) { Front = NewFront; }
	void SetRear(int NewRear) { Rear = NewRear; }
	int GetFront() { return Front; }
	int GetRear() { return Rear; }
	void QueueOverFlow();
	void QueueUnderFlow();
};