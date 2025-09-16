. *----------------------------------------------------------------------
. * Include Name  :   PMSLETIO.INC
. *
. * Function      :   IO Routines Include for Patient System
. *                   Letter Selection File
. *
. * File Name     :   pmsletaf.dat
. *
. * Modifications :   V9.02.01 30/08/2001 Dean Cramer
. *                                       Created.
. *
. *----------------------------------------------------------------------
.
RSPMLET1  RESET     KEY4                                                        
          READ      PMSLETA1,KEY4;;                                             
          RETURN
.
RAPMLET1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSLETA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLET1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSLETA1,KEY4;PMLESEID,PMLESEDC,PMLEURFR,PMLEURTO,PMLESUFR: 
                        PMLESUTO,PMLEADFR,PMLEADTO,PMLEDDFR,PMLEDDTO,PMLEATFR:  
                        PMLEATTO,PMLECLFR,PMLECLTO,PMLECCFR,PMLECCTO,PMLEACFR:  
                        PMLEACTO,PMLERSFR,PMLERSTO,PMLEDSFR,PMLEDSTO,PMLECBFR:  
                        PMLECBTO,PMLERLFR,PMLERLTO,PMLEHFFR,PMLEHFTO,PMLEDCST:  
                        PMLESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLET1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSLETA1;PMLESEID,PMLESEDC,PMLEURFR,PMLEURTO,PMLESUFR:      
                        PMLESUTO,PMLEADFR,PMLEADTO,PMLEDDFR,PMLEDDTO,PMLEATFR:  
                        PMLEATTO,PMLECLFR,PMLECLTO,PMLECCFR,PMLECCTO,PMLEACFR:  
                        PMLEACTO,PMLERSFR,PMLERSTO,PMLEDSFR,PMLEDSTO,PMLECBFR:  
                        PMLECBTO,PMLERLFR,PMLERLTO,PMLEHFFR,PMLEHFTO,PMLEDCST:  
                        PMLESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLET1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSLETA1;PMLESEID,PMLESEDC,PMLEURFR,PMLEURTO,PMLESUFR:      
                        PMLESUTO,PMLEADFR,PMLEADTO,PMLEDDFR,PMLEDDTO,PMLEATFR:  
                        PMLEATTO,PMLECLFR,PMLECLTO,PMLECCFR,PMLECCTO,PMLEACFR:  
                        PMLEACTO,PMLERSFR,PMLERSTO,PMLEDSFR,PMLEDSTO,PMLECBFR:  
                        PMLECBTO,PMLERLFR,PMLERLTO,PMLEHFFR,PMLEHFTO,PMLEDCST:  
                        PMLESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLET1                                                                        
          UPDATE    PMSLETA1;PMLESEID,PMLESEDC,PMLEURFR,PMLEURTO,PMLESUFR:      
                        PMLESUTO,PMLEADFR,PMLEADTO,PMLEDDFR,PMLEDDTO,PMLEATFR:  
                        PMLEATTO,PMLECLFR,PMLECLTO,PMLECCFR,PMLECCTO,PMLEACFR:  
                        PMLEACTO,PMLERSFR,PMLERSTO,PMLEDSFR,PMLEDSTO,PMLECBFR:  
                        PMLECBTO,PMLERLFR,PMLERLTO,PMLEHFFR,PMLEHFTO,PMLEDCST:  
                        PMLESPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMLET1  RESET     KEY4                                                        
          WRITE     PMSLETA1,KEY4;PMLESEID,PMLESEDC,PMLEURFR,PMLEURTO,PMLESUFR: 
                        PMLESUTO,PMLEADFR,PMLEADTO,PMLEDDFR,PMLEDDTO,PMLEATFR:  
                        PMLEATTO,PMLECLFR,PMLECLTO,PMLECCFR,PMLECCTO,PMLEACFR:  
                        PMLEACTO,PMLERSFR,PMLERSTO,PMLEDSFR,PMLEDSTO,PMLECBFR:  
                        PMLECBTO,PMLERLFR,PMLERLTO,PMLEHFFR,PMLEHFTO,PMLEDCST:  
                        PMLESPAR                                                
          RETURN
.
DEPMLET1  RESET     KEY4                                                        
          DELETE    PMSLETA1,KEY4                                               
          RETURN
.
RLPMLET1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     PMSLETA1,KEY4;PMLESEID,PMLESEDC,PMLEURFR,PMLEURTO,PMLESUFR: 
                        PMLESUTO,PMLEADFR,PMLEADTO,PMLEDDFR,PMLEDDTO,PMLEATFR:  
                        PMLEATTO,PMLECLFR,PMLECLTO,PMLECCFR,PMLECCTO,PMLEACFR:  
                        PMLEACTO,PMLERSFR,PMLERSTO,PMLEDSFR,PMLEDSTO,PMLECBFR:  
                        PMLECBTO,PMLERLFR,PMLERLTO,PMLEHFFR,PMLEHFTO,PMLEDCST:  
                        PMLESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMLET1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSLETA1;PMLESEID,PMLESEDC,PMLEURFR,PMLEURTO,PMLESUFR:      
                        PMLESUTO,PMLEADFR,PMLEADTO,PMLEDDFR,PMLEDDTO,PMLEATFR:  
                        PMLEATTO,PMLECLFR,PMLECLTO,PMLECCFR,PMLECCTO,PMLEACFR:  
                        PMLEACTO,PMLERSFR,PMLERSTO,PMLEDSFR,PMLEDSTO,PMLECBFR:  
                        PMLECBTO,PMLERLFR,PMLERLTO,PMLEHFFR,PMLEHFTO,PMLEDCST:  
                        PMLESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMLET1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSLETA1;PMLESEID,PMLESEDC,PMLEURFR,PMLEURTO,PMLESUFR:      
                        PMLESUTO,PMLEADFR,PMLEADTO,PMLEDDFR,PMLEDDTO,PMLEATFR:  
                        PMLEATTO,PMLECLFR,PMLECLTO,PMLECCFR,PMLECCTO,PMLEACFR:  
                        PMLEACTO,PMLERSFR,PMLERSTO,PMLEDSFR,PMLEDSTO,PMLECBFR:  
                        PMLECBTO,PMLERLFR,PMLERLTO,PMLEHFFR,PMLEHFTO,PMLEDCST:  
                        PMLESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMLET1  RESET     KEY4                                                        
          UNLOCK    PMSLETA1                                                    
          RETURN
.
