.
. PATSUSIO    
. --------
. Filename     : patsusaf.dat
.
RSPTSUS1  RESET     KEY16                                                       
          READ      PATSUSA1,KEY16;;                                            
          RETURN
.
RAPTSUS1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATSUSA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTSUS1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATSUSA1,KEY16;PTSSURNO,PTSSFDAT,PTSSTDAT,PTSSRFCS,PTSSREAS:
                        PTSSWEBC,PTSSDATC,PTSSTIMC,PTSSWEBU,PTSSDATU,PTSSTIMU:  
                        PTSSCOM1,PTSSCOM2,PTSSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTSUS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATSUSA1;PTSSURNO,PTSSFDAT,PTSSTDAT,PTSSRFCS,PTSSREAS:      
                        PTSSWEBC,PTSSDATC,PTSSTIMC,PTSSWEBU,PTSSDATU,PTSSTIMU:  
                        PTSSCOM1,PTSSCOM2,PTSSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTSUS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATSUSA1;PTSSURNO,PTSSFDAT,PTSSTDAT,PTSSRFCS,PTSSREAS:      
                        PTSSWEBC,PTSSDATC,PTSSTIMC,PTSSWEBU,PTSSDATU,PTSSTIMU:  
                        PTSSCOM1,PTSSCOM2,PTSSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTSUS1                                                                        
          UPDATE    PATSUSA1;PTSSURNO,PTSSFDAT,PTSSTDAT,PTSSRFCS,PTSSREAS:      
                        PTSSWEBC,PTSSDATC,PTSSTIMC,PTSSWEBU,PTSSDATU,PTSSTIMU:  
                        PTSSCOM1,PTSSCOM2,PTSSSPAR                              
          RETURN
.
WRPTSUS1  RESET     KEY16                                                       
          WRITE     PATSUSA1,KEY16;PTSSURNO,PTSSFDAT,PTSSTDAT,PTSSRFCS,PTSSREAS:
                        PTSSWEBC,PTSSDATC,PTSSTIMC,PTSSWEBU,PTSSDATU,PTSSTIMU:  
                        PTSSCOM1,PTSSCOM2,PTSSSPAR                              
          RETURN
.
DEPTSUS1  RESET     KEY16                                                       
          DELETE    PATSUSA1,KEY16                                              
          RETURN
.
