#pragma once
#include "t_cpu.h"
#include "t_gpu.h"
#include "t_ram.h"
#include "t_ssd.h"

class t_pc {
private:
	t_cpu* cpu;
	t_gpu* gpu;
	t_ram* ram;
	t_ssd* ssd;

public:
	t_pc();
	t_pc(t_cpu* cpu, t_gpu* gpu, t_ram* ram, t_ssd* ssd);
	~t_pc();

	void setCpu(t_cpu* cpu);
	void setGpu(t_gpu* gpu);
	void setRam(t_ram* ram);
	void setSsd(t_ssd* ssd);

	void InfoPC();
	int Benchmark();
};

