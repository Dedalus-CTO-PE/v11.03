.
. PRITMPIO    
. --------
. Filename     : pritmpaf.dat
.
RSPRTMP1  RESET     KEY35                                                       
          READ      PRITMPA1,KEY35;;                                            
          RETURN
.
RAPRTMP1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PRITMPA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRTMP1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PRITMPA1,KEY35;PRTMUNIQ,PRTMPRAC,PRTMDOCT,PRTMPIND,PRTMCNTR:
                                   PRTMDATE,PRTMTIME,PRTMITYP,PRTMITEM,PRTMSUBI:
                                   PRTMDESC,PRTMTEST,PRTMS4FL,PRTMGSTA,PRTMGSTC:
                                   PRTMQUNT,PRTMCAMT,PRTMIAMT,PRTMSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRTMP1  MOVE      ZERO,OVRCD                                                  
          READKS    PRITMPA1;PRTMUNIQ,PRTMPRAC,PRTMDOCT,PRTMPIND,PRTMCNTR:      
                             PRTMDATE,PRTMTIME,PRTMITYP,PRTMITEM,PRTMSUBI:      
                             PRTMDESC,PRTMTEST,PRTMS4FL,PRTMGSTA,PRTMGSTC:      
                             PRTMQUNT,PRTMCAMT,PRTMIAMT,PRTMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRTMP1  MOVE      ZERO,OVRCD                                                  
          READKP    PRITMPA1;PRTMUNIQ,PRTMPRAC,PRTMDOCT,PRTMPIND,PRTMCNTR:      
                             PRTMDATE,PRTMTIME,PRTMITYP,PRTMITEM,PRTMSUBI:      
                             PRTMDESC,PRTMTEST,PRTMS4FL,PRTMGSTA,PRTMGSTC:      
                             PRTMQUNT,PRTMCAMT,PRTMIAMT,PRTMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRTMP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PRITMPA1;PRTMUNIQ,PRTMPRAC,PRTMDOCT,PRTMPIND,PRTMCNTR:      
                             PRTMDATE,PRTMTIME,PRTMITYP,PRTMITEM,PRTMSUBI:      
                             PRTMDESC,PRTMTEST,PRTMS4FL,PRTMGSTA,PRTMGSTC:      
                             PRTMQUNT,PRTMCAMT,PRTMIAMT,PRTMSPAR                
          RETURN
.
WRPRTMP1  RESET     KEY35                                                       
          WRITE     PRITMPA1,KEY35;PRTMUNIQ,PRTMPRAC,PRTMDOCT,PRTMPIND,PRTMCNTR:
                                   PRTMDATE,PRTMTIME,PRTMITYP,PRTMITEM,PRTMSUBI:
                                   PRTMDESC,PRTMTEST,PRTMS4FL,PRTMGSTA,PRTMGSTC:
                                   PRTMQUNT,PRTMCAMT,PRTMIAMT,PRTMSPAR          
          RETURN
.
DEPRTMP1  RESET     KEY35                                                       
          DELETE    PRITMPA1,KEY35                                              
          RETURN
.
