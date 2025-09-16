.
. NZPPICIO    
. --------
. Filename     : nzppicaf.dat
.
RSNZPIC1  RESET     KEY22                                                       
          READ      NZPPICA1,KEY22;;                                            
          RETURN
.
RANZPIC1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      NZPPICA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZPIC1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      NZPPICA1,KEY22;NZPIADMN,NZPIINVN,NZPIURNO,NZPICNTR,NZPICLMN:
                        NZPISURG,NZPIFPAY,NZPICAPS,NZPIEXPT,NZPIUNIQ,NZPICPRC:  
                        NZPIPDAT,NZPICDAT,NZPICTIM,NZPICUID,NZPIUDAT,NZPIUTIM:  
                        NZPIUUID,NZPIANAE,NZPISPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZPIC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPPICA1;NZPIADMN,NZPIINVN,NZPIURNO,NZPICNTR,NZPICLMN:      
                        NZPISURG,NZPIFPAY,NZPICAPS,NZPIEXPT,NZPIUNIQ,NZPICPRC:  
                        NZPIPDAT,NZPICDAT,NZPICTIM,NZPICUID,NZPIUDAT,NZPIUTIM:  
                        NZPIUUID,NZPIANAE,NZPISPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZPIC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPPICA1;NZPIADMN,NZPIINVN,NZPIURNO,NZPICNTR,NZPICLMN:      
                        NZPISURG,NZPIFPAY,NZPICAPS,NZPIEXPT,NZPIUNIQ,NZPICPRC:  
                        NZPIPDAT,NZPICDAT,NZPICTIM,NZPICUID,NZPIUDAT,NZPIUTIM:  
                        NZPIUUID,NZPIANAE,NZPISPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZPIC1                                                                        
          UPDATE    NZPPICA1;NZPIADMN,NZPIINVN,NZPIURNO,NZPICNTR,NZPICLMN:      
                        NZPISURG,NZPIFPAY,NZPICAPS,NZPIEXPT,NZPIUNIQ,NZPICPRC:  
                        NZPIPDAT,NZPICDAT,NZPICTIM,NZPICUID,NZPIUDAT,NZPIUTIM:  
                        NZPIUUID,NZPIANAE,NZPISPAR                              
          RETURN
.
WRNZPIC1  RESET     KEY22                                                       
          WRITE     NZPPICA1,KEY22;NZPIADMN,NZPIINVN,NZPIURNO,NZPICNTR,NZPICLMN:
                        NZPISURG,NZPIFPAY,NZPICAPS,NZPIEXPT,NZPIUNIQ,NZPICPRC:  
                        NZPIPDAT,NZPICDAT,NZPICTIM,NZPICUID,NZPIUDAT,NZPIUTIM:  
                        NZPIUUID,NZPIANAE,NZPISPAR                              
          RETURN
.
DENZPIC1  RESET     KEY22                                                       
          DELETE    NZPPICA1,KEY22                                              
          RETURN
.
RSNZPIC2  RESET     KEY30                                                       
          READ      NZPPICA2,KEY30;;                                            
          RETURN
.
RANZPIC2  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPPICA2,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZPIC2  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPPICA2,KEY30;NZPIADMN,NZPIINVN,NZPIURNO,NZPICNTR,NZPICLMN:
                        NZPISURG,NZPIFPAY,NZPICAPS,NZPIEXPT,NZPIUNIQ,NZPICPRC:  
                        NZPIPDAT,NZPICDAT,NZPICTIM,NZPICUID,NZPIUDAT,NZPIUTIM:  
                        NZPIUUID,NZPIANAE,NZPISPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZPIC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPPICA2;NZPIADMN,NZPIINVN,NZPIURNO,NZPICNTR,NZPICLMN:      
                        NZPISURG,NZPIFPAY,NZPICAPS,NZPIEXPT,NZPIUNIQ,NZPICPRC:  
                        NZPIPDAT,NZPICDAT,NZPICTIM,NZPICUID,NZPIUDAT,NZPIUTIM:  
                        NZPIUUID,NZPIANAE,NZPISPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZPIC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPPICA2;NZPIADMN,NZPIINVN,NZPIURNO,NZPICNTR,NZPICLMN:      
                        NZPISURG,NZPIFPAY,NZPICAPS,NZPIEXPT,NZPIUNIQ,NZPICPRC:  
                        NZPIPDAT,NZPICDAT,NZPICTIM,NZPICUID,NZPIUDAT,NZPIUTIM:  
                        NZPIUUID,NZPIANAE,NZPISPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZPIC2                                                                        
          UPDATE    NZPPICA2;NZPIADMN,NZPIINVN,NZPIURNO,NZPICNTR,NZPICLMN:      
                        NZPISURG,NZPIFPAY,NZPICAPS,NZPIEXPT,NZPIUNIQ,NZPICPRC:  
                        NZPIPDAT,NZPICDAT,NZPICTIM,NZPICUID,NZPIUDAT,NZPIUTIM:  
                        NZPIUUID,NZPIANAE,NZPISPAR                              
          RETURN
.
WRNZPIC2  RESET     KEY30                                                       
          WRITE     NZPPICA2,KEY30;NZPIADMN,NZPIINVN,NZPIURNO,NZPICNTR,NZPICLMN:
                        NZPISURG,NZPIFPAY,NZPICAPS,NZPIEXPT,NZPIUNIQ,NZPICPRC:  
                        NZPIPDAT,NZPICDAT,NZPICTIM,NZPICUID,NZPIUDAT,NZPIUTIM:  
                        NZPIUUID,NZPIANAE,NZPISPAR                              
          RETURN
.
DENZPIC2  RESET     KEY30                                                       
          DELETE    NZPPICA2,KEY30                                              
          RETURN
.
