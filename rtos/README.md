Attemped to implement RTOS into the existing startup, creating tasks for power sequencing, as well as soft rest request, hard reset request, and EDSM enable signal monitoring.
See:

- void NormalStage_init() - power sequencing and reverse power sequencing upon incorrect rails being powered
- void MonEDSMEn_init() - polls for EDSM enable signal 
- void MonHResetReq_init() - polls for hard reset request signal to send a hard reset signal
- void MonSResetReq_init() - polls for soft reset request signal to send a soft reset signal
