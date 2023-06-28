# NOKIA_uC_PoC

This repository is to provide visibility to the code I am working on for the microcontroller (MCU/uC) based power manager project.

June 27th: I have started creating tasks to be handled with the FreeRTOS library covering power sequencing, reverse power sequencing, 
and monitoring of signals like EDSM enable, hard reset request and soft reset request. I am currently investigating issues with the
handling of tasks within the "rtos" directory. "print_debug_rtos" is the backbone of the tasks using FreeRTOS with the functions
replaced with sprintf functions for debugging purposes.

"startup" - This was my original code for setting up the power sequence functionality of the power manager. It includes:

- Utilization of the HAL library for GPIO reads and writes
- Power sequencing of 3 rails
- Utilization of a timer for conditional statements when sequencing
- ex: if(PGOOD_1 && 40ms){}...

"rtos" - Attemped to implement RTOS into the existing "startup" directory's main.c, creating tasks for power sequencing, as well as soft rest request, hard reset request, and EDSM enable signal monitoring. See:

- void NormalStage_init() - power sequencing and reverse power sequencing upon incorrect rails being powered
- void MonEDSMEn_init() - polls for EDSM enable signal
- void MonHResetReq_init() - polls for hard reset request signal to send a hard reset signal
- void MonSResetReq_init() - polls for soft reset request signal to send a soft reset signal

"print_debug_rtos" - Currently trying to start from scratch with RTOS without implementing specific tasks. I use the stdio.h library in order to print the location of the code as it is ran. It is essentially "rtos" directory's main.c but replaces the task content with sprintf functions for debugging.

