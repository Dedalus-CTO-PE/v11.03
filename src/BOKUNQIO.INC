.
. BOKUNQIO    
. --------
. Filename     : bokunqaf.dat
.
RSBKUNQ1  RESET     KEY18                                                       
          READ      BOKUNQA1,KEY18;;                                            
          RETURN
.
RABKUNQ1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      BOKUNQA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKUNQ1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      BOKUNQA1,KEY18;BKUNVISN,BKUNUNIQ,BKUNLADM,BKUNWEBL,BKUNDATL:
                        BKUNTIML,BKUNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKUNQ1                                                                        
          MOVE      ZERO,OVRCD
          READKS    BOKUNQA1;BKUNVISN,BKUNUNIQ,BKUNLADM,BKUNWEBL,BKUNDATL:      
                        BKUNTIML,BKUNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKUNQ1                                                                        
          MOVE      ZERO,OVRCD
          READKP    BOKUNQA1;BKUNVISN,BKUNUNIQ,BKUNLADM,BKUNWEBL,BKUNDATL:      
                        BKUNTIML,BKUNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKUNQ1                                                                        
          UPDATE    BOKUNQA1;BKUNVISN,BKUNUNIQ,BKUNLADM,BKUNWEBL,BKUNDATL:      
                        BKUNTIML,BKUNSPAR                                       
          RETURN
.
WRBKUNQ1  RESET     KEY18                                                       
          WRITE     BOKUNQA1,KEY18;BKUNVISN,BKUNUNIQ,BKUNLADM,BKUNWEBL,BKUNDATL:
                        BKUNTIML,BKUNSPAR                                       
          RETURN
.
DEBKUNQ1  RESET     KEY18                                                       
          DELETE    BOKUNQA1,KEY18                                              
          RETURN
.
