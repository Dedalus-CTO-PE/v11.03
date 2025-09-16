.
. DEBSECIO    
. --------
. Filename     : debsecaf.dat
.
RSDBSE1   RESET     KEY12                                                       
          READ      DEBSECA1,KEY12;;                                            
          RETURN
.
RADBSE1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      DEBSECA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBSE1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      DEBSECA1,KEY12;DBSEUSR,DBSEDEP,DBSESPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBSE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBSECA1;DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBSE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBSECA1;DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBSE1                                                                         
          UPDATE    DEBSECA1;DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBSE1   RESET     KEY12                                                       
          WRITE     DEBSECA1,KEY12;DBSEUSR,DBSEDEP,DBSESPA                      
          RETURN
.
DEDBSE1   RESET     KEY12                                                       
          DELETE    DEBSECA1,KEY12                                              
          RETURN
.
RLDBSE1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     DEBSECA1,KEY12;DBSEUSR,DBSEDEP,DBSESPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBSE1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBSECA1;DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBSE1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBSECA1;DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBSE1   RESET     KEY12                                                       
          UNLOCK    DEBSECA1                                                    
          RETURN
.
RSDBSE2   RESET     KEY12                                                       
          READ      DEBSECA2,KEY12;;                                            
          RETURN
.
RADBSE2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      DEBSECA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBSE2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      DEBSECA2,KEY12;DBSEUSR,DBSEDEP,DBSESPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBSE2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBSECA2;DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBSE2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBSECA2;DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBSE2                                                                         
          UPDATE    DEBSECA2;DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBSE2   RESET     KEY12                                                       
          WRITE     DEBSECA2,KEY12;DBSEUSR,DBSEDEP,DBSESPA                      
          RETURN
.
DEDBSE2   RESET     KEY12                                                       
          DELETE    DEBSECA2,KEY12                                              
          RETURN
.
RLDBSE2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     DEBSECA2,KEY12;DBSEUSR,DBSEDEP,DBSESPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBSE2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBSECA2;DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBSE2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBSECA2;DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBSE2   RESET     KEY12                                                       
          UNLOCK    DEBSECA2                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WADBSE00
          MOVE      "   81",AUDTSECT
          MOVE      " 14",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WADBSE99 IF NOT EQUAL
.
          PACK     DBSEAUDD,CCC,CYY,CMM,CDD
          REP       " 0",DBSEAUDD
          CLOCK     TIME,DBSEAUDT
          MOVE      PORT,DBSEAUDP
          LOAD      DBSEAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,DBSEAUDS
          MOVE      PASSCODE,DBSEAUDO
          PACK      KEY19,DBSEAUDD,DBSEAUDT,DBSEAUDP,DBSEAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWDBSE
WADBSE99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DADBSE00
          MOVE      "   81",AUDTSECT
          MOVE      " 14",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DADBSE99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADDBSE
DADBSE99  RETURN
ASDBSE    RESET     KEY19                                                       
          READ      DEBAUDSE,KEY19;;                                            
          RETURN
.
AKDBSE                                                                          
          MOVE      ZERO,OVRCD
          READKS    DEBAUDSE;DBSEAUDD,DBSEAUDT,DBSEAUDP,DBSEAUDR,DBSEAUDS:      
                    DBSEAUDO,DBSEUSR,DBSEDEP,DBSESPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
AUDBSE                                                                          
          UPDATE    DEBAUDSE;DBSEAUDD,DBSEAUDT,DBSEAUDP,DBSEAUDR,DBSEAUDS:      
                    DBSEAUDO,DBSEUSR,DBSEDEP,DBSESPA                            
          RETURN
.
AWDBSE    RESET     KEY19                                                       
          WRITE     DEBAUDSE,KEY19;DBSEAUDD,DBSEAUDT,DBSEAUDP,DBSEAUDR,DBSEAUDS:
                    DBSEAUDO,DBSEUSR,DBSEDEP,DBSESPA                            
          RETURN
.
ADDBSE    RESET     KEY19                                                       
          DELETE    DEBAUDSE,KEY19;                                             
          RETURN
.
