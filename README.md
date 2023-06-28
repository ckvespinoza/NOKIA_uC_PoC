# NOKIA_uC_PoC

This repository is to provide visibility to the code I am working on for the microcontroller (MCU/uC) based power manager project.

June 27th: I have started creating tasks to be handled with the FreeRTOS library covering power sequencing, reverse power sequencing, 
and monitoring of signals like EDSM enable, hard reset request and soft reset request. I am currently investigating issues with the
handling of tasks within the "rtos" directory. "print_debug_rtos" is the backbone of the tasks using FreeRTOS with the functions
replaced with sprintf functions for debugging purposes.
