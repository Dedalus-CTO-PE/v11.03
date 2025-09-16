.
. PMSNPLIO    
. --------
. Filename     : pmsnplaf.dat
.
RSPMNPL1  RESET     KEY28                                                       
          READ      PMSNPLA1,KEY28;;                                            
          RETURN
.
RAPMNPL1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNPL1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA1,KEY28;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNPL1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNPLA1;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNPL1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNPLA1;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNPL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNPLA1;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          RETURN
.
WRPMNPL1  RESET     KEY28                                                       
          WRITE     PMSNPLA1,KEY28;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          RETURN
.
DEPMNPL1  RESET     KEY28                                                       
          DELETE    PMSNPLA1,KEY28                                              
          RETURN
.
RSPMNPL2  RESET     KEY52                                                       
          READ      PMSNPLA2,KEY52;;                                            
          RETURN
.
RAPMNPL2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA2,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNPL2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA2,KEY52;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNPL2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNPLA2;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNPL2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNPLA2;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNPL2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNPLA2;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          RETURN
.
WRPMNPL2  RESET     KEY52                                                       
          WRITE     PMSNPLA2,KEY52;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          RETURN
.
DEPMNPL2  RESET     KEY52                                                       
          DELETE    PMSNPLA2,KEY52                                              
          RETURN
.
RSPMNPL3  RESET     KEY29                                                       
          READ      PMSNPLA3,KEY29;;                                            
          RETURN
.
RAPMNPL3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA3,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNPL3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA3,KEY29;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNPL3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNPLA3;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNPL3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNPLA3;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNPL3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNPLA3;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          RETURN
.
WRPMNPL3  RESET     KEY29                                                       
          WRITE     PMSNPLA3,KEY29;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          RETURN
.
DEPMNPL3  RESET     KEY29                                                       
          DELETE    PMSNPLA3,KEY29                                              
          RETURN
.
RSPMNPL4  RESET     KEY31                                                       
          READ      PMSNPLA4,KEY31;;                                            
          RETURN
.
RAPMNPL4  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA4,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNPL4  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA4,KEY31;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNPL4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNPLA4;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNPL4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNPLA4;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNPL4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNPLA4;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          RETURN
.
WRPMNPL4  RESET     KEY31                                                       
          WRITE     PMSNPLA4,KEY31;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          RETURN
.
DEPMNPL4  RESET     KEY31                                                       
          DELETE    PMSNPLA4,KEY31                                              
          RETURN
.
RSPMNPL5  RESET     KEY29                                                       
          READ      PMSNPLA5,KEY29;;                                            
          RETURN
.
RAPMNPL5  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA5,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNPL5  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA5,KEY29;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNPL5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNPLA5;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNPL5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNPLA5;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNPL5  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNPLA5;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          RETURN
.
WRPMNPL5  RESET     KEY29                                                       
          WRITE     PMSNPLA5,KEY29;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          RETURN
.
DEPMNPL5  RESET     KEY29                                                       
          DELETE    PMSNPLA5,KEY29                                              
          RETURN
.
RSPMNPL6  RESET     KEY31                                                       
          READ      PMSNPLA6,KEY31;;                                            
          RETURN
.
RAPMNPL6  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA6,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNPL6  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNPLA6,KEY31;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNPL6  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNPLA6;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNPL6  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNPLA6;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNPL6  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNPLA6;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:      
                             PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:      
                             PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:      
                             PMNPUTIM,PMNPUUID,PMNPSPAR                         
          RETURN
.
WRPMNPL6  RESET     KEY31                                                       
          WRITE     PMSNPLA6,KEY31;PMNPUNIQ,PMNPURNO,PMNPCNTR,PMNPHOSP,PMNPRTYP:
                                   PMNPRCOD,PMNPRUID,PMNPRSTA,PMNPEROR,PMNPRDAT:
                                   PMNPRTIM,PMNPCDAT,PMNPCTIM,PMNPCUID,PMNPUDAT:
                                   PMNPUTIM,PMNPUUID,PMNPSPAR                   
          RETURN
.
DEPMNPL6  RESET     KEY31                                                       
          DELETE    PMSNPLA6,KEY31                                              
          RETURN
.
