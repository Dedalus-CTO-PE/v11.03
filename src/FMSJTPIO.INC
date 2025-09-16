.
. FMSJTPIO    
. --------
. Filename     : fmsjtpaf.dat
.
RSFMJT1   RESET     KEY16                                                       
          READ      FMSJTPA1,KEY16;;                                            
          RETURN
.
RAFMJT1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      FMSJTPA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMJT1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      FMSJTPA1,KEY16;FMJTJTY,FMJTJID,FMJTPER,FMJTLNO,FMJTAMT:     
                        FMJTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMJT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSJTPA1;FMJTJTY,FMJTJID,FMJTPER,FMJTLNO,FMJTAMT:           
                        FMJTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMJT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSJTPA1;FMJTJTY,FMJTJID,FMJTPER,FMJTLNO,FMJTAMT:           
                        FMJTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMJT1                                                                         
          UPDATE    FMSJTPA1;FMJTJTY,FMJTJID,FMJTPER,FMJTLNO,FMJTAMT:           
                        FMJTSPAR                                                
          RETURN
.
WRFMJT1   RESET     KEY16                                                       
          WRITE     FMSJTPA1,KEY16;FMJTJTY,FMJTJID,FMJTPER,FMJTLNO,FMJTAMT:     
                        FMJTSPAR                                                
          RETURN
.
DEFMJT1   RESET     KEY16                                                       
          DELETE    FMSJTPA1,KEY16                                              
          RETURN
.
RSFMJT2   RESET     KEY16                                                       
          READ      FMSJTPA2,KEY16;;                                            
          RETURN
.
RAFMJT2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      FMSJTPA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMJT2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      FMSJTPA2,KEY16;FMJTJTY,FMJTJID,FMJTPER,FMJTLNO,FMJTAMT:     
                        FMJTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMJT2                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSJTPA2;FMJTJTY,FMJTJID,FMJTPER,FMJTLNO,FMJTAMT:           
                        FMJTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMJT2                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSJTPA2;FMJTJTY,FMJTJID,FMJTPER,FMJTLNO,FMJTAMT:           
                        FMJTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMJT2                                                                         
          UPDATE    FMSJTPA2;FMJTJTY,FMJTJID,FMJTPER,FMJTLNO,FMJTAMT:           
                        FMJTSPAR                                                
          RETURN
.
WRFMJT2   RESET     KEY16                                                       
          WRITE     FMSJTPA2,KEY16;FMJTJTY,FMJTJID,FMJTPER,FMJTLNO,FMJTAMT:     
                        FMJTSPAR                                                
          RETURN
.
DEFMJT2   RESET     KEY16                                                       
          DELETE    FMSJTPA2,KEY16                                              
          RETURN
.
