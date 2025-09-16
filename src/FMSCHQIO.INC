.
. FMSCHQIO    
. --------
. Filename     : fmschqaf.dat
.
RSFMCH1   RESET     KEY15                                                       
          READ      FMSCHQA1,KEY15;;                                            
          RETURN
.
RAFMCH1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      FMSCHQA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMCH1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      FMSCHQA1,KEY15;FMCHCHQ,FMCHDES,FMCHBAL,FMCHBDT,FMCHFMT:     
                        FMCHBSB,FMCHACCT,FMCHNZAC,FMCHDESC,FMCHADD1,FMCHADD2:   
                        FMCHADD3,FMCHADD4,FMCHFRMT,FMCHBNAM,FMCHUSER,FMCHEDSC:  
                        FMCHDFRM,FMCHUR1,FMCHUR2,FMCHUD1,FMCHUD2,FMCHUY1:       
                        FMCHUY2,FMCHSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMCH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSCHQA1;FMCHCHQ,FMCHDES,FMCHBAL,FMCHBDT,FMCHFMT:           
                        FMCHBSB,FMCHACCT,FMCHNZAC,FMCHDESC,FMCHADD1,FMCHADD2:   
                        FMCHADD3,FMCHADD4,FMCHFRMT,FMCHBNAM,FMCHUSER,FMCHEDSC:  
                        FMCHDFRM,FMCHUR1,FMCHUR2,FMCHUD1,FMCHUD2,FMCHUY1:       
                        FMCHUY2,FMCHSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMCH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSCHQA1;FMCHCHQ,FMCHDES,FMCHBAL,FMCHBDT,FMCHFMT:           
                        FMCHBSB,FMCHACCT,FMCHNZAC,FMCHDESC,FMCHADD1,FMCHADD2:   
                        FMCHADD3,FMCHADD4,FMCHFRMT,FMCHBNAM,FMCHUSER,FMCHEDSC:  
                        FMCHDFRM,FMCHUR1,FMCHUR2,FMCHUD1,FMCHUD2,FMCHUY1:       
                        FMCHUY2,FMCHSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMCH1                                                                         
          UPDATE    FMSCHQA1;FMCHCHQ,FMCHDES,FMCHBAL,FMCHBDT,FMCHFMT:           
                        FMCHBSB,FMCHACCT,FMCHNZAC,FMCHDESC,FMCHADD1,FMCHADD2:   
                        FMCHADD3,FMCHADD4,FMCHFRMT,FMCHBNAM,FMCHUSER,FMCHEDSC:  
                        FMCHDFRM,FMCHUR1,FMCHUR2,FMCHUD1,FMCHUD2,FMCHUY1:       
                        FMCHUY2,FMCHSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMCH1   RESET     KEY15                                                       
          WRITE     FMSCHQA1,KEY15;FMCHCHQ,FMCHDES,FMCHBAL,FMCHBDT,FMCHFMT:     
                        FMCHBSB,FMCHACCT,FMCHNZAC,FMCHDESC,FMCHADD1,FMCHADD2:   
                        FMCHADD3,FMCHADD4,FMCHFRMT,FMCHBNAM,FMCHUSER,FMCHEDSC:  
                        FMCHDFRM,FMCHUR1,FMCHUR2,FMCHUD1,FMCHUD2,FMCHUY1:       
                        FMCHUY2,FMCHSPA                                         
          RETURN
.
DEFMCH1   RESET     KEY15                                                       
          DELETE    FMSCHQA1,KEY15                                              
          RETURN
.
RLFMCH1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     FMSCHQA1,KEY15;FMCHCHQ,FMCHDES,FMCHBAL,FMCHBDT,FMCHFMT:     
                        FMCHBSB,FMCHACCT,FMCHNZAC,FMCHDESC,FMCHADD1,FMCHADD2:   
                        FMCHADD3,FMCHADD4,FMCHFRMT,FMCHBNAM,FMCHUSER,FMCHEDSC:  
                        FMCHDFRM,FMCHUR1,FMCHUR2,FMCHUD1,FMCHUD2,FMCHUY1:       
                        FMCHUY2,FMCHSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMCH1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSCHQA1;FMCHCHQ,FMCHDES,FMCHBAL,FMCHBDT,FMCHFMT:           
                        FMCHBSB,FMCHACCT,FMCHNZAC,FMCHDESC,FMCHADD1,FMCHADD2:   
                        FMCHADD3,FMCHADD4,FMCHFRMT,FMCHBNAM,FMCHUSER,FMCHEDSC:  
                        FMCHDFRM,FMCHUR1,FMCHUR2,FMCHUD1,FMCHUD2,FMCHUY1:       
                        FMCHUY2,FMCHSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMCH1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSCHQA1;FMCHCHQ,FMCHDES,FMCHBAL,FMCHBDT,FMCHFMT:           
                        FMCHBSB,FMCHACCT,FMCHNZAC,FMCHDESC,FMCHADD1,FMCHADD2:   
                        FMCHADD3,FMCHADD4,FMCHFRMT,FMCHBNAM,FMCHUSER,FMCHEDSC:  
                        FMCHDFRM,FMCHUR1,FMCHUR2,FMCHUD1,FMCHUD2,FMCHUY1:       
                        FMCHUY2,FMCHSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMCH1   RESET     KEY15                                                       
          UNLOCK    FMSCHQA1                                                    
          RETURN
.
