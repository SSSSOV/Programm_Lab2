#include <iostream>

struct t_cpu {
	char name[20];	// Название
	int frequency;	// Частота
	int cores;		// Кол-во ядер
	int threads;	// Кол-во потоков
	int power;		// Мощность
};
struct t_gpu {
	char name[20];	// Название
	int frequency;	// Частота
	int memory;		// Память
};
struct t_ram {
	char name[20];	// Название
	int frequency;	// Частота
	int memory;		// Память
};
struct t_ssd {
	char name[20];	// Название
	int memory;		// Память
	int speed;		// Скорость
};
struct t_pc {
	t_cpu cpu;
	t_gpu gpu;
	t_ram ram;
	t_ssd ssd;
};

int Benchmark(t_pc pc) {
	return pc.cpu.threads * pc.cpu.frequency + pc.gpu.frequency + pc.ram.frequency;
}

void InfoPC(t_pc pc, int m) {
	if (m == 0) {
		printf("Name of parts in PC:\n");
		printf("\tCPU: %s\n", pc.cpu.name);
		printf("\tGPU: %s\n", pc.gpu.name);
		printf("\tRAM: %s\n", pc.ram.name);
		printf("\tSSD: %s\n\n", pc.ssd.name);
	}
	else if (m == 1) {
		printf("Info about PC:\n");
		printf("\tCPU: %s, %d MHz, %d cores, %d threads, %d W\n", pc.cpu.name, pc.cpu.frequency, pc.cpu.cores, pc.cpu.threads, pc.cpu.power);
		printf("\tGPU: %s, %d MHz, %d Gb\n", pc.gpu.name, pc.gpu.frequency, pc.gpu.memory);
		printf("\tRAM: %s, %d MHz, %d Gb\n", pc.ram.name, pc.ram.frequency, pc.ram.memory);
		printf("\tSSD: %s, %d Mb/s, %d Gb\n", pc.ssd.name, pc.ssd.speed, pc.ssd.memory);
		printf("Benchmark: %d\n\n", Benchmark(pc));
	}
}

t_pc CreatePC(t_cpu cpu, t_gpu gpu, t_ram ram, t_ssd ssd) {
	t_pc newPc;
	newPc.cpu = cpu;
	newPc.gpu = gpu;
	newPc.ram = ram;
	newPc.ssd = ssd;
	return newPc;
};

t_cpu CreateCPU() {
	printf("Create new CPU:\n");
	t_cpu newCpu;

	printf("\tInput name: ");
	while (gets_s(newCpu.name, 20) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput frequency: ");
	while (scanf_s("%d", &newCpu.frequency) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput cores: ");
	while (scanf_s("%d", &newCpu.cores) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput threads: ");
	while (scanf_s("%d", &newCpu.threads) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput power: ");
	while (scanf_s("%d", &newCpu.power) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("CPU was created.\n\n");
	return newCpu;
}

t_gpu CreateGPU() {
	printf("Create new GPU:\n");
	t_gpu newGpu;

	printf("\tInput name: ");
	while (gets_s(newGpu.name, 20) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput frequency: ");
	while (scanf_s("%d", &newGpu.frequency) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput memory: ");
	while (scanf_s("%d", &newGpu.memory) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("GPU was created.\n\n");
	return newGpu;
}

t_ram CreateRAM() {
	printf("Create new RAM:\n");
	t_ram newRam;

	printf("\tInput name: ");
	while (gets_s(newRam.name, 20) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput frequency: ");
	while (scanf_s("%d", &newRam.frequency) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput memory: ");
	while (scanf_s("%d", &newRam.memory) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("RAM was created.\n\n");
	return newRam;
}

t_ssd CreateSSD() {
	printf("Create new SSD:\n");
	t_ssd newSsd;

	printf("\tInput name: ");
	while (gets_s(newSsd.name, 20) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput speed: ");
	while (scanf_s("%d", &newSsd.speed) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput memory: ");
	while (scanf_s("%d", &newSsd.memory) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("SSD was created.\n\n");
	return newSsd;
}

void ChangeCPU(t_pc* pc, t_cpu newCpu) {
	printf("CPU in PC was changed. (%s -> %s)\n\n", pc->cpu.name, newCpu.name);
	pc->cpu = newCpu;
}

void ChangeGPU(t_pc* pc, t_gpu newGpu) {
	printf("GPU in PC was changed. (%s -> %s)\n\n", pc->gpu.name, newGpu.name);
	pc->gpu = newGpu;
}

void ChangeRAM(t_pc* pc, t_ram newRam) {
	printf("RAM in PC was changed. (%s -> %s)\n\n", pc->ram.name, newRam.name);
	pc->ram = newRam;
}

void ChangeSSD(t_pc* pc, t_ssd newSsd) {
	printf("SSD in PC was changed. (%s -> %s)\n\n", pc->ssd.name, newSsd.name);
	pc->ssd = newSsd;
}

int main() {
	t_cpu cpu2 = CreateCPU();
	t_gpu gpu2 = CreateGPU();
	t_ram ram2 = CreateRAM();
	t_ssd ssd2 = CreateSSD();
	t_pc pc2 = CreatePC(cpu2, gpu2, ram2, ssd2);
	InfoPC(pc2, 0);
	InfoPC(pc2, 1);
}
