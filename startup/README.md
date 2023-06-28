This was my original code for setting up the power sequence functionality of the power manager.
It includes:
- Utilization of the HAL library for GPIO reads and writes
- Power sequencing of 3 rails
- Utilization of a timer for conditional statements when sequencing
    - ex: if(PGOOD_1 && 40ms){}...
