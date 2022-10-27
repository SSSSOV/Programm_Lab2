#include "t_gpu.h"
#include <iostream>

t_gpu::t_gpu() {
	strcpy_s(this->name, "defoultGPU");
	this->frequency = 1000;
	this->memory = 1;
	printf("GPU '%s' was created with defoult params.\n", this->name);
}
t_gpu::t_gpu(const char name[20]) {
	strcpy_s(this->name, 20, name);
	this->frequency = 1000;
	this->memory = 1;
	printf("GPU '%s' was created with defoult params.\n", this->name);
}
t_gpu::t_gpu(const char name[20], int frequency, int memory) {
	strcpy_s(this->name, 20, name);
	this->frequency = frequency;
	this->memory = memory;
	printf("GPU '%s' was created.\n", this->name);
}
t_gpu::~t_gpu() {
	printf("GPU '%s' was removed.\n\n", this->name);
}

void t_gpu::printParams() {
	printf("\tGPU: %s, %d MHz, %d Gb\n", this->name, this->frequency, this->memory);
}
void t_gpu::setParams(const char name[20], int frequency, int memory) {
	strcpy_s(this->name, 20, name);
	this->frequency = frequency;
	this->memory = memory;
	printf("GPU params have been set.\n\n");
}
void t_gpu::getParams(char name[20], int* frequency, int* memory) {
	strcpy_s(name, 20, this->name);
	*frequency = this->frequency;
	*memory = this->memory;
	printf("GPU params have been get.\n\n");
}
void t_gpu::getName(char name[20]) {
	strcpy_s(name, 20, this->name);
}
void t_gpu::getFrequency(int* frequency) {
	*frequency = this->frequency;
}