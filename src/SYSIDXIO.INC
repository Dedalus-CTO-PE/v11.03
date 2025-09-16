.
RSSYID1   RESET     KEY5                                                        
          READ      SYSIDXA1,KEY5;;                                             
          RETURN
.
RASYID1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SYSIDXA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYID1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SYSIDXA1,KEY5;SYIDSYS,SYIDFIL,SYIDIDX,SYIDDES,SYIDFL1:      
                             SYIDFL2,SYIDFL3,SYIDFL4,SYIDFL5,SYIDFL6,SYIDFL7:   
                             SYIDFL8,SYIDIUD,SYIDSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSYID1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SYSIDXA1;SYIDSYS,SYIDFIL,SYIDIDX,SYIDDES,SYIDFL1:           
                             SYIDFL2,SYIDFL3,SYIDFL4,SYIDFL5,SYIDFL6,SYIDFL7:   
                             SYIDFL8,SYIDIUD,SYIDSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSYID1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SYSIDXA1;SYIDSYS,SYIDFIL,SYIDIDX,SYIDDES,SYIDFL1:           
                             SYIDFL2,SYIDFL3,SYIDFL4,SYIDFL5,SYIDFL6,SYIDFL7:   
                             SYIDFL8,SYIDIUD,SYIDSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSYID1                                                                         
          PACK      SYIDSPA,SP70,SP30
          UPDATE    SYSIDXA1;SYIDSYS,SYIDFIL,SYIDIDX,SYIDDES,SYIDFL1:           
                             SYIDFL2,SYIDFL3,SYIDFL4,SYIDFL5,SYIDFL6,SYIDFL7:   
                             SYIDFL8,SYIDIUD,SYIDSPA
          RETURN
.
WRSYID1   RESET     KEY5                                                        
          PACK      SYIDSPA,SP70,SP30
          WRITE     SYSIDXA1,KEY5;SYIDSYS,SYIDFIL,SYIDIDX,SYIDDES,SYIDFL1:      
                             SYIDFL2,SYIDFL3,SYIDFL4,SYIDFL5,SYIDFL6,SYIDFL7:   
                             SYIDFL8,SYIDIUD,SYIDSPA
          RETURN
.
DESYID1   RESET     KEY5                                                        
          DELETE    SYSIDXA1,KEY5                                               
          RETURN
.
