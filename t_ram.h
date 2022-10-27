#pragma once
class t_ram {
private:
	char name[20];	// Название
	int frequency;	// Частота
	int memory;		// Память

public:
	t_ram();
	t_ram(const char name[20]);
	t_ram(const char name[20], int frequency, int memory);
	~t_ram();

	void printParams();
	void setParams(const char name[20], int frequency, int memory);
	void getParams(char name[20], int* frequency, int* memory);
	void getName(char name[20]);
	void getFrequency(int* frequency);
};

