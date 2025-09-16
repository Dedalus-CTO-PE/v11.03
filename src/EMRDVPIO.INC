.
. EMRDVPIO    
. --------
. Filename     : emrdvpaf.dat
.
RSEMDVP1  RESET     KEY19                                                       
          READ      EMRDVPA1,KEY19;;                                            
          RETURN
.
RAEMDVP1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      EMRDVPA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMDVP1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      EMRDVPA1,KEY19;EMDVSTCD,EMDVDDTE,EMDVDTIM,EMDVRDVN,EMDVFFL1:
                        EMDVFFL2,EMDVFFL3,EMDVFFL4,EMDVFFL5,EMDVUSCR,EMDVDTRC:  
                        EMDVTMRC,EMDVUSUR,EMDVDTRU,EMDVTMRU,EMDVSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMDVP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRDVPA1;EMDVSTCD,EMDVDDTE,EMDVDTIM,EMDVRDVN,EMDVFFL1:      
                        EMDVFFL2,EMDVFFL3,EMDVFFL4,EMDVFFL5,EMDVUSCR,EMDVDTRC:  
                        EMDVTMRC,EMDVUSUR,EMDVDTRU,EMDVTMRU,EMDVSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMDVP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRDVPA1;EMDVSTCD,EMDVDDTE,EMDVDTIM,EMDVRDVN,EMDVFFL1:      
                        EMDVFFL2,EMDVFFL3,EMDVFFL4,EMDVFFL5,EMDVUSCR,EMDVDTRC:  
                        EMDVTMRC,EMDVUSUR,EMDVDTRU,EMDVTMRU,EMDVSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMDVP1                                                                        
          UPDATE    EMRDVPA1;EMDVSTCD,EMDVDDTE,EMDVDTIM,EMDVRDVN,EMDVFFL1:      
                        EMDVFFL2,EMDVFFL3,EMDVFFL4,EMDVFFL5,EMDVUSCR,EMDVDTRC:  
                        EMDVTMRC,EMDVUSUR,EMDVDTRU,EMDVTMRU,EMDVSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMDVP1  RESET     KEY19                                                       
          WRITE     EMRDVPA1,KEY19;EMDVSTCD,EMDVDDTE,EMDVDTIM,EMDVRDVN,EMDVFFL1:
                        EMDVFFL2,EMDVFFL3,EMDVFFL4,EMDVFFL5,EMDVUSCR,EMDVDTRC:  
                        EMDVTMRC,EMDVUSUR,EMDVDTRU,EMDVTMRU,EMDVSPAR            
          RETURN
.
DEEMDVP1  RESET     KEY19                                                       
          DELETE    EMRDVPA1,KEY19                                              
          RETURN
.
RLEMDVP1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     EMRDVPA1,KEY19;EMDVSTCD,EMDVDDTE,EMDVDTIM,EMDVRDVN,EMDVFFL1:
                        EMDVFFL2,EMDVFFL3,EMDVFFL4,EMDVFFL5,EMDVUSCR,EMDVDTRC:  
                        EMDVTMRC,EMDVUSUR,EMDVDTRU,EMDVTMRU,EMDVSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMDVP1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRDVPA1;EMDVSTCD,EMDVDDTE,EMDVDTIM,EMDVRDVN,EMDVFFL1:      
                        EMDVFFL2,EMDVFFL3,EMDVFFL4,EMDVFFL5,EMDVUSCR,EMDVDTRC:  
                        EMDVTMRC,EMDVUSUR,EMDVDTRU,EMDVTMRU,EMDVSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMDVP1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRDVPA1;EMDVSTCD,EMDVDDTE,EMDVDTIM,EMDVRDVN,EMDVFFL1:      
                        EMDVFFL2,EMDVFFL3,EMDVFFL4,EMDVFFL5,EMDVUSCR,EMDVDTRC:  
                        EMDVTMRC,EMDVUSUR,EMDVDTRU,EMDVTMRU,EMDVSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMDVP1  RESET     KEY19                                                       
          UNLOCK    EMRDVPA1                                                    
          RETURN
.
