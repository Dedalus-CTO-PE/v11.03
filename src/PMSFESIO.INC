.
. PMSFESIO    
. --------
. Filename     : pmsfesaf.dat
.
RSPMFES1  RESET     KEY17                                                       
          READ      PMSFESA1,KEY17;;                                            
          RETURN
.
RAPMFES1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFESA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFES1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFESA1,KEY17;PMFSQUOT,DPMFSUNI,PMFSURNO,PMFSRECT,PMFSLUMH:
                        PMFSLUMF,PMFSDAFR,PMFSDAYT,PMFSDAYH,PMFSDAHF,PMFSTHIT:  
                        PMFSTHEH,PMFSTHEF,PMFSQUAN,PMFSBTYP,PMFSGSTA:
                        PMFSGSTP,PMFSGSTC,PMFSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DPMFSUNI,PMFSUNIQ                                           
          MOVE      PMFSRECT,PMFSRTYP
          RETURN
.
RKPMFES1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSFESA1;PMFSQUOT,DPMFSUNI,PMFSURNO,PMFSRECT,PMFSLUMH:      
                        PMFSLUMF,PMFSDAFR,PMFSDAYT,PMFSDAYH,PMFSDAHF,PMFSTHIT:  
                        PMFSTHEH,PMFSTHEF,PMFSQUAN,PMFSBTYP,PMFSGSTA:
                        PMFSGSTP,PMFSGSTC,PMFSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DPMFSUNI,PMFSUNIQ                                           
          MOVE      PMFSRECT,PMFSRTYP
          RETURN
.
RPPMFES1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSFESA1;PMFSQUOT,DPMFSUNI,PMFSURNO,PMFSRECT,PMFSLUMH:      
                        PMFSLUMF,PMFSDAFR,PMFSDAYT,PMFSDAYH,PMFSDAHF,PMFSTHIT:  
                        PMFSTHEH,PMFSTHEF,PMFSQUAN,PMFSBTYP,PMFSGSTA:
                        PMFSGSTP,PMFSGSTC,PMFSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DPMFSUNI,PMFSUNIQ                                           
          MOVE      PMFSRECT,PMFSRTYP
          RETURN
.
UPPMFES1                                                                        
          MOVE      PMFSRTYP,PMFSRECT
          MOVE      PMFSUNIQ,DPMFSUNI                                           
          UPDATE    PMSFESA1;PMFSQUOT,DPMFSUNI,PMFSURNO,PMFSRECT,PMFSLUMH:      
                        PMFSLUMF,PMFSDAFR,PMFSDAYT,PMFSDAYH,PMFSDAHF,PMFSTHIT:  
                        PMFSTHEH,PMFSTHEF,PMFSQUAN,PMFSBTYP,PMFSGSTA:
                        PMFSGSTP,PMFSGSTC,PMFSSPAR   
          RETURN
.
WRPMFES1  RESET     KEY17                                                       
          MOVE      PMFSRTYP,PMFSRECT
          MOVE      PMFSUNIQ,DPMFSUNI                                           
          WRITE     PMSFESA1,KEY17;PMFSQUOT,DPMFSUNI,PMFSURNO,PMFSRECT,PMFSLUMH:
                        PMFSLUMF,PMFSDAFR,PMFSDAYT,PMFSDAYH,PMFSDAHF,PMFSTHIT:  
                        PMFSTHEH,PMFSTHEF,PMFSQUAN,PMFSBTYP,PMFSGSTA:
                        PMFSGSTP,PMFSGSTC,PMFSSPAR   
          RETURN
.
DEPMFES1  RESET     KEY17                                                       
          DELETE    PMSFESA1,KEY17                                              
          RETURN
.
RSPMFES2  RESET     KEY18                                                       
          READ      PMSFESA2,KEY18;;                                            
          RETURN
.
RAPMFES2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFESA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFES2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFESA2,KEY18;PMFSQUOT,DPMFSUNI,PMFSURNO,PMFSRECT,PMFSLUMH:
                        PMFSLUMF,PMFSDAFR,PMFSDAYT,PMFSDAYH,PMFSDAHF,PMFSTHIT:  
                        PMFSTHEH,PMFSTHEF,PMFSQUAN,PMFSBTYP,PMFSGSTA:
                        PMFSGSTP,PMFSGSTC,PMFSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DPMFSUNI,PMFSUNIQ                                           
          MOVE      PMFSRECT,PMFSRTYP
          RETURN
.
RKPMFES2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSFESA2;PMFSQUOT,DPMFSUNI,PMFSURNO,PMFSRECT,PMFSLUMH:      
                        PMFSLUMF,PMFSDAFR,PMFSDAYT,PMFSDAYH,PMFSDAHF,PMFSTHIT:  
                        PMFSTHEH,PMFSTHEF,PMFSQUAN,PMFSBTYP,PMFSGSTA:
                        PMFSGSTP,PMFSGSTC,PMFSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DPMFSUNI,PMFSUNIQ                                           
          MOVE      PMFSRECT,PMFSRTYP
          RETURN
.
RPPMFES2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSFESA2;PMFSQUOT,DPMFSUNI,PMFSURNO,PMFSRECT,PMFSLUMH:      
                        PMFSLUMF,PMFSDAFR,PMFSDAYT,PMFSDAYH,PMFSDAHF,PMFSTHIT:  
                        PMFSTHEH,PMFSTHEF,PMFSQUAN,PMFSBTYP,PMFSGSTA:
                        PMFSGSTP,PMFSGSTC,PMFSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DPMFSUNI,PMFSUNIQ                                           
          MOVE      PMFSRECT,PMFSRTYP
          RETURN
.
UPPMFES2                                                                        
          MOVE      PMFSRTYP,PMFSRECT
          MOVE      PMFSUNIQ,DPMFSUNI                                           
          UPDATE    PMSFESA2;PMFSQUOT,DPMFSUNI,PMFSURNO,PMFSRECT,PMFSLUMH:      
                        PMFSLUMF,PMFSDAFR,PMFSDAYT,PMFSDAYH,PMFSDAHF,PMFSTHIT:  
                        PMFSTHEH,PMFSTHEF,PMFSQUAN,PMFSBTYP,PMFSGSTA:
                        PMFSGSTP,PMFSGSTC,PMFSSPAR   
          RETURN
.
WRPMFES2  RESET     KEY18                                                       
          MOVE      PMFSRTYP,PMFSRECT
          MOVE      PMFSUNIQ,DPMFSUNI                                           
          WRITE     PMSFESA2,KEY18;PMFSQUOT,DPMFSUNI,PMFSURNO,PMFSRECT,PMFSLUMH:
                        PMFSLUMF,PMFSDAFR,PMFSDAYT,PMFSDAYH,PMFSDAHF,PMFSTHIT:  
                        PMFSTHEH,PMFSTHEF,PMFSQUAN,PMFSBTYP,PMFSGSTA:
                        PMFSGSTP,PMFSGSTC,PMFSSPAR   
          RETURN
.
DEPMFES2  RESET     KEY18                                                       
          DELETE    PMSFESA2,KEY18                                              
          RETURN
.
