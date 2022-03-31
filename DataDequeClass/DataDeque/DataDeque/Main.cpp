#include <iostream>
#include "DataDeque.h"

int main() {
	DataDeque DQ;
	int size;
	DQ.Add_Rear(4);
	DQ.Add_Rear(5);
	DQ.Add_Rear(6);
	DQ.Add_Front(3);
	DQ.Add_Front(2);
	DQ.Add_Front(1);

	std::cout << DQ.Get_Front() << " ";
	std::cout << DQ.Get_Rear() << " ";
	std::cout << DQ.Get_Size() << " " << std::endl;
	size = DQ.Get_Size();
	for (int i = 0; i < size; i++)
		std::cout << DQ.Delete_FrontData() << " " << i <<std::endl;
}