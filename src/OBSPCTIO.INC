.
. OBSPCTIO    
. --------
. Filename     : obspctaf.dat
.
RSOBPT1   RESET     KEY4                                                        
          READ      OBSPCTA1,KEY4;;                                             
          RETURN
.
RAOBPT1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      OBSPCTA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBPT1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      OBSPCTA1,KEY4;OBPTSLID,OBPTSDIR,OBPTURLP,OBPTROLY,OBPTCRDT: 
                        OBPTCLDT,OBPTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBPT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSPCTA1;OBPTSLID,OBPTSDIR,OBPTURLP,OBPTROLY,OBPTCRDT:      
                        OBPTCLDT,OBPTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBPT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSPCTA1;OBPTSLID,OBPTSDIR,OBPTURLP,OBPTROLY,OBPTCRDT:      
                        OBPTCLDT,OBPTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBPT1                                                                         
          UPDATE    OBSPCTA1;OBPTSLID,OBPTSDIR,OBPTURLP,OBPTROLY,OBPTCRDT:      
                        OBPTCLDT,OBPTSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBPT1   RESET     KEY4                                                        
          WRITE     OBSPCTA1,KEY4;OBPTSLID,OBPTSDIR,OBPTURLP,OBPTROLY,OBPTCRDT: 
                        OBPTCLDT,OBPTSPAR                                       
          RETURN
.
DEOBPT1   RESET     KEY4                                                        
          DELETE    OBSPCTA1,KEY4                                               
          RETURN
.
RLOBPT1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     OBSPCTA1,KEY4;OBPTSLID,OBPTSDIR,OBPTURLP,OBPTROLY,OBPTCRDT: 
                        OBPTCLDT,OBPTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBPT1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSPCTA1;OBPTSLID,OBPTSDIR,OBPTURLP,OBPTROLY,OBPTCRDT:      
                        OBPTCLDT,OBPTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBPT1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSPCTA1;OBPTSLID,OBPTSDIR,OBPTURLP,OBPTROLY,OBPTCRDT:      
                        OBPTCLDT,OBPTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBPT1   RESET     KEY4                                                        
          UNLOCK    OBSPCTA1                                                    
          RETURN
.
