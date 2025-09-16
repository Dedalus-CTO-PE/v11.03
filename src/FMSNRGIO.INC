.
. FMSNRGIO    
. --------
. Filename     : fmsnrgaf.dat
.
RSFMNG1   RESET     KEY3                                                        
          READ      FMSNRGA1,KEY3;;                                             
          RETURN
.
RAFMNG1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      FMSNRGA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNG1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      FMSNRGA1,KEY3;FMNGCODE,FMNGDESC,FMNGCCCD,FMNGCCFR,FMNGSACD: 
                        FMNGSAFR,FMNGRS,FMNGPT,FMNGCLEV,FMNGSLEV,FMNGCAS:       
                        FMNGCBT,FMNGPBT,FMNGDOP,FMNGZER,FMNGSUPP,FMNGSHED:      
                        FMNGPSEQ,FMNGPDES,FMNGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNG1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRGA1;FMNGCODE,FMNGDESC,FMNGCCCD,FMNGCCFR,FMNGSACD:      
                        FMNGSAFR,FMNGRS,FMNGPT,FMNGCLEV,FMNGSLEV,FMNGCAS:       
                        FMNGCBT,FMNGPBT,FMNGDOP,FMNGZER,FMNGSUPP,FMNGSHED:      
                        FMNGPSEQ,FMNGPDES,FMNGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNG1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRGA1;FMNGCODE,FMNGDESC,FMNGCCCD,FMNGCCFR,FMNGSACD:      
                        FMNGSAFR,FMNGRS,FMNGPT,FMNGCLEV,FMNGSLEV,FMNGCAS:       
                        FMNGCBT,FMNGPBT,FMNGDOP,FMNGZER,FMNGSUPP,FMNGSHED:      
                        FMNGPSEQ,FMNGPDES,FMNGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNG1                                                                         
          UPDATE    FMSNRGA1;FMNGCODE,FMNGDESC,FMNGCCCD,FMNGCCFR,FMNGSACD:      
                        FMNGSAFR,FMNGRS,FMNGPT,FMNGCLEV,FMNGSLEV,FMNGCAS:       
                        FMNGCBT,FMNGPBT,FMNGDOP,FMNGZER,FMNGSUPP,FMNGSHED:      
                        FMNGPSEQ,FMNGPDES,FMNGSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMNG1   RESET     KEY3                                                        
          WRITE     FMSNRGA1,KEY3;FMNGCODE,FMNGDESC,FMNGCCCD,FMNGCCFR,FMNGSACD: 
                        FMNGSAFR,FMNGRS,FMNGPT,FMNGCLEV,FMNGSLEV,FMNGCAS:       
                        FMNGCBT,FMNGPBT,FMNGDOP,FMNGZER,FMNGSUPP,FMNGSHED:      
                        FMNGPSEQ,FMNGPDES,FMNGSPAR                              
          RETURN
.
DEFMNG1   RESET     KEY3                                                        
          DELETE    FMSNRGA1,KEY3                                               
          RETURN
.
RLFMNG1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     FMSNRGA1,KEY3;FMNGCODE,FMNGDESC,FMNGCCCD,FMNGCCFR,FMNGSACD: 
                        FMNGSAFR,FMNGRS,FMNGPT,FMNGCLEV,FMNGSLEV,FMNGCAS:       
                        FMNGCBT,FMNGPBT,FMNGDOP,FMNGZER,FMNGSUPP,FMNGSHED:      
                        FMNGPSEQ,FMNGPDES,FMNGSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMNG1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSNRGA1;FMNGCODE,FMNGDESC,FMNGCCCD,FMNGCCFR,FMNGSACD:      
                        FMNGSAFR,FMNGRS,FMNGPT,FMNGCLEV,FMNGSLEV,FMNGCAS:       
                        FMNGCBT,FMNGPBT,FMNGDOP,FMNGZER,FMNGSUPP,FMNGSHED:      
                        FMNGPSEQ,FMNGPDES,FMNGSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMNG1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSNRGA1;FMNGCODE,FMNGDESC,FMNGCCCD,FMNGCCFR,FMNGSACD:      
                        FMNGSAFR,FMNGRS,FMNGPT,FMNGCLEV,FMNGSLEV,FMNGCAS:       
                        FMNGCBT,FMNGPBT,FMNGDOP,FMNGZER,FMNGSUPP,FMNGSHED:      
                        FMNGPSEQ,FMNGPDES,FMNGSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMNG1   RESET     KEY3                                                        
          UNLOCK    FMSNRGA1                                                    
          RETURN
.
