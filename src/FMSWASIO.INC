.
. FMSWASIO    
. --------
. Filename     : fmswasaf.dat
.
RSFMWA1   RESET     KEY21                                                       
          READ      FMSWASA1,KEY21;;                                            
          RETURN
.
RAFMWA1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      FMSWASA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMWA1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      FMSWASA1,KEY21;FMWASEC,FMWALEDG,FMWAACCT,FMWASEQ,FMWADTY:   
                        FMWADIV,FMWADEC,FMWABLD,FMWABCK,FMWACHD,FMWATMP:        
                        FMWANEG,FMWALPC,FMWAPRG,FMWAREP,FMWAURL,FMWASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMWA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSWASA1;FMWASEC,FMWALEDG,FMWAACCT,FMWASEQ,FMWADTY:         
                        FMWADIV,FMWADEC,FMWABLD,FMWABCK,FMWACHD,FMWATMP:        
                        FMWANEG,FMWALPC,FMWAPRG,FMWAREP,FMWAURL,FMWASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMWA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSWASA1;FMWASEC,FMWALEDG,FMWAACCT,FMWASEQ,FMWADTY:         
                        FMWADIV,FMWADEC,FMWABLD,FMWABCK,FMWACHD,FMWATMP:        
                        FMWANEG,FMWALPC,FMWAPRG,FMWAREP,FMWAURL,FMWASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMWA1                                                                         
          UPDATE    FMSWASA1;FMWASEC,FMWALEDG,FMWAACCT,FMWASEQ,FMWADTY:         
                        FMWADIV,FMWADEC,FMWABLD,FMWABCK,FMWACHD,FMWATMP:        
                        FMWANEG,FMWALPC,FMWAPRG,FMWAREP,FMWAURL,FMWASPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMWA1   RESET     KEY21                                                       
          WRITE     FMSWASA1,KEY21;FMWASEC,FMWALEDG,FMWAACCT,FMWASEQ,FMWADTY:   
                        FMWADIV,FMWADEC,FMWABLD,FMWABCK,FMWACHD,FMWATMP:        
                        FMWANEG,FMWALPC,FMWAPRG,FMWAREP,FMWAURL,FMWASPA         
          RETURN
.
DEFMWA1   RESET     KEY21                                                       
          DELETE    FMSWASA1,KEY21                                              
          RETURN
.
RLFMWA1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     FMSWASA1,KEY21;FMWASEC,FMWALEDG,FMWAACCT,FMWASEQ,FMWADTY:   
                        FMWADIV,FMWADEC,FMWABLD,FMWABCK,FMWACHD,FMWATMP:        
                        FMWANEG,FMWALPC,FMWAPRG,FMWAREP,FMWAURL,FMWASPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMWA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSWASA1;FMWASEC,FMWALEDG,FMWAACCT,FMWASEQ,FMWADTY:         
                        FMWADIV,FMWADEC,FMWABLD,FMWABCK,FMWACHD,FMWATMP:        
                        FMWANEG,FMWALPC,FMWAPRG,FMWAREP,FMWAURL,FMWASPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMWA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSWASA1;FMWASEC,FMWALEDG,FMWAACCT,FMWASEQ,FMWADTY:         
                        FMWADIV,FMWADEC,FMWABLD,FMWABCK,FMWACHD,FMWATMP:        
                        FMWANEG,FMWALPC,FMWAPRG,FMWAREP,FMWAURL,FMWASPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMWA1   RESET     KEY21                                                       
          UNLOCK    FMSWASA1                                                    
          RETURN
.
