#pragma once
#include <iostream>
#define MAX_DEQUESIZE 100

class DataDeque {

private:
	int Front;
	int Rear;
	int* Data;

public:
	DataDeque();
	~DataDeque();

public:
	void Init();
	void Add_Front(int input);
	void Add_Rear(int input);

	int Delete_FrontData();
	int Delete_RearData();

	int Get_FrontData();
	int Get_RearData();

	int Get_Front();
	int Get_Rear();

public:
	int Get_Size();
	bool Is_Full();
	bool Is_Empty();
};