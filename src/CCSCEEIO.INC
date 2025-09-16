.
. CCSCEEIO    
. --------
. Filename     : ccsceeaf.dat
.
RSCCEE1   RESET     KEY30                                                       
          READ      CCSCEEA1,KEY30;;                                            
          RETURN
.
RACCEE1   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEEA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEE1   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEEA1,KEY30;CCEELV1,CCEELV2,CCEELV3,CCEENEP,CCEEFTC:     
                        CCEEFMN,CCEEFMX,CCEEFSV,CCEETTC,CCEETMN,CCEETMX:        
                        CCEETSV,CCEELTO,CCEELMN,CCEELMX,CCEELSV,CCEESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCEEA1;CCEELV1,CCEELV2,CCEELV3,CCEENEP,CCEEFTC:           
                        CCEEFMN,CCEEFMX,CCEEFSV,CCEETTC,CCEETMN,CCEETMX:        
                        CCEETSV,CCEELTO,CCEELMN,CCEELMX,CCEELSV,CCEESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCEEA1;CCEELV1,CCEELV2,CCEELV3,CCEENEP,CCEEFTC:           
                        CCEEFMN,CCEEFMX,CCEEFSV,CCEETTC,CCEETMN,CCEETMX:        
                        CCEETSV,CCEELTO,CCEELMN,CCEELMX,CCEELSV,CCEESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEE1                                                                         
          UPDATE    CCSCEEA1;CCEELV1,CCEELV2,CCEELV3,CCEENEP,CCEEFTC:           
                        CCEEFMN,CCEEFMX,CCEEFSV,CCEETTC,CCEETMN,CCEETMX:        
                        CCEETSV,CCEELTO,CCEELMN,CCEELMX,CCEELSV,CCEESPA         
          RETURN
.
WRCCEE1   RESET     KEY30                                                       
          WRITE     CCSCEEA1,KEY30;CCEELV1,CCEELV2,CCEELV3,CCEENEP,CCEEFTC:     
                        CCEEFMN,CCEEFMX,CCEEFSV,CCEETTC,CCEETMN,CCEETMX:        
                        CCEETSV,CCEELTO,CCEELMN,CCEELMX,CCEELSV,CCEESPA         
          RETURN
.
DECCEE1   RESET     KEY30                                                       
          DELETE    CCSCEEA1,KEY30                                              
          RETURN
.
