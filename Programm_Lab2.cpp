#include <iostream>
#include <conio.h>
#include "t_cpu.h"
#include "t_gpu.h"
#include "t_ram.h"
#include "t_ssd.h"
#include "t_pc.h"

int main() {
	int f = 0;
	int frequency = 0, cores = 0, threads = 0, power = 0, memory = 0;
	char str[20];
	t_cpu* cpus[5] = { 0, 0, 0, 0, 0 };
	t_gpu* gpus[5] = { 0, 0, 0, 0, 0 };
	t_ram* rams[5] = { 0, 0, 0, 0, 0 };
	t_ssd* ssds[5] = { 0, 0, 0, 0, 0 };

	cpus[0] = new t_cpu();
	gpus[0] = new t_gpu();
	rams[0] = new t_ram();
	ssds[0] = new t_ssd();
	t_pc* pc = new t_pc(cpus[0], gpus[0], rams[0], ssds[0]);

	printf("Press any keys for continue...");
	_getch();
	system("cls");

	while (true) {
		printf("Menu:\n\t1. Info about pc.\n\t2. Change part of PC.\n\t3. Exit.\n> ");
		scanf_s("%d", &f);
		system("cls");

		if (f == 1) {
			pc->InfoPC();
			printf("Press any keys for continue...");
			_getch();
			system("cls");
		}
		else if (f == 2) {
			printf("Choose which part you want to change:\n\t1. CPU\n\t2. GPU\n\t3. RAM\n\t4. SSD\n\t5. Back\n> ");
			scanf_s("%d", &f);
			system("cls");
			if (f == 1) {
				printf("Choose CPU in list:\n");
				for (int i = 0; i < 5; i++) {
					if (cpus[i] != 0) cpus[i]->getName(str);
					else strcpy_s(str, 20, "create new...");
					printf("\t%d. (%x) %s\n", i+1, cpus[i], str);
				}
				printf("\t6. Remove added parts.\n");

				printf("> ");
				scanf_s("%d", &f);

				if (f == 6) {
					for (int i = 1; i < 5; i++) {
						if (cpus[i] == 0) continue;
						cpus[i]->~t_cpu();
						cpus[i] = 0;
					}
					printf("Press any keys for continue...");
					_getch();
					system("cls");
					continue;
				}
				if (cpus[f - 1] == 0) {
					printf("Create new:\n");
					while (getchar() != '\n');
					printf("\nEnter CPU's name: "); gets_s(str, 20);
					printf("Enter frequency: "); scanf_s("%d", &frequency);
					printf("Enter cores: "); scanf_s("%d", &cores);
					printf("Enter threads: "); scanf_s("%d", &threads);
					printf("Enter power: "); scanf_s("%d", &power);
					cpus[f - 1] = new t_cpu(str, frequency, cores, threads, power);
				}
				printf("\n");
				pc->setCpu(cpus[f - 1]);
			}
			else if (f == 2) {
				printf("Choose GPU in list:\n");
				for (int i = 0; i < 5; i++) {
					if (gpus[i] != 0) gpus[i]->getName(str);
					else strcpy_s(str, 20, "create new...");
					printf("\t%d. (%x) %s\n", i + 1, gpus[i], str);
				}
				printf("\t6. Remove added parts.\n");

				printf("> ");
				scanf_s("%d", &f);

				if (f == 6) {
					for (int i = 1; i < 5; i++) {
						if (cpus[i] == 0) continue;
						cpus[i]->~t_cpu();
						cpus[i] = 0;
					}
					printf("Press any keys for continue...");
					_getch();
					system("cls");
					continue;
				}
				if (gpus[f - 1] == 0) {
					printf("Create new:\n");
					while (getchar() != '\n');
					printf("\nEnter GPU's name: "); gets_s(str, 20);
					printf("Enter frequency: "); scanf_s("%d", &frequency);
					printf("Enter memory: "); scanf_s("%d", &memory);
					gpus[f - 1] = new t_gpu(str, frequency, memory);
				}
				printf("\n");
				pc->setGpu(gpus[f - 1]);
			}
			else if (f == 3) {
				printf("Choose RAM in list:\n");
				for (int i = 0; i < 5; i++) {
					if (rams[i] != 0) rams[i]->getName(str);
					else strcpy_s(str, 20, "create new...");
					printf("\t%d. (%x) %s\n", i + 1, rams[i], str);
				}
				printf("\t6. Remove added parts.\n");

				printf("> ");
				scanf_s("%d", &f);

				if (f == 6) {
					for (int i = 1; i < 5; i++) {
						if (cpus[i] == 0) continue;
						cpus[i]->~t_cpu();
						cpus[i] = 0;
					}
					printf("Press any keys for continue...");
					_getch();
					system("cls");
					continue;
				}
				if (rams[f - 1] == 0) {
					printf("Create new:\n");
					while (getchar() != '\n');
					printf("\nEnter RAM's name: "); gets_s(str, 20);
					printf("Enter frequency: "); scanf_s("%d", &frequency);
					printf("Enter memory: "); scanf_s("%d", &memory);
					rams[f - 1] = new t_ram(str, frequency, memory);
				}
				printf("\n");
				pc->setRam(rams[f - 1]);
			}
			else if (f == 4) {
				printf("Choose SSD in list:\n");
				for (int i = 0; i < 5; i++) {
					if (ssds[i] != 0) ssds[i]->getName(str);
					else strcpy_s(str, 20, "create new...");
					printf("\t%d. (%x) %s\n", i + 1, ssds[i], str);
				}
				printf("\t6. Remove added parts.\n");

				printf("> ");
				scanf_s("%d", &f);

				if (f == 6) {
					for (int i = 1; i < 5; i++) {
						if (cpus[i] == 0) continue;
						cpus[i]->~t_cpu();
						cpus[i] = 0;
					}
					printf("Press any keys for continue...");
					_getch();
					system("cls");
					continue;
				}
				if (ssds[f - 1] == 0) {
					printf("Create new:\n");
					while (getchar() != '\n');
					printf("\nEnter SSD's name: "); gets_s(str, 20);
					printf("Enter speed: "); scanf_s("%d", &frequency);
					printf("Enter memory: "); scanf_s("%d", &memory);
					ssds[f - 1] = new t_ssd(str, frequency, memory);
				}
				printf("\n");
				pc->setSsd(ssds[f - 1]);
			}
			else if (f == 5) continue;
			printf("Press any keys for continue...");
			_getch();
			system("cls");
		}
		else if (f == 3) break;
	}
}