.
. SINSCFIO    
. --------
. Filename     : sinscfaf.dat
.
RSSISF1   RESET     KEY37                                                       
          READ      SINSCFA1,KEY37;;                                            
          RETURN
.
RASISF1   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      SINSCFA1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSISF1   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      SINSCFA1,KEY37;SISFCON,SISFSUP,SISFCAT,SISFSUT,SISFAQT:     
                        SISFAPC,SISFEQT,SISFECT,SISFUR1,SISFUR2,SISFUD1:        
                        SISFUD2,SISFUY1,SISFUY2,SISFSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSISF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSCFA1;SISFCON,SISFSUP,SISFCAT,SISFSUT,SISFAQT:           
                        SISFAPC,SISFEQT,SISFECT,SISFUR1,SISFUR2,SISFUD1:        
                        SISFUD2,SISFUY1,SISFUY2,SISFSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSISF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSCFA1;SISFCON,SISFSUP,SISFCAT,SISFSUT,SISFAQT:           
                        SISFAPC,SISFEQT,SISFECT,SISFUR1,SISFUR2,SISFUD1:        
                        SISFUD2,SISFUY1,SISFUY2,SISFSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSISF1                                                                         
          UPDATE    SINSCFA1;SISFCON,SISFSUP,SISFCAT,SISFSUT,SISFAQT:           
                        SISFAPC,SISFEQT,SISFECT,SISFUR1,SISFUR2,SISFUD1:        
                        SISFUD2,SISFUY1,SISFUY2,SISFSPA                         
          RETURN
.
WRSISF1   RESET     KEY37                                                       
          WRITE     SINSCFA1,KEY37;SISFCON,SISFSUP,SISFCAT,SISFSUT,SISFAQT:     
                        SISFAPC,SISFEQT,SISFECT,SISFUR1,SISFUR2,SISFUD1:        
                        SISFUD2,SISFUY1,SISFUY2,SISFSPA                         
          RETURN
.
DESISF1   RESET     KEY37                                                       
          DELETE    SINSCFA1,KEY37                                              
          RETURN
.
