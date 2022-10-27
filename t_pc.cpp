#include "t_pc.h"
#include <iostream>

t_pc::t_pc() {
	this->cpu = new t_cpu();
	this->gpu = new t_gpu();
	this->ram = new t_ram();
	this->ssd = new t_ssd();
	printf("PC was created with defoult params.\n\n");
}
t_pc::t_pc(t_cpu* cpu, t_gpu* gpu, t_ram* ram, t_ssd* ssd) {
	this->cpu = cpu;
	this->gpu = gpu;
	this->ram = ram;
	this->ssd = ssd;
	printf("PC was created.\n\n");
}
t_pc::~t_pc() {
	cpu->~t_cpu();
	gpu->~t_gpu();
	ram->~t_ram();
	ssd->~t_ssd();
	printf("PC was removed.\n\n");
}

void t_pc::setCpu(t_cpu* cpu) {
	printf("CPU was changed for pc.\n(%x) -> (%x)\n\n", this->cpu, cpu);
	this->cpu = cpu;
}
void t_pc::setGpu(t_gpu* gpu) {
	printf("GPU was changed for pc.\n(%x) -> (%x)\n\n", this->gpu, gpu);
	this->gpu = gpu;
}
void t_pc::setRam(t_ram* ram) {
	printf("RAM was changed for pc.\n(%x) -> (%x)\n\n", this->ram, ram);
	this->ram = ram;
}
void t_pc::setSsd(t_ssd* ssd) {
	printf("SSD was changed for pc.\n(%x) -> (%x)\n\n", this->ssd, ssd);
	this->ssd = ssd;
}

void t_pc::InfoPC() {
		printf("Info about PC:\n");
		printf("(%x):",this->cpu);
		cpu->printParams();
		printf("(%x):", this->gpu);
		gpu->printParams();
		printf("(%x):", this->ram);
		ram->printParams();
		printf("(%x):", this->ssd);
		ssd->printParams();
		printf("Benchmark: %d\n\n", Benchmark());
}
int t_pc::Benchmark() {
	int cpuFrequency;
	int cpuThreads;
	int gpuFrequency;
	int ramFrequency;

	this->cpu->getFrequencyThreads(&cpuFrequency, &cpuThreads);
	this->gpu->getFrequency(&gpuFrequency);
	this->ram->getFrequency(&ramFrequency);

	return cpuFrequency * cpuThreads + gpuFrequency + ramFrequency;
}