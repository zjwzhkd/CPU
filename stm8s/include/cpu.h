/*******************************************************************************
* MCU型 号: STM8S
* 文 件 名: cpu.h
* 创 建 者: Keda Huang
* 版    本: V1.0
* 创建日期: 2016-10-13
* 文件说明: CPU接口
*******************************************************************************/

#ifndef __CPU_H
#define __CPU_H

/* 头文件 --------------------------------------------------------------------*/
#include "cpu_port.h"
#include "cpu_tick.h"
#include "cpulib_def.h"

/* 接口函数 ------------------------------------------------------------------*/
void cpu_Init(void);

#endif  /* __CPU_H */
