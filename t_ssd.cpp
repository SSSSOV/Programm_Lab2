#include "t_ssd.h"
#include <iostream>

t_ssd::t_ssd() {
	strcpy_s(this->name, "defoultSSD");
	this->speed = 1000;
	this->memory = 1;
	printf("SSD '%s' was created with defoult params.\n", this->name);
}
t_ssd::t_ssd(const char name[20]) {
	strcpy_s(this->name, 20, name);
	this->speed = 1000;
	this->memory = 1;
	printf("SSD '%s' was created with defoult params.\n", this->name);
}
t_ssd::t_ssd(const char name[20], int speed, int memory) {
	strcpy_s(this->name, 20, name);
	this->speed = speed;
	this->memory = memory;
	printf("SSD '%s' was created.\n", this->name);
}
t_ssd::~t_ssd() {
	printf("SSD '%s' was removed.\n\n", this->name);
}

void t_ssd::printParams() {
	printf("\tSSD: %s, %d Mb/s, %d Gb\n", this->name, this->speed, this->memory);
}
void t_ssd::setParams(const char name[20], int speed, int memory) {
	strcpy_s(this->name, 20, name);
	this->speed = speed;
	this->memory = memory;
	printf("SSD params have been set.\n\n");
}
void t_ssd::getParams(char name[20], int* speed, int* memory) {
	strcpy_s(name, 20, this->name);
	*speed = this->speed;
	*memory = this->memory;
	printf("SSD params have been get.\n\n");
}
void t_ssd::getName(char name[20]) {
	strcpy_s(name, 20, this->name);
}