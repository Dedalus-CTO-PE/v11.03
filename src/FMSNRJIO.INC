.
. FMSNRJIO    
. --------
. Filename     : fmsnrjaf.dat
.
RSFMNJ1   RESET     KEY7                                                        
          READ      FMSNRJA1,KEY7;;                                             
          RETURN
.
RAFMNJ1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      FMSNRJA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNJ1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      FMSNRJA1,KEY7;FMNJUID,FMNJSEQ,FMNJDES,FMNJSTA,FMNJTYP:      
                        FMNJREP,FMNJCMD,FMNJSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNJ1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRJA1;FMNJUID,FMNJSEQ,FMNJDES,FMNJSTA,FMNJTYP:           
                        FMNJREP,FMNJCMD,FMNJSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNJ1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRJA1;FMNJUID,FMNJSEQ,FMNJDES,FMNJSTA,FMNJTYP:           
                        FMNJREP,FMNJCMD,FMNJSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNJ1                                                                         
          UPDATE    FMSNRJA1;FMNJUID,FMNJSEQ,FMNJDES,FMNJSTA,FMNJTYP:           
                        FMNJREP,FMNJCMD,FMNJSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMNJ1   RESET     KEY7                                                        
          WRITE     FMSNRJA1,KEY7;FMNJUID,FMNJSEQ,FMNJDES,FMNJSTA,FMNJTYP:      
                        FMNJREP,FMNJCMD,FMNJSPA                                 
          RETURN
.
DEFMNJ1   RESET     KEY7                                                        
          DELETE    FMSNRJA1,KEY7                                               
          RETURN
.
RLFMNJ1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     FMSNRJA1,KEY7;FMNJUID,FMNJSEQ,FMNJDES,FMNJSTA,FMNJTYP:      
                        FMNJREP,FMNJCMD,FMNJSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMNJ1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSNRJA1;FMNJUID,FMNJSEQ,FMNJDES,FMNJSTA,FMNJTYP:           
                        FMNJREP,FMNJCMD,FMNJSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMNJ1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSNRJA1;FMNJUID,FMNJSEQ,FMNJDES,FMNJSTA,FMNJTYP:           
                        FMNJREP,FMNJCMD,FMNJSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMNJ1   RESET     KEY7                                                        
          UNLOCK    FMSNRJA1                                                    
          RETURN
.
