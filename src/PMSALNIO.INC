.
. PMSALNIO    
. --------
. Filename     : pmsalnaf.dat
.
RSPMALN1  RESET     KEY19                                                       
          READ      PMSALNA1,KEY19;;                                            
          RETURN
.
RAPMALN1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSALNA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMALN1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSALNA1,KEY19;PMANURNO,PMANACAT,PMANACOD,PMANCNTR,PMANLNNO:
                        PMANCOMM,PMANUSID,PMANSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMALN1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSALNA1;PMANURNO,PMANACAT,PMANACOD,PMANCNTR,PMANLNNO:      
                        PMANCOMM,PMANUSID,PMANSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMALN1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSALNA1;PMANURNO,PMANACAT,PMANACOD,PMANCNTR,PMANLNNO:      
                        PMANCOMM,PMANUSID,PMANSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMALN1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSALNA1;PMANURNO,PMANACAT,PMANACOD,PMANCNTR,PMANLNNO:      
                        PMANCOMM,PMANUSID,PMANSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMALN1  RESET     KEY19                                                       
          WRITE     PMSALNA1,KEY19;PMANURNO,PMANACAT,PMANACOD,PMANCNTR,PMANLNNO:
                        PMANCOMM,PMANUSID,PMANSPAR                              
          RETURN
.
DEPMALN1  RESET     KEY19                                                       
          DELETE    PMSALNA1,KEY19                                              
          RETURN
.
RLPMALN1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PMSALNA1,KEY19;PMANURNO,PMANACAT,PMANACOD,PMANCNTR,PMANLNNO:
                        PMANCOMM,PMANUSID,PMANSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMALN1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSALNA1;PMANURNO,PMANACAT,PMANACOD,PMANCNTR,PMANLNNO:      
                        PMANCOMM,PMANUSID,PMANSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMALN1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSALNA1;PMANURNO,PMANACAT,PMANACOD,PMANCNTR,PMANLNNO:      
                        PMANCOMM,PMANUSID,PMANSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMALN1  RESET     KEY19                                                       
          UNLOCK    PMSALNA1                                                    
          RETURN
.
.**************************************
.  Audit
.**************************************
ASPMALN1  RESET     KEY19
          READ      PMSAUDAN,KEY19;;
          RETURN
.
AKPMALN1  MOVE      ZERO,OVRCD
          READKS    PMSAUDAN;PMANAUDD,PMANAUDT,PMANAUDP,PMANAUDR,PMANAUDS:
                    PMANAUDO,PMANURNO,PMANACAT,PMANACOD,PMANCNTR,PMANLNNO:
                        PMANCOMM:
                        PMANUSID,PMANSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AUPMALN1  UPDATE    PMSAUDAN;PMANAUDD,PMANAUDT,PMANAUDP,PMANAUDR,PMANAUDS:
                    PMANAUDO,PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                        PMANLNNO,PMANCOMM:
                        PMANUSID,PMANSPAR
          RETURN
.
AWPMALN1  RESET     KEY19
          WRITE     PMSAUDAN,KEY19;PMANAUDD,PMANAUDT,PMANAUDP,PMANAUDR,PMANAUDS:
                    PMANAUDO,PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                        PMANLNNO,PMANCOMM:
                        PMANUSID,PMANSPAR
          RETURN
.
ADPMALN1  RESET     KEY19
          DELETE    PMSAUDAN,KEY19;
          RETURN
.
ASPMALN2  RESET     KEY27
          READ      PMSAUDA2,KEY27;;
          RETURN
.
AKPMALN2  MOVE      ZERO,OVRCD
          READKS    PMSAUDA2;PMANAUDD,PMANAUDT,PMANAUDP,PMANAUDR,PMANAUDS:
                    PMANAUDO,PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                        PMANLNNO,PMANCOMM:
                        PMANUSID,PMANSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AUPMALN2  UPDATE    PMSAUDA2;PMANAUDD,PMANAUDT,PMANAUDP,PMANAUDR,PMANAUDS:
                    PMANAUDO,PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                        PMANLNNO,PMANCOMM:
                        PMANUSID,PMANSPAR
          RETURN
.
AWPMALN2  RESET     KEY27
          WRITE     PMSAUDA2,KEY27;PMANAUDD,PMANAUDT,PMANAUDP,PMANAUDR,PMANAUDS:
                    PMANAUDO,PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                        PMANLNNO,PMANCOMM:
                        PMANUSID,PMANSPAR
          RETURN
.
ADPMALN2  RESET     KEY27
          DELETE    PMSAUDA2,KEY27;
          RETURN
+
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
.
WAPMAN00  MOVE      "   10",AUDTSECT
          MOVE      "250",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAPMAN99 IF EQUAL
.
          CALL      IBACLOCK
          PACK      PMANAUDD,CCC,CYY,CMM,CDD
          REP       " 0",PMANAUDD
          MOVE      CTIMEIS,PMANAUDT
          MOVE      PORT,PMANAUDP
          LOAD      PMANAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,PMANAUDS
          MOVE      PASSCODE,PMANAUDO
.
          CALL      AWPMALN1                     * Write Audit File
.
WAPMAN99  RETURN
+
