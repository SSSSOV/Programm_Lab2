#include "t_cpu.h"
#include <iostream>

t_cpu::t_cpu() {
	strcpy_s(this->name, "defoultCPU");
	this->frequency = 1000;
	this->cores = 1;
	this->threads = 1;
	this->power = 10;
	printf("CPU '%s' was created with defoult params.\n", this->name);
}
t_cpu::t_cpu(const char name[20]) {
	strcpy_s(this->name, 20, name);
	this->frequency = 1000;
	this->cores = 1;
	this->threads = 1;
	this->power = 10;
	printf("CPU '%s' was created with defoult params.\n", this->name);
}
t_cpu::t_cpu(const char name[20], int frequency, int cores, int threads, int power) {
	strcpy_s(this->name, 20, name);
	this->frequency = frequency;
	this->cores = cores;
	this->threads = threads;
	this->power = power;
	printf("CPU '%s' was created.\n", this->name);
}
t_cpu::~t_cpu() {
	printf("CPU '%s' was removed.\n\n", this->name);
}

void t_cpu::printParams() {
	printf("\tCPU: %s, %d MHz, %d cores, %d threads, %d W\n", this->name, this->frequency, this->cores, this->threads, this->power);
}
void t_cpu::setParams(const char name[20], int frequency, int cores, int threads, int power) {
	strcpy_s(this->name, 20, name);
	this->frequency = frequency;
	this->cores = cores;
	this->threads = threads;
	this->power = power;
	printf("CPU params have been set.\n\n");
}
void t_cpu::getParams(char name[20], int* frequency, int* cores, int* threads, int* power) {
	strcpy_s(name, 20, this->name);
	*frequency = this->frequency;
	*cores = this->cores;
	*threads = this->threads;
	*power = this->power;
	printf("CPU params have been get.\n\n");
}
void t_cpu::getName(char name[20]) {
	strcpy_s(name, 20, this->name);
}
void t_cpu::getFrequencyThreads(int* frequency, int* threads) {
	*frequency = this->frequency;
	*threads = this->threads;
}