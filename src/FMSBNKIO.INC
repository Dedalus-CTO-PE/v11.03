.
. FMSBNKIO    
. --------
. Filename     : fmsbnkaf.dat
.
RSFMBN1   RESET     KEY20                                                       
          READ      FMSBNKA1,KEY20;;                                            
          RETURN
.
RAFMBN1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBN1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA1,KEY20;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBNKA1;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBNKA1;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBN1                                                                         
          UPDATE    FMSBNKA1;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          RETURN
.
WRFMBN1   RESET     KEY20                                                       
          WRITE     FMSBNKA1,KEY20;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          RETURN
.
DEFMBN1   RESET     KEY20                                                       
          DELETE    FMSBNKA1,KEY20                                              
          RETURN
.
RSFMBN2   RESET     KEY36                                                       
          READ      FMSBNKA2,KEY36;;                                            
          RETURN
.
RAFMBN2   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA2,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBN2   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA2,KEY36;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBN2                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBNKA2;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBN2                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBNKA2;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBN2                                                                         
          UPDATE    FMSBNKA2;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          RETURN
.
WRFMBN2   RESET     KEY36                                                       
          WRITE     FMSBNKA2,KEY36;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          RETURN
.
DEFMBN2   RESET     KEY36                                                       
          DELETE    FMSBNKA2,KEY36                                              
          RETURN
.
RSFMBN3   RESET     KEY44                                                       
          READ      FMSBNKA3,KEY44;;                                            
          RETURN
.
RAFMBN3   RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA3,KEY44;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBN3   RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA3,KEY44;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBN3                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBNKA3;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBN3                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBNKA3;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBN3                                                                         
          UPDATE    FMSBNKA3;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          RETURN
.
WRFMBN3   RESET     KEY44                                                       
          WRITE     FMSBNKA3,KEY44;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          RETURN
.
DEFMBN3   RESET     KEY44                                                       
          DELETE    FMSBNKA3,KEY44                                              
          RETURN
.
RSFMBN4   RESET     KEY30                                                       
          READ      FMSBNKA4,KEY30;;                                            
          RETURN
.
RAFMBN4   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA4,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBN4   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA4,KEY30;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBN4                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBNKA4;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBN4                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBNKA4;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBN4                                                                         
          UPDATE    FMSBNKA4;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          RETURN
.
WRFMBN4   RESET     KEY30                                                       
          WRITE     FMSBNKA4,KEY30;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          RETURN
.
DEFMBN4   RESET     KEY30                                                       
          DELETE    FMSBNKA4,KEY30                                              
          RETURN
.
RSFMBN5   RESET     KEY56                                                       
          READ      FMSBNKA5,KEY56;;                                            
          RETURN
.
RAFMBN5   RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA5,KEY56;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBN5   RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA5,KEY56;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBN5                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBNKA5;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBN5                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBNKA5;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBN5                                                                         
          UPDATE    FMSBNKA5;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          RETURN
.
WRFMBN5   RESET     KEY56                                                       
          WRITE     FMSBNKA5,KEY56;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          RETURN
.
DEFMBN5   RESET     KEY56                                                       
          DELETE    FMSBNKA5,KEY56                                              
          RETURN
.
RSFMBN6   RESET     KEY24                                                       
          READ      FMSBNKA6,KEY24;;                                            
          RETURN
.
RAFMBN6   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA6,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBN6   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBNKA6,KEY24;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:     
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBN6                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBNKA6;FMBNBNK,FMBNUNQ,FMBNREF,FMBNLED,FMBNACC:           
                        FMBNDAT,FMBNTYP,FMBNPRE,FMBNPDT,FMBNAMT,FMBNFYR:        
                        FMBNBCH,FMBNLNO,FMBNCRE,FMBNNAM,FMBNSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
