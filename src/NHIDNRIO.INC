.
. NHIDNRIO    
. --------
. Filename     : nhidnraf.dat
.
. Mods         : 27/02/1998  Steve Armstrong  Dgate
.                Added broadcast messages for Dgate
.
RSNHDNR1  RESET     KEY7                                                        
          READ      NHIDNRA1,KEY7;;                                             
          RETURN
.
RANHDNR1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      NHIDNRA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNHDNR1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      NHIDNRA1,KEY7;NHDNNMPI,NHDNDONR,NHDNCNSU,NHDNCNG1,NHDNCNG2: 
                        NHDNCNG3,NHDNCNPI,NHDNCNA1,NHDNCNA2,NHDNCNA3,NHDNCNA4:  
                        NHDNCNA5,NHDNCREL,NHDNCWPH,NHDNCAPH,NHDNDAT,NHDNTIM:    
                        NHDNSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNHDNR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NHIDNRA1;NHDNNMPI,NHDNDONR,NHDNCNSU,NHDNCNG1,NHDNCNG2:      
                        NHDNCNG3,NHDNCNPI,NHDNCNA1,NHDNCNA2,NHDNCNA3,NHDNCNA4:  
                        NHDNCNA5,NHDNCREL,NHDNCWPH,NHDNCAPH,NHDNDAT,NHDNTIM:    
                        NHDNSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNHDNR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NHIDNRA1;NHDNNMPI,NHDNDONR,NHDNCNSU,NHDNCNG1,NHDNCNG2:      
                        NHDNCNG3,NHDNCNPI,NHDNCNA1,NHDNCNA2,NHDNCNA3,NHDNCNA4:  
                        NHDNCNA5,NHDNCREL,NHDNCWPH,NHDNCAPH,NHDNDAT,NHDNTIM:    
                        NHDNSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNHDNR1  UPDATE    NHIDNRA1;NHDNNMPI,NHDNDONR,NHDNCNSU,NHDNCNG1,NHDNCNG2:      
                        NHDNCNG3,NHDNCNPI,NHDNCNA1,NHDNCNA2,NHDNCNA3,NHDNCNA4:  
                        NHDNCNA5,NHDNCREL,NHDNCWPH,NHDNCAPH,NHDNDAT,NHDNTIM:    
                        NHDNSPA                                                 
          RETURN
.
WRNHDNR1  RESET     KEY7                                                        
          WRITE     NHIDNRA1,KEY7;NHDNNMPI,NHDNDONR,NHDNCNSU,NHDNCNG1,NHDNCNG2: 
                        NHDNCNG3,NHDNCNPI,NHDNCNA1,NHDNCNA2,NHDNCNA3,NHDNCNA4:  
                        NHDNCNA5,NHDNCREL,NHDNCWPH,NHDNCAPH,NHDNDAT,NHDNTIM:    
                        NHDNSPA                                                 
          RETURN
.
DENHDNR1  RESET     KEY7                                                        
          DELETE    NHIDNRA1,KEY7                                               
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WANHDN00
          MOVE      "   80",AUDTSECT
          MOVE      "141",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WANHDN99 IF NOT EQUAL
.
          PACK     NHDNAUDD,CCC,CYY,CMM,CDD
          REP       " 0",NHDNAUDD
          CLOCK     TIME,NHDNAUDT
          MOVE      PORT,NHDNAUDP
          LOAD      NHDNAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,NHDNAUDS
          MOVE      PASSCODE,NHDNAUDO
          PACK      KEY19,NHDNAUDD,NHDNAUDT,NHDNAUDP,NHDNAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWNHDN
WANHDN99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DANHDN00
          MOVE      "   80",AUDTSECT
          MOVE      "141",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DANHDN99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADNHDN
DANHDN99  RETURN
ASNHDNR   RESET     KEY19                                                       
          READ      NHIAUDDN,KEY19;;                                            
          RETURN
.
AKNHDNR                                                                         
          MOVE      ZERO,OVRCD
          READKS    NHIAUDDN;NHDNAUDD,NHDNAUDT,NHDNAUDP,NHDNAUDR,NHDNAUDS:      
                    NHDNAUDO,NHDNNMPI,NHDNDONR,NHDNCNSU,NHDNCNG1,NHDNCNG2:      
                        NHDNCNG3,NHDNCNPI,NHDNCNA1,NHDNCNA2,NHDNCNA3,NHDNCNA4:  
                        NHDNCNA5,NHDNCREL,NHDNCWPH,NHDNCAPH,NHDNDAT,NHDNTIM:    
                        NHDNSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUNHDNR                                                                         
          UPDATE    NHIAUDDN;NHDNAUDD,NHDNAUDT,NHDNAUDP,NHDNAUDR,NHDNAUDS:      
                    NHDNAUDO,NHDNNMPI,NHDNDONR,NHDNCNSU,NHDNCNG1,NHDNCNG2:      
                        NHDNCNG3,NHDNCNPI,NHDNCNA1,NHDNCNA2,NHDNCNA3,NHDNCNA4:  
                        NHDNCNA5,NHDNCREL,NHDNCWPH,NHDNCAPH,NHDNDAT,NHDNTIM:    
                        NHDNSPA                                                 
          RETURN
.
AWNHDNR   RESET     KEY19                                                       
          WRITE     NHIAUDDN,KEY19;NHDNAUDD,NHDNAUDT,NHDNAUDP,NHDNAUDR,NHDNAUDS:
                    NHDNAUDO,NHDNNMPI,NHDNDONR,NHDNCNSU,NHDNCNG1,NHDNCNG2:      
                        NHDNCNG3,NHDNCNPI,NHDNCNA1,NHDNCNA2,NHDNCNA3,NHDNCNA4:  
                        NHDNCNA5,NHDNCREL,NHDNCWPH,NHDNCAPH,NHDNDAT,NHDNTIM:    
                        NHDNSPA                                                 
          RETURN
.
ADNHDNR   RESET     KEY19                                                       
          DELETE    NHIAUDDN,KEY19;                                             
          RETURN
