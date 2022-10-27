#include <iostream>

class t_cpu {

private:
	char name[20];	// Название
	int frequency;	// Частота
	int cores;		// Кол-во ядер
	int threads;	// Кол-во потоков
	int power;		// Мощность

public:
	t_cpu() {
		strcpy_s(this->name, "defoultCPU");
		this->frequency = 1000;
		this->cores = 1;
		this->threads = 1;
		this->power = 10;
		printf("CPU '%s' was created with defoult params.\n\n",this->name);
	}
	t_cpu(const char name[20], int frequency, int cores, int threads, int power) {
		strcpy_s(this->name, 20, name);
		this->frequency = frequency;
		this->cores = cores;
		this->threads = threads;
		this->power = power;
		printf("CPU '%s' was created.\n\n", this->name);
	}
	~t_cpu() {
	}

	void printParams() {
		printf("\tCPU: %s, %d MHz, %d cores, %d threads, %d W\n", this->name, this->frequency, this->cores, this->threads, this->power);
	}
	void setParams(const char name[20], int frequency, int cores, int threads, int power) {
		strcpy_s(this->name, 20, name);
		this->frequency = frequency;
		this->cores = cores;
		this->threads = threads;
		this->power = power;
		printf("CPU params have been set.\n\n");
	}
	void getParams(char name[20], int* frequency, int* cores, int* threads, int* power) {
		strcpy_s(name, 20, this->name);
		*frequency = this->frequency;
		*cores = this->cores;
		*threads = this->threads;
		*power = this->power;
		printf("CPU params have been get.\n\n");
	}
	void getFrequencyThreads(int* frequency, int* threads) {
		*frequency = this->frequency;
		*threads = this->threads;
	}

};

class t_gpu {

private:
	char name[20];	// Название
	int frequency;	// Частота
	int memory;		// Память

public:
	t_gpu() {
		strcpy_s(this->name, "defoultGPU");
		this->frequency = 1000;
		this->memory = 1;
		printf("GPU '%s' was created with defoult params.\n\n", this->name);
	}
	t_gpu(const char name[20], int frequency, int memory) {
		strcpy_s(this->name, 20, name);
		this->frequency = frequency;
		this->memory = memory;
		printf("GPU '%s' was created.\n\n", this->name);
	}
	~t_gpu() {
	}

	void printParams() {
		printf("\tGPU: %s, %d MHz, %d Gb\n", this->name, this->frequency, this->memory);
	}
	void setParams(const char name[20], int frequency, int memory) {
		strcpy_s(this->name, 20, name);
		this->frequency = frequency;
		this->memory = memory;
		printf("GPU params have been set.\n\n");
	}
	void getParams(char name[20], int* frequency, int* memory) {
		strcpy_s(name, 20, this->name);
		*frequency = this->frequency;
		*memory = this->memory;
		printf("GPU params have been get.\n\n");
	}
	void getFrequency(int* frequency) {
		*frequency = this->frequency;
	}
};

class t_ram {

private:
	char name[20];	// Название
	int frequency;	// Частота
	int memory;		// Память

public:
	t_ram() {
		strcpy_s(this->name, "defoultRAM");
		this->frequency = 1000;
		this->memory = 1;
		printf("RAM '%s' was created with defoult params.\n\n", this->name);
	}
	t_ram(const char name[20], int frequency, int memory) {
		strcpy_s(this->name, 20, name);
		this->frequency = frequency;
		this->memory = memory;
		printf("RAM '%s' was created.\n\n", this->name);
	}
	~t_ram() {
	}

	void printParams() {
		printf("\tRAM: %s, %d MHz, %d Gb\n", this->name, this->frequency, this->memory);
	}
	void setParams(const char name[20], int frequency, int memory) {
		strcpy_s(this->name, 20, name);
		this->frequency = frequency;
		this->memory = memory;
		printf("RAM params have been set.\n\n");
	}
	void getParams(char name[20], int* frequency, int* memory) {
		strcpy_s(name, 20, this->name);
		*frequency = this->frequency;
		*memory = this->memory;
		printf("RAM params have been get.\n\n");
	}
	void getFrequency(int* frequency) {
		*frequency = this->frequency;
	}
};

