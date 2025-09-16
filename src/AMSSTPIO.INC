.
. AMSSTPIO    
. --------
. Filename     : amsstpaf.dat
.
RSAMST1   RESET     KEY28                                                       
          READ      AMSSTPA1,KEY28;;                                            
          RETURN
.
RAAMST1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      AMSSTPA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMST1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      AMSSTPA1,KEY28;AMSTSTK,AMSTBLD,AMSTLOC,AMSTREG,AMSTASS:     
                        AMSTGDT,AMSTPDT,AMSTCBY,AMSTCOM,AMSTLCM,AMSTPOP:        
                        AMSTPDA,AMSTPTM,AMSTUR1,AMSTUR2,AMSTUD1,AMSTUD2:        
                        AMSTUY1,AMSTUY2,AMSTSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMST1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSSTPA1;AMSTSTK,AMSTBLD,AMSTLOC,AMSTREG,AMSTASS:           
                        AMSTGDT,AMSTPDT,AMSTCBY,AMSTCOM,AMSTLCM,AMSTPOP:        
                        AMSTPDA,AMSTPTM,AMSTUR1,AMSTUR2,AMSTUD1,AMSTUD2:        
                        AMSTUY1,AMSTUY2,AMSTSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMST1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSSTPA1;AMSTSTK,AMSTBLD,AMSTLOC,AMSTREG,AMSTASS:           
                        AMSTGDT,AMSTPDT,AMSTCBY,AMSTCOM,AMSTLCM,AMSTPOP:        
                        AMSTPDA,AMSTPTM,AMSTUR1,AMSTUR2,AMSTUD1,AMSTUD2:        
                        AMSTUY1,AMSTUY2,AMSTSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMST1                                                                         
          UPDATE    AMSSTPA1;AMSTSTK,AMSTBLD,AMSTLOC,AMSTREG,AMSTASS:           
                        AMSTGDT,AMSTPDT,AMSTCBY,AMSTCOM,AMSTLCM,AMSTPOP:        
                        AMSTPDA,AMSTPTM,AMSTUR1,AMSTUR2,AMSTUD1,AMSTUD2:        
                        AMSTUY1,AMSTUY2,AMSTSPA                                 
          RETURN
.
WRAMST1   RESET     KEY28                                                       
          WRITE     AMSSTPA1,KEY28;AMSTSTK,AMSTBLD,AMSTLOC,AMSTREG,AMSTASS:     
                        AMSTGDT,AMSTPDT,AMSTCBY,AMSTCOM,AMSTLCM,AMSTPOP:        
                        AMSTPDA,AMSTPTM,AMSTUR1,AMSTUR2,AMSTUD1,AMSTUD2:        
                        AMSTUY1,AMSTUY2,AMSTSPA                                 
          RETURN
.
DEAMST1   RESET     KEY28                                                       
          DELETE    AMSSTPA1,KEY28                                              
          RETURN
.
RSAMST2   RESET     KEY19                                                       
          READ      AMSSTPA2,KEY19;;                                            
          RETURN
.
RAAMST2   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      AMSSTPA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMST2   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      AMSSTPA2,KEY19;AMSTSTK,AMSTBLD,AMSTLOC,AMSTREG,AMSTASS:     
                        AMSTGDT,AMSTPDT,AMSTCBY,AMSTCOM,AMSTLCM,AMSTPOP:        
                        AMSTPDA,AMSTPTM,AMSTUR1,AMSTUR2,AMSTUD1,AMSTUD2:        
                        AMSTUY1,AMSTUY2,AMSTSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMST2                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSSTPA2;AMSTSTK,AMSTBLD,AMSTLOC,AMSTREG,AMSTASS:           
                        AMSTGDT,AMSTPDT,AMSTCBY,AMSTCOM,AMSTLCM,AMSTPOP:        
                        AMSTPDA,AMSTPTM,AMSTUR1,AMSTUR2,AMSTUD1,AMSTUD2:        
                        AMSTUY1,AMSTUY2,AMSTSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMST2                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSSTPA2;AMSTSTK,AMSTBLD,AMSTLOC,AMSTREG,AMSTASS:           
                        AMSTGDT,AMSTPDT,AMSTCBY,AMSTCOM,AMSTLCM,AMSTPOP:        
                        AMSTPDA,AMSTPTM,AMSTUR1,AMSTUR2,AMSTUD1,AMSTUD2:        
                        AMSTUY1,AMSTUY2,AMSTSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMST2                                                                         
          UPDATE    AMSSTPA2;AMSTSTK,AMSTBLD,AMSTLOC,AMSTREG,AMSTASS:           
                        AMSTGDT,AMSTPDT,AMSTCBY,AMSTCOM,AMSTLCM,AMSTPOP:        
                        AMSTPDA,AMSTPTM,AMSTUR1,AMSTUR2,AMSTUD1,AMSTUD2:        
                        AMSTUY1,AMSTUY2,AMSTSPA                                 
          RETURN
.
WRAMST2   RESET     KEY19                                                       
          WRITE     AMSSTPA2,KEY19;AMSTSTK,AMSTBLD,AMSTLOC,AMSTREG,AMSTASS:     
                        AMSTGDT,AMSTPDT,AMSTCBY,AMSTCOM,AMSTLCM,AMSTPOP:        
                        AMSTPDA,AMSTPTM,AMSTUR1,AMSTUR2,AMSTUD1,AMSTUD2:        
                        AMSTUY1,AMSTUY2,AMSTSPA                                 
          RETURN
.
DEAMST2   RESET     KEY19                                                       
          DELETE    AMSSTPA2,KEY19                                              
          RETURN
.
