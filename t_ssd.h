#pragma once
class t_ssd {
private:
	char name[20];	// Название
	int memory;		// Память
	int speed;		// Скорость

public:
	t_ssd();
	t_ssd(const char name[20]);
	t_ssd(const char name[20], int speed, int memory);
	~t_ssd();

	void printParams();
	void setParams(const char name[20], int speed, int memory);
	void getParams(char name[20], int* speed, int* memory);
	void getName(char name[20]);
};

