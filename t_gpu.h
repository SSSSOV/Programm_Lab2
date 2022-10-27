#pragma once
class t_gpu {
private:
	char name[20];	// Название
	int frequency;	// Частота
	int memory;		// Память

public:
	t_gpu();
	t_gpu(const char name[20]);
	t_gpu(const char name[20], int frequency, int memory);
	~t_gpu();

	void printParams();
	void setParams(const char name[20], int frequency, int memory);
	void getParams(char name[20], int* frequency, int* memory);
	void getName(char name[20]);
	void getFrequency(int* frequency);
};

