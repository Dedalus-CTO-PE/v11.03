.
. MEHPOIIO    
. --------
. Filename     : mehpoiaf.dat
.
RSMHPOI1  RESET     KEY36                                                       
          READ      MEHPOIA1,KEY36;;                                            
          RETURN
.
RAMHPOI1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPOIA1,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPOI1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPOIA1,KEY36;MHPIXDAT,MHPIXNUM,MHPIVISN,MHPIURNO,MHPIOCUR:
                        MHPIOCOT,MHPIOCOI,MHPIERID,MHPIOITM,MHPITYPE,MHPIMADM:  
                        MHPICSTA,MHPICDAT,MHPIIVAL,MHPISPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPOI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPOIA1;MHPIXDAT,MHPIXNUM,MHPIVISN,MHPIURNO,MHPIOCUR:      
                        MHPIOCOT,MHPIOCOI,MHPIERID,MHPIOITM,MHPITYPE,MHPIMADM:  
                        MHPICSTA,MHPICDAT,MHPIIVAL,MHPISPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPOI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPOIA1;MHPIXDAT,MHPIXNUM,MHPIVISN,MHPIURNO,MHPIOCUR:      
                        MHPIOCOT,MHPIOCOI,MHPIERID,MHPIOITM,MHPITYPE,MHPIMADM:  
                        MHPICSTA,MHPICDAT,MHPIIVAL,MHPISPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPOI1                                                                        
          UPDATE    MEHPOIA1;MHPIXDAT,MHPIXNUM,MHPIVISN,MHPIURNO,MHPIOCUR:      
                        MHPIOCOT,MHPIOCOI,MHPIERID,MHPIOITM,MHPITYPE,MHPIMADM:  
                        MHPICSTA,MHPICDAT,MHPIIVAL,MHPISPAR                     
          RETURN
.
WRMHPOI1  RESET     KEY36                                                       
          WRITE     MEHPOIA1,KEY36;MHPIXDAT,MHPIXNUM,MHPIVISN,MHPIURNO,MHPIOCUR:
                        MHPIOCOT,MHPIOCOI,MHPIERID,MHPIOITM,MHPITYPE,MHPIMADM:  
                        MHPICSTA,MHPICDAT,MHPIIVAL,MHPISPAR                     
          RETURN
.
DEMHPOI1  RESET     KEY36                                                       
          DELETE    MEHPOIA1,KEY36                                              
          RETURN
.
