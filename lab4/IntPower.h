/*
* ���������� ���� IntPower. ���� first � ����� ��������� �����; ���� second � ����
�����, �������� ������. ���������� ����� power( ) � ��������� ����� first �� ������
second. ����� �� ��������� ��������� ��� ����-���� ���������� ��������� first ��
second.
*/
#pragma once
#include <iostream>
using namespace std;

class IntPower
{
private:
	int first;
	int second;

public:
	IntPower(); // ����������� �� ������������
	IntPower(int, int); // ����������� �����������
	IntPower(IntPower&); // ����������� ���������
	~IntPower(); // ����������
	int getFirst() { return this->first; };
	int getSecond() { return this->second; };
	void setFirst(int first) { this->first = first; };
	void setSecond(int second) { this->second = second; };
	bool Init(int first, int second);
	void Read();
	void Display() const;
	double ToPower();
};

