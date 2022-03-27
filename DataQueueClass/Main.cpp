#include <iostream>
#include "DataQueue.h"

int main() {
	DataQueue* Queue = new DataQueue;

	Queue->Enqueue(5);
	Queue->Enqueue(4);
	Queue->Enqueue(1);
	Queue->Dequeue();
	Queue->Enqueue(10);

	std::cout << Queue->GetSize() << std::endl;
	std::cout << Queue->GetFront() << std::endl;
	std::cout << Queue->GetRear() << std::endl;
	std::cout << Queue->Is_Full() << std::endl;
	std::cout << Queue->Is_Empty() << std::endl<<std::endl;

	std::cout << Queue->Dequeue() << " ";
	std::cout << Queue->Dequeue() << " ";
	std::cout << Queue->Dequeue() << " ";
	//std::cout << Queue->Dequeue() << " ";

	delete Queue;
}