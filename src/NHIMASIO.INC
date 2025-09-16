.
. NHIMASIO    
. --------
. Filename     : nhimasaf.dat
.
RSNHMAS1  RESET     KEY7                                                        
          READ      NHIMASA1,KEY7;;                                             
          RETURN
.
RANHMAS1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      NHIMASA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNHMAS1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      NHIMASA1,KEY7;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2: 
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNHMAS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NHIMASA1;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNHMAS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NHIMASA1;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNHMAS1                                                                        
          UPDATE    NHIMASA1;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRNHMAS1  RESET     KEY7                                                        
          WRITE     NHIMASA1,KEY7;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2: 
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA      
          RETURN
.
DENHMAS1  RESET     KEY7                                                        
          DELETE    NHIMASA1,KEY7                                               
          RETURN
.
RLNHMAS1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     NHIMASA1,KEY7;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2: 
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLNHMAS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   NHIMASA1;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLNHMAS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   NHIMASA1;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUNHMAS1  RESET     KEY7                                                        
          UNLOCK    NHIMASA1                                                    
          RETURN
.
RSNHMAS2  RESET     KEY8                                                        
          READ      NHIMASA2,KEY8;;                                             
          RETURN
.
RANHMAS2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      NHIMASA2,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNHMAS2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      NHIMASA2,KEY8;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2: 
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNHMAS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NHIMASA2;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNHMAS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NHIMASA2;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNHMAS2                                                                        
          UPDATE    NHIMASA2;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA      
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRNHMAS2  RESET     KEY8                                                        
          WRITE     NHIMASA2,KEY8;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2: 
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA      
          RETURN
.
DENHMAS2  RESET     KEY8                                                        
          DELETE    NHIMASA2,KEY8                                               
          RETURN
.
RLNHMAS2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     NHIMASA2,KEY8;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2: 
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLNHMAS2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   NHIMASA2;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLNHMAS2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   NHIMASA2;NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUNHMAS2  RESET     KEY8                                                        
          UNLOCK    NHIMASA2                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WANHMA00
          MOVE      "   80",AUDTSECT
          MOVE      "140",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WANHMA99 IF NOT EQUAL
.
          PACK     NHMAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",NHMAAUDD
          CLOCK     TIME,NHMAAUDT
          MOVE      PORT,NHMAAUDP
          LOAD      NHMAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,NHMAAUDS
          MOVE      PASSCODE,NHMAAUDO
          PACK      KEY19,NHMAAUDD,NHMAAUDT,NHMAAUDP,NHMAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWNHMAS
WANHMA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DANHMA00
          MOVE      "   80",AUDTSECT
          MOVE      "140",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DANHMA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADNHMAS
DANHMA99  RETURN
ASNHMAS   RESET     KEY19                                                       
          READ      NHIAUDMA,KEY19;;                                            
          RETURN
.
AKNHMAS                                                                         
          MOVE      ZERO,OVRCD
          READKS    NHIAUDMA;NHMAAUDD,NHMAAUDT,NHMAAUDP,NHMAAUDR,NHMAAUDS:      
                    NHMAAUDO,NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
AUNHMAS                                                                         
          UPDATE    NHIAUDMA;NHMAAUDD,NHMAAUDT,NHMAAUDP,NHMAAUDR,NHMAAUDS:      
                    NHMAAUDO,NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA       
          RETURN
.
AWNHMAS   RESET     KEY19                                                       
          WRITE     NHIAUDMA,KEY19;NHMAAUDD,NHMAAUDT,NHMAAUDP,NHMAAUDR,NHMAAUDS:
                    NHMAAUDO,NHMANMPI,NHMAURNO,NHMASURN,NHMAGIV1,NHMAGIV2:      
                        NHMAGIV3,NHMAPREI,NHMAADD1,NHMAADD2,NHMAADD3,NHMAADD4:  
                        NHMAADD5,NHMADOB,NHMADDTH,NHMADOMC,NHMARES,NHMAETH:     
                        NHMASEX,NHMADAT,NHMATIM,NHMAETH2,NHMAETH3:
                        NHMAETH4,NHMAETH5,NHMAETH6,NHMASPA      
          RETURN
.
ADNHMAS   RESET     KEY19                                                       
          DELETE    NHIAUDMA,KEY19;                                             
          RETURN
.
