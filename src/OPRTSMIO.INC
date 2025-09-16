. V9.02.01  03/01/2002 Ashwin Add OPTSINST
.
. OPRTSMIO    
. --------
. Filename     : oprtsmaf.dat
.
RSOPTSM1  RESET     KEY35                                                       
          READ      OPRTSMA1,KEY35;;                                            
          RETURN
.
RAOPTSM1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTSMA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPTSM1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTSMA1,KEY35;OPTSUNID,OPTSTMNO,DOPTSSIN,OPTSSCDE,OPTSSDAT:
                        OPTSSTIM,OPTSEDAT,OPTSETIM,OPTSSLEV,OPTSSTYP,OPTSINST:  
                        OPTSUY01,OPTSSPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DOPTSSIN,OPTSSIND                                           
          RETURN
.
RKOPTSM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRTSMA1;OPTSUNID,OPTSTMNO,DOPTSSIN,OPTSSCDE,OPTSSDAT:      
                        OPTSSTIM,OPTSEDAT,OPTSETIM,OPTSSLEV,OPTSSTYP,OPTSINST:  
                        OPTSUY01,OPTSSPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DOPTSSIN,OPTSSIND                                           
          RETURN
.
RPOPTSM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRTSMA1;OPTSUNID,OPTSTMNO,DOPTSSIN,OPTSSCDE,OPTSSDAT:      
                        OPTSSTIM,OPTSEDAT,OPTSETIM,OPTSSLEV,OPTSSTYP,OPTSINST:  
                        OPTSUY01,OPTSSPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DOPTSSIN,OPTSSIND                                           
          RETURN
.
UPOPTSM1                                                                        
          MOVE      OPTSSIND,DOPTSSIN                                           
          UPDATE    OPRTSMA1;OPTSUNID,OPTSTMNO,DOPTSSIN,OPTSSCDE,OPTSSDAT:      
                        OPTSSTIM,OPTSEDAT,OPTSETIM,OPTSSLEV,OPTSSTYP,OPTSINST:  
                        OPTSUY01,OPTSSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPTSM1  RESET     KEY35                                                       
          MOVE      OPTSSIND,DOPTSSIN                                           
          WRITE     OPRTSMA1,KEY35;OPTSUNID,OPTSTMNO,DOPTSSIN,OPTSSCDE,OPTSSDAT:
                        OPTSSTIM,OPTSEDAT,OPTSETIM,OPTSSLEV,OPTSSTYP,OPTSINST:  
                        OPTSUY01,OPTSSPAR                                       
          RETURN
.
DEOPTSM1  RESET     KEY35                                                       
          DELETE    OPRTSMA1,KEY35                                              
          RETURN
.
RLOPTSM1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     OPRTSMA1,KEY35;OPTSUNID,OPTSTMNO,DOPTSSIN,OPTSSCDE,OPTSSDAT:
                        OPTSSTIM,OPTSEDAT,OPTSETIM,OPTSSLEV,OPTSSTYP,OPTSINST:  
                        OPTSUY01,OPTSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPTSSIN,OPTSSIND                                           
          RETURN
.
KLOPTSM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OPRTSMA1;OPTSUNID,OPTSTMNO,DOPTSSIN,OPTSSCDE,OPTSSDAT:      
                        OPTSSTIM,OPTSEDAT,OPTSETIM,OPTSSLEV,OPTSSTYP,OPTSINST:  
                        OPTSUY01,OPTSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPTSSIN,OPTSSIND                                           
          RETURN
.
PLOPTSM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OPRTSMA1;OPTSUNID,OPTSTMNO,DOPTSSIN,OPTSSCDE,OPTSSDAT:      
                        OPTSSTIM,OPTSEDAT,OPTSETIM,OPTSSLEV,OPTSSTYP,OPTSINST:  
                        OPTSUY01,OPTSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPTSSIN,OPTSSIND                                           
          RETURN
.
UUOPTSM1  RESET     KEY35                                                       
          UNLOCK    OPRTSMA1                                                    
          RETURN
.
