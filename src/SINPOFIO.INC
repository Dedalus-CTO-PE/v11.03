.
. SINPOFIO    
. --------
. Filename     : sinpofaf.dat
.
RSSIPF1   RESET     KEY12                                                       
          READ      SINPOFA1,KEY12;;                                            
          RETURN
.
RASIPF1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOFA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPF1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOFA1,KEY12;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:     
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOFA1;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOFA1;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPF1                                                                         
          UPDATE    SINPOFA1;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          RETURN
.
WRSIPF1   RESET     KEY12                                                       
          WRITE     SINPOFA1,KEY12;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:     
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          RETURN
.
DESIPF1   RESET     KEY12                                                       
          DELETE    SINPOFA1,KEY12                                              
          RETURN
.
RSSIPF2   RESET     KEY12                                                       
          READ      SINPOFA2,KEY12;;                                            
          RETURN
.
RASIPF2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOFA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPF2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOFA2,KEY12;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:     
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPF2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOFA2;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPF2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOFA2;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPF2                                                                         
          UPDATE    SINPOFA2;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          RETURN
.
WRSIPF2   RESET     KEY12                                                       
          WRITE     SINPOFA2,KEY12;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:     
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          RETURN
.
DESIPF2   RESET     KEY12                                                       
          DELETE    SINPOFA2,KEY12                                              
          RETURN
.
RSSIPF3   RESET     KEY6                                                        
          READ      SINPOFA3,KEY6;;                                             
          RETURN
.
RASIPF3   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINPOFA3,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPF3   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINPOFA3,KEY6;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:      
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPF3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOFA3;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPF3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOFA3;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPF3                                                                         
          UPDATE    SINPOFA3;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          RETURN
.
WRSIPF3   RESET     KEY6                                                        
          WRITE     SINPOFA3,KEY6;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:      
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          RETURN
.
DESIPF3   RESET     KEY6                                                        
          DELETE    SINPOFA3,KEY6                                               
          RETURN
.
RSSIPF4   RESET     KEY20                                                       
          READ      SINPOFA4,KEY20;;                                            
          RETURN
.
RASIPF4   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOFA4,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPF4   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOFA4,KEY20;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:     
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPF4                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOFA4;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPF4                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOFA4;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPF4                                                                         
          UPDATE    SINPOFA4;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          RETURN
.
WRSIPF4   RESET     KEY20                                                       
          WRITE     SINPOFA4,KEY20;SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:     
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          RETURN
.
DESIPF4   RESET     KEY20                                                       
          DELETE    SINPOFA4,KEY20                                              
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIPF00
          MOVE      "   24",AUDTSECT
          MOVE      "218",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIPF99 IF NOT EQUAL
.
          PACK     SIPFAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIPFAUDD
          CLOCK     TIME,SIPFAUDT
          MOVE      PORT,SIPFAUDP
          LOAD      SIPFAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIPFAUDS
          MOVE      PASSCODE,SIPFAUDO
          PACK      KEY19,SIPFAUDD,SIPFAUDT,SIPFAUDP,SIPFAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIPF
WASIPF99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIPF00
          MOVE      "   24",AUDTSECT
          MOVE      "218",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIPF99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIPF
DASIPF99  RETURN
ASSIPF    RESET     KEY19                                                       
          READ      SINAUDPF,KEY19;;                                            
          RETURN
.
AKSIPF                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDPF;SIPFAUDD,SIPFAUDT,SIPFAUDP,SIPFAUDR,SIPFAUDS:      
                    SIPFAUDO,SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIPF                                                                          
          UPDATE    SINAUDPF;SIPFAUDD,SIPFAUDT,SIPFAUDP,SIPFAUDR,SIPFAUDS:      
                    SIPFAUDO,SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          RETURN
.
AWSIPF    RESET     KEY19                                                       
          WRITE     SINAUDPF,KEY19;SIPFAUDD,SIPFAUDT,SIPFAUDP,SIPFAUDR,SIPFAUDS:
                    SIPFAUDO,SIPFPON,SIPFITM,SIPFREC,SIPFDAT,SIPFDEL:           
                        SIPFQTY,SIPFCST,SIPFGST,SIPFSUT,SIPFNDD,SIPFDUP:        
                        SIPFUDT,SIPFEDD,SIPFSPA                                 
          RETURN
.
ADSIPF    RESET     KEY19                                                       
          DELETE    SINAUDPF,KEY19;                                             
          RETURN
.
