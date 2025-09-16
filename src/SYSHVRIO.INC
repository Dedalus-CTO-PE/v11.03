.
. SYSHVRIO    
. --------
. Filename     : syshvraf.dat
.
RSSYHV1   RESET     KEY5                                                        
          READ      SYSHVRA1,KEY5;;                                             
          RETURN
.
RASYHV1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SYSHVRA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYHV1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SYSHVRA1,KEY5;SYHVSYS,SYHVFIL,SYHVHID,SYHVDES,SYHVFLD:      
                        SYHVIDX,SYHVDTOP,SYHVDBOT,SYHVDLEF,SYHVDRIG,SYHVCH01:   
                        SYHVCH02,SYHVCH03,SYHVCH04,SYHVCH05,SYHVCH06,SYHVCH07:  
                        SYHVCH08,SYHVCH09,SYHVCH10,SYHVCF01,SYHVCF02,SYHVCF03:  
                        SYHVCF04,SYHVCF05,SYHVCF06,SYHVCF07,SYHVCF08,SYHVCF09:  
                        SYHVCF10,SYHVER01,SYHVER02,SYHVER03,SYHVER04,SYHVER05:  
                        SYHVER06,SYHVER07,SYHVER08,SYHVER09,SYHVER10,SYHVCW01:  
                        SYHVCW02,SYHVCW03,SYHVCW04,SYHVCW05,SYHVCW06,SYHVCW07:  
                        SYHVCW08,SYHVCW09,SYHVCW10,SYHVCBF,SYHVSPAR             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSYHV1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SYSHVRA1;SYHVSYS,SYHVFIL,SYHVHID,SYHVDES,SYHVFLD:           
                        SYHVIDX,SYHVDTOP,SYHVDBOT,SYHVDLEF,SYHVDRIG,SYHVCH01:   
                        SYHVCH02,SYHVCH03,SYHVCH04,SYHVCH05,SYHVCH06,SYHVCH07:  
                        SYHVCH08,SYHVCH09,SYHVCH10,SYHVCF01,SYHVCF02,SYHVCF03:  
                        SYHVCF04,SYHVCF05,SYHVCF06,SYHVCF07,SYHVCF08,SYHVCF09:  
                        SYHVCF10,SYHVER01,SYHVER02,SYHVER03,SYHVER04,SYHVER05:  
                        SYHVER06,SYHVER07,SYHVER08,SYHVER09,SYHVER10,SYHVCW01:  
                        SYHVCW02,SYHVCW03,SYHVCW04,SYHVCW05,SYHVCW06,SYHVCW07:  
                        SYHVCW08,SYHVCW09,SYHVCW10,SYHVCBF,SYHVSPAR             
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSYHV1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SYSHVRA1;SYHVSYS,SYHVFIL,SYHVHID,SYHVDES,SYHVFLD:           
                        SYHVIDX,SYHVDTOP,SYHVDBOT,SYHVDLEF,SYHVDRIG,SYHVCH01:   
                        SYHVCH02,SYHVCH03,SYHVCH04,SYHVCH05,SYHVCH06,SYHVCH07:  
                        SYHVCH08,SYHVCH09,SYHVCH10,SYHVCF01,SYHVCF02,SYHVCF03:  
                        SYHVCF04,SYHVCF05,SYHVCF06,SYHVCF07,SYHVCF08,SYHVCF09:  
                        SYHVCF10,SYHVER01,SYHVER02,SYHVER03,SYHVER04,SYHVER05:  
                        SYHVER06,SYHVER07,SYHVER08,SYHVER09,SYHVER10,SYHVCW01:  
                        SYHVCW02,SYHVCW03,SYHVCW04,SYHVCW05,SYHVCW06,SYHVCW07:  
                        SYHVCW08,SYHVCW09,SYHVCW10,SYHVCBF,SYHVSPAR             
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSYHV1                                                                         
          UPDATE    SYSHVRA1;SYHVSYS,SYHVFIL,SYHVHID,SYHVDES,SYHVFLD:           
                        SYHVIDX,SYHVDTOP,SYHVDBOT,SYHVDLEF,SYHVDRIG,SYHVCH01:   
                        SYHVCH02,SYHVCH03,SYHVCH04,SYHVCH05,SYHVCH06,SYHVCH07:  
                        SYHVCH08,SYHVCH09,SYHVCH10,SYHVCF01,SYHVCF02,SYHVCF03:  
                        SYHVCF04,SYHVCF05,SYHVCF06,SYHVCF07,SYHVCF08,SYHVCF09:  
                        SYHVCF10,SYHVER01,SYHVER02,SYHVER03,SYHVER04,SYHVER05:  
                        SYHVER06,SYHVER07,SYHVER08,SYHVER09,SYHVER10,SYHVCW01:  
                        SYHVCW02,SYHVCW03,SYHVCW04,SYHVCW05,SYHVCW06,SYHVCW07:  
                        SYHVCW08,SYHVCW09,SYHVCW10,SYHVCBF,SYHVSPAR             
          RETURN
.
WRSYHV1   RESET     KEY5                                                        
          WRITE     SYSHVRA1,KEY5;SYHVSYS,SYHVFIL,SYHVHID,SYHVDES,SYHVFLD:      
                        SYHVIDX,SYHVDTOP,SYHVDBOT,SYHVDLEF,SYHVDRIG,SYHVCH01:   
                        SYHVCH02,SYHVCH03,SYHVCH04,SYHVCH05,SYHVCH06,SYHVCH07:  
                        SYHVCH08,SYHVCH09,SYHVCH10,SYHVCF01,SYHVCF02,SYHVCF03:  
                        SYHVCF04,SYHVCF05,SYHVCF06,SYHVCF07,SYHVCF08,SYHVCF09:  
                        SYHVCF10,SYHVER01,SYHVER02,SYHVER03,SYHVER04,SYHVER05:  
                        SYHVER06,SYHVER07,SYHVER08,SYHVER09,SYHVER10,SYHVCW01:  
                        SYHVCW02,SYHVCW03,SYHVCW04,SYHVCW05,SYHVCW06,SYHVCW07:  
                        SYHVCW08,SYHVCW09,SYHVCW10,SYHVCBF,SYHVSPAR             
          RETURN
.
DESYHV1   RESET     KEY5                                                        
          DELETE    SYSHVRA1,KEY5                                               
          RETURN
.
