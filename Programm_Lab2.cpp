#include <iostream>

struct pc {
	struct cpu {
		char name[20];	// Название
		int frequency;	// Частота
		int cores;		// Кол-во ядер
		int threads;	// Кол-во потоков
		int power;		// Мощность
	};
	struct gpu {
		char name[20];	// Название
		int frequency;	// Частота
		int memory;		// Память
	};
	struct ram {
		char name[20];	// Название
		int frequency;	// Частота
		int memory;		// Память
	};
	struct ssd {
		char name[20];	// Название
		int memory;		// Память
		int speed;		// Скорость
	};
};

int main()
{

}
