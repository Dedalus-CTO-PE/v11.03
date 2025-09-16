.
. PMSPODIO    
. --------
. Filename     : pmspodaf.dat
.
RSPMPOD1  RESET     KEY11                                                       
          READ      PMSPODA1,KEY11;;                                            
          RETURN
.
RAPMPOD1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPODA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPOD1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPODA1,KEY11;PMPOVISN,PMPOCODE,PMPOOCNT,PMPOGRAD,PMPODELT:
                        PMPOUNIQ,PMPOWEBC,PMPODATC,PMPOTIMC,PMPOWEBU,PMPODATU:  
                        PMPOTIMU,PMPOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPOD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPODA1;PMPOVISN,PMPOCODE,PMPOOCNT,PMPOGRAD,PMPODELT:      
                        PMPOUNIQ,PMPOWEBC,PMPODATC,PMPOTIMC,PMPOWEBU,PMPODATU:  
                        PMPOTIMU,PMPOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPOD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPODA1;PMPOVISN,PMPOCODE,PMPOOCNT,PMPOGRAD,PMPODELT:      
                        PMPOUNIQ,PMPOWEBC,PMPODATC,PMPOTIMC,PMPOWEBU,PMPODATU:  
                        PMPOTIMU,PMPOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPOD1                                                                        
          UPDATE    PMSPODA1;PMPOVISN,PMPOCODE,PMPOOCNT,PMPOGRAD,PMPODELT:      
                        PMPOUNIQ,PMPOWEBC,PMPODATC,PMPOTIMC,PMPOWEBU,PMPODATU:  
                        PMPOTIMU,PMPOSPAR                                       
          RETURN
.
WRPMPOD1  RESET     KEY11                                                       
          WRITE     PMSPODA1,KEY11;PMPOVISN,PMPOCODE,PMPOOCNT,PMPOGRAD,PMPODELT:
                        PMPOUNIQ,PMPOWEBC,PMPODATC,PMPOTIMC,PMPOWEBU,PMPODATU:  
                        PMPOTIMU,PMPOSPAR                                       
          RETURN
.
DEPMPOD1  RESET     KEY11                                                       
          DELETE    PMSPODA1,KEY11                                              
          RETURN
.
