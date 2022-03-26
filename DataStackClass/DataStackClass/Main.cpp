#include <iostream>
#include "DataStack.h"

using namespace std;

int main() {
	DataStack* Stackclass = new DataStack;

	Stackclass->StackInit();
	Stackclass->Push(5);
	Stackclass->Push(1);
	Stackclass->Push(3);
	Stackclass->Push(6);

	cout << Stackclass->Pop() << " ";
	cout << Stackclass->Pop() << " ";
	cout << Stackclass->Pop() << " ";
	cout << Stackclass->Pop() << " ";
	//cout << Stackclass->Pop() << " "; 스택 언더 플로우

	delete Stackclass;
}