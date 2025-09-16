.
. PMSDLTIO    
. --------
. Filename     : pmsdltaf.dat
.
RSPMDLT1  RESET     KEY4                                                        
          READ      PMSDLTA1,KEY4;;                                             
          RETURN
.
RAPMDLT1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSDLTA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDLT1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSDLTA1,KEY4;PMDSSELI,PMDSDESC,PMDSHCPF,PMDSHCPT,PMDSPSFR: 
                        PMDSPSTO,PMDSASFR,PMDSASTO,PMDSHOSP,PMDSPREF,PMDSFADF:  
                        PMDSFADT,PMDSLADF,PMDSLADT,PMDSHCST,PMDSATYP,PMDSYACF:  
                        PMDSYACT,PMDSINSC,PMDSIDFF,PMDSIDFT,PMDSIDTF,PMDSIDTT:  
                        PMDSACTV,PMDSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDLT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDLTA1;PMDSSELI,PMDSDESC,PMDSHCPF,PMDSHCPT,PMDSPSFR:      
                        PMDSPSTO,PMDSASFR,PMDSASTO,PMDSHOSP,PMDSPREF,PMDSFADF:  
                        PMDSFADT,PMDSLADF,PMDSLADT,PMDSHCST,PMDSATYP,PMDSYACF:  
                        PMDSYACT,PMDSINSC,PMDSIDFF,PMDSIDFT,PMDSIDTF,PMDSIDTT:  
                        PMDSACTV,PMDSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDLT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDLTA1;PMDSSELI,PMDSDESC,PMDSHCPF,PMDSHCPT,PMDSPSFR:      
                        PMDSPSTO,PMDSASFR,PMDSASTO,PMDSHOSP,PMDSPREF,PMDSFADF:  
                        PMDSFADT,PMDSLADF,PMDSLADT,PMDSHCST,PMDSATYP,PMDSYACF:  
                        PMDSYACT,PMDSINSC,PMDSIDFF,PMDSIDFT,PMDSIDTF,PMDSIDTT:  
                        PMDSACTV,PMDSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDLT1                                                                        
          UPDATE    PMSDLTA1;PMDSSELI,PMDSDESC,PMDSHCPF,PMDSHCPT,PMDSPSFR:      
                        PMDSPSTO,PMDSASFR,PMDSASTO,PMDSHOSP,PMDSPREF,PMDSFADF:  
                        PMDSFADT,PMDSLADF,PMDSLADT,PMDSHCST,PMDSATYP,PMDSYACF:  
                        PMDSYACT,PMDSINSC,PMDSIDFF,PMDSIDFT,PMDSIDTF,PMDSIDTT:  
                        PMDSACTV,PMDSSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMDLT1  RESET     KEY4                                                        
          WRITE     PMSDLTA1,KEY4;PMDSSELI,PMDSDESC,PMDSHCPF,PMDSHCPT,PMDSPSFR: 
                        PMDSPSTO,PMDSASFR,PMDSASTO,PMDSHOSP,PMDSPREF,PMDSFADF:  
                        PMDSFADT,PMDSLADF,PMDSLADT,PMDSHCST,PMDSATYP,PMDSYACF:  
                        PMDSYACT,PMDSINSC,PMDSIDFF,PMDSIDFT,PMDSIDTF,PMDSIDTT:  
                        PMDSACTV,PMDSSPAR                                       
          RETURN
.
DEPMDLT1  RESET     KEY4                                                        
          DELETE    PMSDLTA1,KEY4                                               
          RETURN
.
RLPMDLT1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     PMSDLTA1,KEY4;PMDSSELI,PMDSDESC,PMDSHCPF,PMDSHCPT,PMDSPSFR: 
                        PMDSPSTO,PMDSASFR,PMDSASTO,PMDSHOSP,PMDSPREF,PMDSFADF:  
                        PMDSFADT,PMDSLADF,PMDSLADT,PMDSHCST,PMDSATYP,PMDSYACF:  
                        PMDSYACT,PMDSINSC,PMDSIDFF,PMDSIDFT,PMDSIDTF,PMDSIDTT:  
                        PMDSACTV,PMDSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMDLT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSDLTA1;PMDSSELI,PMDSDESC,PMDSHCPF,PMDSHCPT,PMDSPSFR:      
                        PMDSPSTO,PMDSASFR,PMDSASTO,PMDSHOSP,PMDSPREF,PMDSFADF:  
                        PMDSFADT,PMDSLADF,PMDSLADT,PMDSHCST,PMDSATYP,PMDSYACF:  
                        PMDSYACT,PMDSINSC,PMDSIDFF,PMDSIDFT,PMDSIDTF,PMDSIDTT:  
                        PMDSACTV,PMDSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMDLT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSDLTA1;PMDSSELI,PMDSDESC,PMDSHCPF,PMDSHCPT,PMDSPSFR:      
                        PMDSPSTO,PMDSASFR,PMDSASTO,PMDSHOSP,PMDSPREF,PMDSFADF:  
                        PMDSFADT,PMDSLADF,PMDSLADT,PMDSHCST,PMDSATYP,PMDSYACF:  
                        PMDSYACT,PMDSINSC,PMDSIDFF,PMDSIDFT,PMDSIDTF,PMDSIDTT:  
                        PMDSACTV,PMDSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMDLT1  RESET     KEY4                                                        
          UNLOCK    PMSDLTA1                                                    
          RETURN
.
