.
. SINSCDIO    
. --------
. Filename     : sinscdaf.dat
.
RSSISD1   RESET     KEY45                                                       
          READ      SINSCDA1,KEY45;;                                            
          RETURN
.
RASISD1   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      SINSCDA1,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSISD1   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      SINSCDA1,KEY45;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:     
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSISD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSCDA1;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:           
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSISD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSCDA1;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:           
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSISD1                                                                         
          UPDATE    SINSCDA1;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:           
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          RETURN
.
WRSISD1   RESET     KEY45                                                       
          WRITE     SINSCDA1,KEY45;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:     
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          RETURN
.
DESISD1   RESET     KEY45                                                       
          DELETE    SINSCDA1,KEY45                                              
          RETURN
.
RSSISD2   RESET     KEY45                                                       
          READ      SINSCDA2,KEY45;;                                            
          RETURN
.
RASISD2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      SINSCDA2,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSISD2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      SINSCDA2,KEY45;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:     
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSISD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSCDA2;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:           
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSISD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSCDA2;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:           
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSISD2                                                                         
          UPDATE    SINSCDA2;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:           
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          RETURN
.
WRSISD2   RESET     KEY45                                                       
          WRITE     SINSCDA2,KEY45;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:     
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          RETURN
.
DESISD2   RESET     KEY45                                                       
          DELETE    SINSCDA2,KEY45                                              
          RETURN
.
RSSISD3   RESET     KEY45                                                       
          READ      SINSCDA3,KEY45;;                                            
          RETURN
.
RASISD3   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      SINSCDA3,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSISD3   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      SINSCDA3,KEY45;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:     
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSISD3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSCDA3;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:           
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSISD3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSCDA3;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:           
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSISD3                                                                         
          UPDATE    SINSCDA3;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:           
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          RETURN
.
WRSISD3   RESET     KEY45                                                       
          WRITE     SINSCDA3,KEY45;SISDCON,SISDSUP,SISDCAT,SISDSDT,SISDSUT:     
                        SISDUC1,SISDUC2,SISDUC3,SISDUC4,SISDBQ1,SISDBQ2:        
                        SISDBQ3,SISDMQT,SISDPO1,SISDPO2,SISDUR1,SISDUR2:        
                        SISDUD1,SISDUD2,SISDUY1,SISDUY2,SISDSPA                 
          RETURN
.
DESISD3   RESET     KEY45                                                       
          DELETE    SINSCDA3,KEY45                                              
          RETURN
.
