.
. PATCFAIO    
. --------
. Filename     : patcfaaf.dat
.
RSPTCFA1  RESET     KEY3                                                        
          READ      PATCFAA1,KEY3;;                                             
          RETURN
.
RAPTCFA1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PATCFAA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCFA1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PATCFAA1,KEY3;PTCFCLAI,PTCFFACD,PTCFNDFP,PTCFOCGR,PTCFCEFR: 
                                  PTCFMCPS,PTCFHINV,PTCFRHCD,PTCFRHFT,PTCFHDAT: 
                                  PTCFHFGC,PTCFOHDT,PTCFOHTM,PTCFOHUI,PTCFSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCFA1  MOVE      ZERO,OVRCD                                                  
          READKS    PATCFAA1;PTCFCLAI,PTCFFACD,PTCFNDFP,PTCFOCGR,PTCFCEFR:      
                             PTCFMCPS,PTCFHINV,PTCFRHCD,PTCFRHFT,PTCFHDAT:      
                             PTCFHFGC,PTCFOHDT,PTCFOHTM,PTCFOHUI,PTCFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCFA1  MOVE      ZERO,OVRCD                                                  
          READKP    PATCFAA1;PTCFCLAI,PTCFFACD,PTCFNDFP,PTCFOCGR,PTCFCEFR:      
                             PTCFMCPS,PTCFHINV,PTCFRHCD,PTCFRHFT,PTCFHDAT:      
                             PTCFHFGC,PTCFOHDT,PTCFOHTM,PTCFOHUI,PTCFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCFA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATCFAA1;PTCFCLAI,PTCFFACD,PTCFNDFP,PTCFOCGR,PTCFCEFR:      
                             PTCFMCPS,PTCFHINV,PTCFRHCD,PTCFRHFT,PTCFHDAT:      
                             PTCFHFGC,PTCFOHDT,PTCFOHTM,PTCFOHUI,PTCFSPAR       
          RETURN
.
WRPTCFA1  RESET     KEY3                                                        
          WRITE     PATCFAA1,KEY3;PTCFCLAI,PTCFFACD,PTCFNDFP,PTCFOCGR,PTCFCEFR: 
                                  PTCFMCPS,PTCFHINV,PTCFRHCD,PTCFRHFT,PTCFHDAT: 
                                  PTCFHFGC,PTCFOHDT,PTCFOHTM,PTCFOHUI,PTCFSPAR  
          RETURN
.
DEPTCFA1  RESET     KEY3                                                        
          DELETE    PATCFAA1,KEY3                                               
          RETURN
.
