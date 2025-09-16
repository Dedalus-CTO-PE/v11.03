.
. CCSCDTIO    
. --------
. Filename     : ccscdtaf.dat
.
RSCCCD1   RESET     KEY28                                                       
          READ      CCSCDTA1,KEY28;;                                            
          RETURN
.
RACCCD1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCDTA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCCD1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCDTA1,KEY28;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:  
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCCD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCDTA1;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:        
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCCD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCDTA1;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:        
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCCD1                                                                         
          UPDATE    CCSCDTA1;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:        
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          RETURN
.
WRCCCD1   RESET     KEY28                                                       
          WRITE     CCSCDTA1,KEY28;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:  
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          RETURN
.
DECCCD1   RESET     KEY28                                                       
          DELETE    CCSCDTA1,KEY28                                              
          RETURN
.
RSCCCD2   RESET     KEY28                                                       
          READ      CCSCDTA2,KEY28;;                                            
          RETURN
.
RACCCD2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCDTA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCCD2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCDTA2,KEY28;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:  
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCCD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCDTA2;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:        
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCCD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCDTA2;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:        
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCCD2                                                                         
          UPDATE    CCSCDTA2;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:        
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          RETURN
.
WRCCCD2   RESET     KEY28                                                       
          WRITE     CCSCDTA2,KEY28;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:  
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          RETURN
.
DECCCD2   RESET     KEY28                                                       
          DELETE    CCSCDTA2,KEY28                                              
          RETURN
.
RSCCCD3   RESET     KEY28                                                       
          READ      CCSCDTA3,KEY28;;                                            
          RETURN
.
RACCCD3   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCDTA3,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCCD3   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCDTA3,KEY28;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:  
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCCD3                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCDTA3;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:        
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCCD3                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCDTA3;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:        
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCCD3                                                                         
          UPDATE    CCSCDTA3;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:        
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          RETURN
.
WRCCCD3   RESET     KEY28                                                       
          WRITE     CCSCDTA3,KEY28;CCCDHCD,CCCDFDPT,CCCDYEAR,CCCDPER,CCCDTDPT:  
                        CCCDCTY,CCCDATY,CCCDTWG,CCCDWGT,CCCDTOT,CCCDAMT:        
                        CCCDSPA                                                 
          RETURN
.
DECCCD3   RESET     KEY28                                                       
          DELETE    CCSCDTA3,KEY28                                              
          RETURN
.
