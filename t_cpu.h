#pragma once
class t_cpu {
private:
	char name[20];	// ��������
	int frequency;	// �������
	int cores;		// ���-�� ����
	int threads;	// ���-�� �������
	int power;		// ��������

public:
	t_cpu();
	t_cpu(const char name[20]);
	t_cpu(const char name[20], int frequency, int cores, int threads, int power);
	~t_cpu();

	void printParams();
	void setParams(const char name[20], int frequency, int cores, int threads, int power);
	void getParams(char name[20], int* frequency, int* cores, int* threads, int* power);
	void getName(char name[20]);
	void getFrequencyThreads(int* frequency, int* threads);
};

