.
. CSMCICIO    
. --------
. Filename     : csmcicaf.dat
.
RSCSIC1   RESET     KEY27                                                       
          READ      CSMCICA1,KEY27;;                                            
          RETURN
.
RACSIC1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCICA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSIC1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCICA1,KEY27;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:     
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSIC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMCICA1;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSIC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMCICA1;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSIC1                                                                         
          UPDATE    CSMCICA1;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCSIC1   RESET     KEY27                                                       
          WRITE     CSMCICA1,KEY27;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:     
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          RETURN
.
DECSIC1   RESET     KEY27                                                       
          DELETE    CSMCICA1,KEY27                                              
          RETURN
.
RLCSIC1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     CSMCICA1,KEY27;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:     
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCSIC1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CSMCICA1;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCSIC1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CSMCICA1;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCSIC1   RESET     KEY27                                                       
          UNLOCK    CSMCICA1                                                    
          RETURN
.
RSCSIC2   RESET     KEY57                                                       
          READ      CSMCICA2,KEY57;;                                            
          RETURN
.
RACSIC2   RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCICA2,KEY57;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSIC2   RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCICA2,KEY57;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:     
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSIC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMCICA2;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSIC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMCICA2;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSIC2                                                                         
          UPDATE    CSMCICA2;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCSIC2   RESET     KEY57                                                       
          WRITE     CSMCICA2,KEY57;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:     
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          RETURN
.
DECSIC2   RESET     KEY57                                                       
          DELETE    CSMCICA2,KEY57                                              
          RETURN
.
RLCSIC2   RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READL     CSMCICA2,KEY57;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:     
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCSIC2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CSMCICA2;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCSIC2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CSMCICA2;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCSIC2   RESET     KEY57                                                       
          UNLOCK    CSMCICA2                                                    
          RETURN
.
RSCSIC3   RESET     KEY27                                                       
          READ      CSMCICA3,KEY27;;                                            
          RETURN
.
RACSIC3   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCICA3,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSIC3   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCICA3,KEY27;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:     
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSIC3                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMCICA3;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSIC3                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMCICA3;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSIC3                                                                         
          UPDATE    CSMCICA3;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCSIC3   RESET     KEY27                                                       
          WRITE     CSMCICA3,KEY27;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:     
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          RETURN
.
DECSIC3   RESET     KEY27                                                       
          DELETE    CSMCICA3,KEY27                                              
          RETURN
.
RLCSIC3   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     CSMCICA3,KEY27;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:     
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCSIC3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CSMCICA3;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCSIC3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CSMCICA3;CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCSIC3   RESET     KEY27                                                       
          UNLOCK    CSMCICA3                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WACSIC00
          MOVE      "   63",AUDTSECT
          MOVE      "160",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WACSIC99 IF NOT EQUAL
.
          PACK     CSICAUDD,CCC,CYY,CMM,CDD
          REP       " 0",CSICAUDD
          CLOCK     TIME,CSICAUDT
          MOVE      PORT,CSICAUDP
          LOAD      CSICAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,CSICAUDS
          MOVE      PASSCODE,CSICAUDO
          PACK      KEY19,CSICAUDD,CSICAUDT,CSICAUDP,CSICAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWCSIC
WACSIC99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DACSIC00
          MOVE      "   63",AUDTSECT
          MOVE      "160",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DACSIC99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADCSIC
DACSIC99  RETURN
ASCSIC    RESET     KEY19                                                       
          READ      CSMAUDIC,KEY19;;                                            
          RETURN
.
AKCSIC                                                                          
          MOVE      ZERO,OVRCD
          READKS    CSMAUDIC;CSICAUDD,CSICAUDT,CSICAUDP,CSICAUDR,CSICAUDS:      
                    CSICAUDO,CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUCSIC                                                                          
          UPDATE    CSMAUDIC;CSICAUDD,CSICAUDT,CSICAUDP,CSICAUDR,CSICAUDS:      
                    CSICAUDO,CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          RETURN
.
AWCSIC    RESET     KEY19                                                       
          WRITE     CSMAUDIC,KEY19;CSICAUDD,CSICAUDT,CSICAUDP,CSICAUDR,CSICAUDS:
                    CSICAUDO,CSICCAT,CSICSUP,CSICSUT,CSICCCT,CSICLCT:           
                        CSICLTM,CSICPNO,CSICPD1,CSICPD2,CSICMAN,CSICAPO:        
                        CSICUR1,CSICUR2,CSICUD1,CSICUD2,CSICUY1,CSICUY2:        
                        CSICSPA                                                 
          RETURN
.
ADCSIC    RESET     KEY19                                                       
          DELETE    CSMAUDIC,KEY19;                                             
          RETURN
.
