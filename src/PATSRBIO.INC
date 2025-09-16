.
. PATSRBIO    
. --------
. Filename     : patsrbaf.dat
.
RSPTSRB1  RESET     KEY30                                                       
          READ      PATSRBA1,KEY30;;                                            
          RETURN
.
RAPTSRB1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATSRBA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTSRB1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATSRBA1,KEY30;PTSBCODE,PTSBFUND,PTSBTBLT,PTSBCSCD,PTSBBRCD:
                        PTSBAMNT,PTSBCNID,PTSBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTSRB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATSRBA1;PTSBCODE,PTSBFUND,PTSBTBLT,PTSBCSCD,PTSBBRCD:      
                        PTSBAMNT,PTSBCNID,PTSBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTSRB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATSRBA1;PTSBCODE,PTSBFUND,PTSBTBLT,PTSBCSCD,PTSBBRCD:      
                        PTSBAMNT,PTSBCNID,PTSBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTSRB1                                                                        
          UPDATE    PATSRBA1;PTSBCODE,PTSBFUND,PTSBTBLT,PTSBCSCD,PTSBBRCD:      
                        PTSBAMNT,PTSBCNID,PTSBSPAR                                       
          RETURN
.
WRPTSRB1  RESET     KEY30               
          UNPACK    KEY30,PTSBCNID,PTSBCODE,PTSBFUND,PTSBTBLT,PTSBCSCD,PTSBBRCD
          WRITE     PATSRBA1,KEY30;PTSBCODE,PTSBFUND,PTSBTBLT,PTSBCSCD,PTSBBRCD:
                        PTSBAMNT,PTSBCNID,PTSBSPAR                                       
          RETURN
.
DEPTSRB1  RESET     KEY30                                                       
          DELETE    PATSRBA1,KEY30                                              
          RETURN
.
