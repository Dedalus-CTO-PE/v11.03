.
. PMSWORIO    
. --------
. Filename     : pmsworaf.dat
.
RSPMWOR1  RESET     KEY8                                                        
          READ      PMSWORA1,KEY8;;                                             
          RETURN
.
RAPMWOR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSWORA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMWOR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSWORA1,KEY8;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT: 
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMWOR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSWORA1;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:      
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMWOR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSWORA1;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:      
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMWOR1                                                                        
          UPDATE    PMSWORA1;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:      
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMWOR1  RESET     KEY8                                                        
          WRITE     PMSWORA1,KEY8;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT: 
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          RETURN
.
DEPMWOR1  RESET     KEY8                                                        
          DELETE    PMSWORA1,KEY8                                               
          RETURN
.
RLPMWOR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSWORA1,KEY8;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT: 
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMWOR1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSWORA1;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:      
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMWOR1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSWORA1;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:      
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMWOR1  RESET     KEY8                                                        
          UNLOCK    PMSWORA1                                                    
          RETURN
.
RSPMWOR2  RESET     KEY16                                                       
          READ      PMSWORA2,KEY16;;                                            
          RETURN
.
RAPMWOR2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSWORA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMWOR2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSWORA2,KEY16;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMWOR2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSWORA2;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:      
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMWOR2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSWORA2;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:      
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMWOR2                                                                        
          UPDATE    PMSWORA2;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:      
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMWOR2  RESET     KEY16                                                       
          WRITE     PMSWORA2,KEY16;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          RETURN
.
DEPMWOR2  RESET     KEY16                                                       
          DELETE    PMSWORA2,KEY16                                              
          RETURN
.
RLPMWOR2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSWORA2,KEY16;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMWOR2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSWORA2;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:      
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMWOR2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSWORA2;PMWOADMN,PMWOWDI1,PMWOWDI2,PMWOWDI3,PMWOEDAT:      
                        PMWOCDAT,PMWOCTIM,PMWOCUID,PMWOUDAT,PMWOUTIM,PMWOUUID:  
                        PMWOEDTM,PMWODPST,PMWOCORD,PMWODDES,PMWODTRN,PMWOUDF1:  
                        PMWOUDF2,PMWOUDF3,PMWOUDF4,PMWOUDF5,PMWOUDF6,PMWOUDF7:  
                        PMWOUDF8,PMWOCEXT,PMWOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMWOR2  RESET     KEY16                                                       
          UNLOCK    PMSWORA2                                                    
          RETURN
.
