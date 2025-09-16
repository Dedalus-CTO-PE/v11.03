.
. FMSLMAIO    
. --------
. Filename     : fmslmaaf.dat
.
RSFMLA1   RESET     KEY2                                                        
          READ      FMSLMAA1,KEY2;;                                             
          RETURN
.
RAFMLA1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      FMSLMAA1,KEY2;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMLA1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      FMSLMAA1,KEY2;FMLALEDG,FMLADESC,FMLACYRR,FMLAPERS,FMLABNK:  
                        FMLACRD,FMLADIS,FMLADEB,FMLAPAY,FMLAIFT,FMLAAGST:       
                        FMLAPER,FMLAPTY,FMLAABP,FMLABNK2,FMLAPAYG,FMLASPAR      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMLA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSLMAA1;FMLALEDG,FMLADESC,FMLACYRR,FMLAPERS,FMLABNK:       
                        FMLACRD,FMLADIS,FMLADEB,FMLAPAY,FMLAIFT,FMLAAGST:       
                        FMLAPER,FMLAPTY,FMLAABP,FMLABNK2,FMLAPAYG,FMLASPAR      
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMLA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSLMAA1;FMLALEDG,FMLADESC,FMLACYRR,FMLAPERS,FMLABNK:       
                        FMLACRD,FMLADIS,FMLADEB,FMLAPAY,FMLAIFT,FMLAAGST:       
                        FMLAPER,FMLAPTY,FMLAABP,FMLABNK2,FMLAPAYG,FMLASPAR      
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMLA1                                                                         
          UPDATE    FMSLMAA1;FMLALEDG,FMLADESC,FMLACYRR,FMLAPERS,FMLABNK:       
                        FMLACRD,FMLADIS,FMLADEB,FMLAPAY,FMLAIFT,FMLAAGST:       
                        FMLAPER,FMLAPTY,FMLAABP,FMLABNK2,FMLAPAYG,FMLASPAR      
          RETURN
.
WRFMLA1   RESET     KEY2                                                        
          WRITE     FMSLMAA1,KEY2;FMLALEDG,FMLADESC,FMLACYRR,FMLAPERS,FMLABNK:  
                        FMLACRD,FMLADIS,FMLADEB,FMLAPAY,FMLAIFT,FMLAAGST:       
                        FMLAPER,FMLAPTY,FMLAABP,FMLABNK2,FMLAPAYG,FMLASPAR      
          RETURN
.
DEFMLA1   RESET     KEY2                                                        
          DELETE    FMSLMAA1,KEY2                                               
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAFMLA00
          MOVE      "   51",AUDTSECT
          MOVE      " 46",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAFMLA99 IF NOT EQUAL
.
          PACK     FMLAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",FMLAAUDD
          CLOCK     TIME,FMLAAUDT
          MOVE      PORT,FMLAAUDP
          LOAD      FMLAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,FMLAAUDS
          MOVE      PASSCODE,FMLAAUDO
          PACK      KEY19,FMLAAUDD,FMLAAUDT,FMLAAUDP,FMLAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWFMLA
WAFMLA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAFMLA00
          MOVE      "   51",AUDTSECT
          MOVE      " 46",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAFMLA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADFMLA
DAFMLA99  RETURN
ASFMLA    RESET     KEY19                                                       
          READ      FMSAUDLA,KEY19;;                                            
          RETURN
.
AKFMLA                                                                          
          MOVE      ZERO,OVRCD
          READKS    FMSAUDLA;FMLAAUDD,FMLAAUDT,FMLAAUDP,FMLAAUDR,FMLAAUDS:      
                    FMLAAUDO,FMLALEDG,FMLADESC,FMLACYRR,FMLAPERS,FMLABNK:       
                        FMLACRD,FMLADIS,FMLADEB,FMLAPAY,FMLAIFT,FMLAAGST:       
                        FMLAPER,FMLAPTY,FMLAABP,FMLABNK2,FMLAPAYG,FMLASPAR      
          GOTO      OVERCOND IF OVER
          RETURN
.
AUFMLA                                                                          
          UPDATE    FMSAUDLA;FMLAAUDD,FMLAAUDT,FMLAAUDP,FMLAAUDR,FMLAAUDS:      
                    FMLAAUDO,FMLALEDG,FMLADESC,FMLACYRR,FMLAPERS,FMLABNK:       
                        FMLACRD,FMLADIS,FMLADEB,FMLAPAY,FMLAIFT,FMLAAGST:       
                        FMLAPER,FMLAPTY,FMLAABP,FMLABNK2,FMLAPAYG,FMLASPAR      
          RETURN
.
AWFMLA    RESET     KEY19                                                       
          WRITE     FMSAUDLA,KEY19;FMLAAUDD,FMLAAUDT,FMLAAUDP,FMLAAUDR,FMLAAUDS:
                    FMLAAUDO,FMLALEDG,FMLADESC,FMLACYRR,FMLAPERS,FMLABNK:       
                        FMLACRD,FMLADIS,FMLADEB,FMLAPAY,FMLAIFT,FMLAAGST:       
                        FMLAPER,FMLAPTY,FMLAABP,FMLABNK2,FMLAPAYG,FMLASPAR      
          RETURN
.
ADFMLA    RESET     KEY19                                                       
          DELETE    FMSAUDLA,KEY19;                                             
          RETURN
.
