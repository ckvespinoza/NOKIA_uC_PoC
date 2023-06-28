Currently trying to start from scratch with RTOS without implementing too specific tasks. I use the stdio.h library in order to print the location of the code as it is ran.
This code contains 4 tasks:
- normal stage (for power sequencing, voltage monitoring, and reverse power sequencing)
- EDSM enable signal monitoring
- Soft reset requenst monitoring and if true, send soft reset signal
- Soft reset requenst monitoring and if true, send soft reset signal
