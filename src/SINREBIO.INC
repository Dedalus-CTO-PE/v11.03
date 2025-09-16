.
. SINREBIO    
. --------
. Filename     : sinrebaf.dat
.
RSSIRB1   RESET     KEY20                                                       
          READ      SINREBA1,KEY20;;                                            
          RETURN
.
RASIRB1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINREBA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRB1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINREBA1,KEY20;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:     
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINREBA1;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINREBA1;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRB1                                                                         
          UPDATE    SINREBA1;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          RETURN
.
WRSIRB1   RESET     KEY20                                                       
          WRITE     SINREBA1,KEY20;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:     
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          RETURN
.
DESIRB1   RESET     KEY20                                                       
          DELETE    SINREBA1,KEY20                                              
          RETURN
.
RSSIRB2   RESET     KEY20                                                       
          READ      SINREBA2,KEY20;;                                            
          RETURN
.
RASIRB2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINREBA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRB2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINREBA2,KEY20;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:     
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRB2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINREBA2;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRB2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINREBA2;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRB2                                                                         
          UPDATE    SINREBA2;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          RETURN
.
WRSIRB2   RESET     KEY20                                                       
          WRITE     SINREBA2,KEY20;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:     
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          RETURN
.
DESIRB2   RESET     KEY20                                                       
          DELETE    SINREBA2,KEY20                                              
          RETURN
.
RSSIRB3   RESET     KEY39                                                       
          READ      SINREBA3,KEY39;;                                            
          RETURN
.
RASIRB3   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      SINREBA3,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRB3   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      SINREBA3,KEY39;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:     
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRB3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINREBA3;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRB3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINREBA3;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRB3                                                                         
          UPDATE    SINREBA3;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          RETURN
.
WRSIRB3   RESET     KEY39                                                       
          WRITE     SINREBA3,KEY39;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:     
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          RETURN
.
DESIRB3   RESET     KEY39                                                       
          DELETE    SINREBA3,KEY39                                              
          RETURN
.
RSSIRB4   RESET     KEY28                                                       
          READ      SINREBA4,KEY28;;                                            
          RETURN
.
RASIRB4   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINREBA4,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRB4   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINREBA4,KEY28;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:     
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRB4                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINREBA4;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRB4                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINREBA4;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRB4                                                                         
          UPDATE    SINREBA4;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:           
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          RETURN
.
WRSIRB4   RESET     KEY28                                                       
          WRITE     SINREBA4,KEY28;SIRBTYP,SIRBREQ,SIRBWAR,SIRBCAT,SIRBRQT:     
                        SIRBIQT,SIRBAMT,SIRBDAT,SIRBBCH,SIRBLED,SIRBACC:        
                        SIRBSPA                                                 
          RETURN
.
DESIRB4   RESET     KEY28                                                       
          DELETE    SINREBA4,KEY28                                              
          RETURN
.
