.
. PMSAMHIO    
. --------
. Filename     : pmsamhaf.dat
.
RSPMAMH1  RESET     KEY16                                                       
          READ      PMSAMHA1,KEY16;;                                            
          RETURN
.
RAPMAMH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAMHA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAMH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAMHA1,KEY16;PMMHCNTR,PMMHAMHC,PMMHAMHD,PMMHAVPL,PMMHLOWB:
                                   PMMHUPPB,PMMHSSOB,PMMHSSOP,PMMHINLI,PMMHLSOP:
                                   PMMHPPSA,PMMHCDAT,PMMHCTIM,PMMHCUID,PMMHUDAT:
                                   PMMHUTIM,PMMHUUID,PMMHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAMH1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSAMHA1;PMMHCNTR,PMMHAMHC,PMMHAMHD,PMMHAVPL,PMMHLOWB:      
                             PMMHUPPB,PMMHSSOB,PMMHSSOP,PMMHINLI,PMMHLSOP:      
                             PMMHPPSA,PMMHCDAT,PMMHCTIM,PMMHCUID,PMMHUDAT:      
                             PMMHUTIM,PMMHUUID,PMMHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAMH1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSAMHA1;PMMHCNTR,PMMHAMHC,PMMHAMHD,PMMHAVPL,PMMHLOWB:      
                             PMMHUPPB,PMMHSSOB,PMMHSSOP,PMMHINLI,PMMHLSOP:      
                             PMMHPPSA,PMMHCDAT,PMMHCTIM,PMMHCUID,PMMHUDAT:      
                             PMMHUTIM,PMMHUUID,PMMHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAMH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSAMHA1;PMMHCNTR,PMMHAMHC,PMMHAMHD,PMMHAVPL,PMMHLOWB:      
                             PMMHUPPB,PMMHSSOB,PMMHSSOP,PMMHINLI,PMMHLSOP:      
                             PMMHPPSA,PMMHCDAT,PMMHCTIM,PMMHCUID,PMMHUDAT:      
                             PMMHUTIM,PMMHUUID,PMMHSPAR                         
          RETURN
.
WRPMAMH1  RESET     KEY16                                                       
          WRITE     PMSAMHA1,KEY16;PMMHCNTR,PMMHAMHC,PMMHAMHD,PMMHAVPL,PMMHLOWB:
                                   PMMHUPPB,PMMHSSOB,PMMHSSOP,PMMHINLI,PMMHLSOP:
                                   PMMHPPSA,PMMHCDAT,PMMHCTIM,PMMHCUID,PMMHUDAT:
                                   PMMHUTIM,PMMHUUID,PMMHSPAR                   
          RETURN
.
DEPMAMH1  RESET     KEY16                                                       
          DELETE    PMSAMHA1,KEY16                                              
          RETURN
.
RSPMAMH2  RESET     KEY16                                                       
          READ      PMSAMHA2,KEY16;;                                            
          RETURN
.
RAPMAMH2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAMHA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAMH2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAMHA2,KEY16;PMMHCNTR,PMMHAMHC,PMMHAMHD,PMMHAVPL,PMMHLOWB:
                                   PMMHUPPB,PMMHSSOB,PMMHSSOP,PMMHINLI,PMMHLSOP:
                                   PMMHPPSA,PMMHCDAT,PMMHCTIM,PMMHCUID,PMMHUDAT:
                                   PMMHUTIM,PMMHUUID,PMMHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAMH2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSAMHA2;PMMHCNTR,PMMHAMHC,PMMHAMHD,PMMHAVPL,PMMHLOWB:      
                             PMMHUPPB,PMMHSSOB,PMMHSSOP,PMMHINLI,PMMHLSOP:      
                             PMMHPPSA,PMMHCDAT,PMMHCTIM,PMMHCUID,PMMHUDAT:      
                             PMMHUTIM,PMMHUUID,PMMHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAMH2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSAMHA2;PMMHCNTR,PMMHAMHC,PMMHAMHD,PMMHAVPL,PMMHLOWB:      
                             PMMHUPPB,PMMHSSOB,PMMHSSOP,PMMHINLI,PMMHLSOP:      
                             PMMHPPSA,PMMHCDAT,PMMHCTIM,PMMHCUID,PMMHUDAT:      
                             PMMHUTIM,PMMHUUID,PMMHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAMH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSAMHA2;PMMHCNTR,PMMHAMHC,PMMHAMHD,PMMHAVPL,PMMHLOWB:      
                             PMMHUPPB,PMMHSSOB,PMMHSSOP,PMMHINLI,PMMHLSOP:      
                             PMMHPPSA,PMMHCDAT,PMMHCTIM,PMMHCUID,PMMHUDAT:      
                             PMMHUTIM,PMMHUUID,PMMHSPAR                         
          RETURN
.
WRPMAMH2  RESET     KEY16                                                       
          WRITE     PMSAMHA2,KEY16;PMMHCNTR,PMMHAMHC,PMMHAMHD,PMMHAVPL,PMMHLOWB:
                                   PMMHUPPB,PMMHSSOB,PMMHSSOP,PMMHINLI,PMMHLSOP:
                                   PMMHPPSA,PMMHCDAT,PMMHCTIM,PMMHCUID,PMMHUDAT:
                                   PMMHUTIM,PMMHUUID,PMMHSPAR                   
          RETURN
.
DEPMAMH2  RESET     KEY16                                                       
          DELETE    PMSAMHA2,KEY16                                              
          RETURN
.
