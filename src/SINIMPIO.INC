.
. SINIMPIO    
. --------
. Filename     : sinimpaf.dat
.
RSSIIM1   RESET     KEY12                                                       
          READ      SINIMPA1,KEY12;;                                            
          RETURN
.
RASIIM1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMPA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIM1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMPA1,KEY12;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:     
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINIMPA1;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINIMPA1;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIM1                                                                         
          UPDATE    SINIMPA1;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIM1   RESET     KEY12                                                       
          WRITE     SINIMPA1,KEY12;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:     
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          RETURN
.
DESIIM1   RESET     KEY12                                                       
          DELETE    SINIMPA1,KEY12                                              
          RETURN
.
RLSIIM1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     SINIMPA1,KEY12;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:     
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIM1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINIMPA1;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIM1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINIMPA1;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIM1   RESET     KEY12                                                       
          UNLOCK    SINIMPA1                                                    
          RETURN
.
RSSIIM2   RESET     KEY12                                                       
          READ      SINIMPA2,KEY12;;                                            
          RETURN
.
RASIIM2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMPA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIM2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMPA2,KEY12;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:     
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIM2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINIMPA2;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIM2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINIMPA2;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIM2                                                                         
          UPDATE    SINIMPA2;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIM2   RESET     KEY12                                                       
          WRITE     SINIMPA2,KEY12;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:     
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          RETURN
.
DESIIM2   RESET     KEY12                                                       
          DELETE    SINIMPA2,KEY12                                              
          RETURN
.
RLSIIM2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     SINIMPA2,KEY12;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:     
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIM2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINIMPA2;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIM2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINIMPA2;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIM2   RESET     KEY12                                                       
          UNLOCK    SINIMPA2                                                    
          RETURN
.
RSSIIM3   RESET     KEY16                                                       
          READ      SINIMPA3,KEY16;;                                            
          RETURN
.
RASIIM3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMPA3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIM3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMPA3,KEY16;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:     
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIM3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINIMPA3;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIM3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINIMPA3;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIM3                                                                         
          UPDATE    SINIMPA3;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIM3   RESET     KEY16                                                       
          WRITE     SINIMPA3,KEY16;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:     
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          RETURN
.
DESIIM3   RESET     KEY16                                                       
          DELETE    SINIMPA3,KEY16                                              
          RETURN
.
RLSIIM3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     SINIMPA3,KEY16;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:     
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIM3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINIMPA3;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIM3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINIMPA3;SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIM3   RESET     KEY16                                                       
          UNLOCK    SINIMPA3                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIIM00
          MOVE      "   24",AUDTSECT
          MOVE      "204",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIIM99 IF NOT EQUAL
.
          PACK     SIIMAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIIMAUDD
          CLOCK     TIME,SIIMAUDT
          MOVE      PORT,SIIMAUDP
          LOAD      SIIMAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIIMAUDS
          MOVE      PASSCODE,SIIMAUDO
          PACK      KEY19,SIIMAUDD,SIIMAUDT,SIIMAUDP,SIIMAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIIM
WASIIM99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIIM00
          MOVE      "   24",AUDTSECT
          MOVE      "204",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIIM99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIIM
DASIIM99  RETURN
ASSIIM    RESET     KEY19                                                       
          READ      SINAUDIM,KEY19;;                                            
          RETURN
.
AKSIIM                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDIM;SIIMAUDD,SIIMAUDT,SIIMAUDP,SIIMAUDR,SIIMAUDS:      
                    SIIMAUDO,SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIIM                                                                          
          UPDATE    SINAUDIM;SIIMAUDD,SIIMAUDT,SIIMAUDP,SIIMAUDR,SIIMAUDS:      
                    SIIMAUDO,SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          RETURN
.
AWSIIM    RESET     KEY19                                                       
          WRITE     SINAUDIM,KEY19;SIIMAUDD,SIIMAUDT,SIIMAUDP,SIIMAUDR,SIIMAUDS:
                    SIIMAUDO,SIIMCST,SIIMCAT,SIIMSEQ,SIIMMAX,SIIMREQ:           
                        SIIMQOH,SIIMUR1,SIIMUR2,SIIMUD1,SIIMUD2,SIIMUC1:        
                        SIIMUC2,SIIMUY1,SIIMUY2,SIIMWAR,SIIMSPA                 
          RETURN
.
ADSIIM    RESET     KEY19                                                       
          DELETE    SINAUDIM,KEY19;                                             
          RETURN
.
