.
. OPRTPSIO    
. --------
. Filename     : oprtpsaf.dat
.
RSOPTPS1  RESET     KEY6                                                        
          READ      OPRTPSA1,KEY6;;                                             
          RETURN
.
RAOPTPS1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      OPRTPSA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPTPS1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      OPRTPSA1,KEY6;OPTPSPEC,OPTPTRPR,OPTPHOSP,OPTPSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPTPS1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRTPSA1;OPTPSPEC,OPTPTRPR,OPTPHOSP,OPTPSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPTPS1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRTPSA1;OPTPSPEC,OPTPTRPR,OPTPHOSP,OPTPSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPTPS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRTPSA1;OPTPSPEC,OPTPTRPR,OPTPHOSP,OPTPSPAR                
          RETURN
.
WROPTPS1  RESET     KEY6                                                        
          WRITE     OPRTPSA1,KEY6;OPTPSPEC,OPTPTRPR,OPTPHOSP,OPTPSPAR           
          RETURN
.
DEOPTPS1  RESET     KEY6                                                        
          DELETE    OPRTPSA1,KEY6                                               
          RETURN
.