struct t_ssd {

private:
	char name[20];	// Название
	int memory;		// Память
	int speed;		// Скорость

public:
	t_ssd() {
		strcpy_s(this->name, "defoultSSD");
		this->speed = 1000;
		this->memory = 1;
		printf("SSD '%s' was created with defoult params.\n\n", this->name);
	}
	t_ssd(const char name[20], int speed, int memory) {
		strcpy_s(this->name, 20, name);
		this->speed = speed;
		this->memory = memory;
		printf("SSD '%s' was created.\n\n", this->name);
	}
	~t_ssd() {
	}

	void printParams() {
		printf("\tSSD: %s, %d Mb/s, %d Gb\n", this->name, this->speed, this->memory);
	}
	void setParams(const char name[20], int speed, int memory) {
		strcpy_s(this->name, 20, name);
		this->speed = speed;
		this->memory = memory;
		printf("SSD params have been set.\n\n");
	}
	void getParams(char name[20], int* speed, int* memory) {
		strcpy_s(name, 20, this->name);
		*speed = this->speed;
		*memory = this->memory;
		printf("SSD params have been get.\n\n");
	}
};

struct t_pc {

private:
	t_cpu cpu;
	t_gpu gpu;
	t_ram ram;
	t_ssd ssd;

public:
	t_pc() {
	//	this->cpu = *new t_cpu();
	//	this->gpu = *new t_gpu();
	//	this->ram = *new t_ram();
	//	this->ssd = *new t_ssd();
		printf("PC was created with defoult params.\n\n");
	}
	t_pc(t_cpu cpu, t_gpu gpu, t_ram ram, t_ssd ssd) {
		this->cpu = cpu;
		this->gpu = gpu;
		this->ram = ram;
		this->ssd = ssd;
		printf("PC was created.\n\n");
	}
	~t_pc() {
		cpu.~t_cpu();
		gpu.~t_gpu();
		ram.~t_ram();
		ssd.~t_ssd();
		printf("PC was removed.\n\n");
	}

	void setCpu(t_cpu cpu) {
		this->cpu.~t_cpu();
		this->cpu = cpu;
		printf("CPU was changed for pc.\n\n");
	}
	void setGpu(t_gpu gpu) {
		this->gpu = gpu;
		printf("GPU was changed for pc.\n\n");
	}
	void setRam(t_ram ram) {
		this->ram = ram;
		printf("RAM was changed for pc.\n\n");
	}
	void setSsd(t_ssd ssd) {
		this->ssd = ssd;
		printf("SSD was changed for pc.\n\n");
	}

	void InfoPC(int m) {
		if (m == 0) {
			printf("Name of parts in PC:\n");
		}
		else if (m == 1) {
			printf("Info about PC:\n");
			cpu.printParams();
			gpu.printParams();
			ram.printParams();
			ssd.printParams();
			printf("Benchmark: %d\n\n", Benchmark());
		}
	}
	int Benchmark() {
		int cpuFrequency;
		int cpuThreads;
		int gpuFrequency;
		int ramFrequency;

		this->cpu.getFrequencyThreads(&cpuFrequency, &cpuThreads);
		this->gpu.getFrequency(&gpuFrequency);
		this->ram.getFrequency(&ramFrequency);

		return cpuFrequency * cpuThreads + gpuFrequency + ramFrequency;
	}
};

int main() {
	t_pc* pc = new t_pc();
	pc->InfoPC(1);
	t_cpu newCpu("Ryzen 5", 4500, 4, 8, 95);
	pc->setCpu(newCpu);
	pc->InfoPC(1);
}
