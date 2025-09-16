.
. OUTTHIIO    
. --------
. Filename     : outthiaf.dat
.
RSOTTHI1  RESET     KEY8                                                        
          READ      OUTTHIA1,KEY8;;                                             
          RETURN
.
RAOTTHI1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OUTTHIA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTTHI1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OUTTHIA1,KEY8;OTTHOUTN,OTTHSTAT,OTTHRSIT,OTTHRCOD,OTTHRADD: 
                                  OTTHWURL,OTTHE164,OTTHSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTTHI1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTTHIA1;OTTHOUTN,OTTHSTAT,OTTHRSIT,OTTHRCOD,OTTHRADD:      
                             OTTHWURL,OTTHE164,OTTHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTTHI1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTTHIA1;OTTHOUTN,OTTHSTAT,OTTHRSIT,OTTHRCOD,OTTHRADD:      
                             OTTHWURL,OTTHE164,OTTHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTTHI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTTHIA1;OTTHOUTN,OTTHSTAT,OTTHRSIT,OTTHRCOD,OTTHRADD:      
                             OTTHWURL,OTTHE164,OTTHSPAR                         
          RETURN
.
WROTTHI1  RESET     KEY8                                                        
          WRITE     OUTTHIA1,KEY8;OTTHOUTN,OTTHSTAT,OTTHRSIT,OTTHRCOD,OTTHRADD: 
                                  OTTHWURL,OTTHE164,OTTHSPAR                    
          RETURN
.
DEOTTHI1  RESET     KEY8                                                        
          DELETE    OUTTHIA1,KEY8                                               
          RETURN
.
