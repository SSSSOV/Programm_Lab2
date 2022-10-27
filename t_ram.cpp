#include "t_ram.h"
#include <iostream>

t_ram::t_ram() {
	strcpy_s(this->name, "defoultRAM");
	this->frequency = 1000;
	this->memory = 1;
	printf("RAM '%s' was created with defoult params.\n", this->name);
}
t_ram::t_ram(const char name[20]) {
	strcpy_s(this->name, 20, name);
	this->frequency = 1000;
	this->memory = 1;
	printf("RAM '%s' was created with defoult params.\n", this->name);
}
t_ram::t_ram(const char name[20], int frequency, int memory) {
	strcpy_s(this->name, 20, name);
	this->frequency = frequency;
	this->memory = memory;
	printf("RAM '%s' was created.\n", this->name);
}
t_ram::~t_ram() {
	printf("RAM '%s' was removed.\n\n", this->name);
}

void t_ram::printParams() {
	printf("\tRAM: %s, %d MHz, %d Gb\n", this->name, this->frequency, this->memory);
}
void t_ram::setParams(const char name[20], int frequency, int memory) {
	strcpy_s(this->name, 20, name);
	this->frequency = frequency;
	this->memory = memory;
	printf("RAM params have been set.\n\n");
}
void t_ram::getParams(char name[20], int* frequency, int* memory) {
	strcpy_s(name, 20, this->name);
	*frequency = this->frequency;
	*memory = this->memory;
	printf("RAM params have been get.\n\n");
}
void t_ram::getName(char name[20]) {
	strcpy_s(name, 20, this->name);
}
void t_ram::getFrequency(int* frequency) {
	*frequency = this->frequency;
}