.
. CCSCEXIO    
. --------
. Filename     : ccscexaf.dat
.
RSCCEX1   RESET     KEY4                                                        
          READ      CCSCEXA1,KEY4;;                                             
          RETURN
.
RACCEX1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCEXA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEX1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCEXA1,KEY4;CCEXEID,CCEXR01,CCEXF01,CCEXT01,CCEXR02:      
                        CCEXF02,CCEXT02,CCEXR03,CCEXF03,CCEXT03,CCEXR04:        
                        CCEXF04,CCEXT04,CCEXR05,CCEXF05,CCEXT05,CCEXR06:        
                        CCEXF06,CCEXT06,CCEXR07,CCEXF07,CCEXT07,CCEXR08:        
                        CCEXF08,CCEXT08,CCEXR09,CCEXF09,CCEXT09,CCEXR10:        
                        CCEXF10,CCEXT10,CCEXR11,CCEXF11,CCEXT11,CCEXR12:        
                        CCEXF12,CCEXT12,CCEXR13,CCEXF13,CCEXT13,CCEXR14:        
                        CCEXF14,CCEXT14,CCEXSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEX1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCEXA1;CCEXEID,CCEXR01,CCEXF01,CCEXT01,CCEXR02:           
                        CCEXF02,CCEXT02,CCEXR03,CCEXF03,CCEXT03,CCEXR04:        
                        CCEXF04,CCEXT04,CCEXR05,CCEXF05,CCEXT05,CCEXR06:        
                        CCEXF06,CCEXT06,CCEXR07,CCEXF07,CCEXT07,CCEXR08:        
                        CCEXF08,CCEXT08,CCEXR09,CCEXF09,CCEXT09,CCEXR10:        
                        CCEXF10,CCEXT10,CCEXR11,CCEXF11,CCEXT11,CCEXR12:        
                        CCEXF12,CCEXT12,CCEXR13,CCEXF13,CCEXT13,CCEXR14:        
                        CCEXF14,CCEXT14,CCEXSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEX1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCEXA1;CCEXEID,CCEXR01,CCEXF01,CCEXT01,CCEXR02:           
                        CCEXF02,CCEXT02,CCEXR03,CCEXF03,CCEXT03,CCEXR04:        
                        CCEXF04,CCEXT04,CCEXR05,CCEXF05,CCEXT05,CCEXR06:        
                        CCEXF06,CCEXT06,CCEXR07,CCEXF07,CCEXT07,CCEXR08:        
                        CCEXF08,CCEXT08,CCEXR09,CCEXF09,CCEXT09,CCEXR10:        
                        CCEXF10,CCEXT10,CCEXR11,CCEXF11,CCEXT11,CCEXR12:        
                        CCEXF12,CCEXT12,CCEXR13,CCEXF13,CCEXT13,CCEXR14:        
                        CCEXF14,CCEXT14,CCEXSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEX1                                                                         
          UPDATE    CCSCEXA1;CCEXEID,CCEXR01,CCEXF01,CCEXT01,CCEXR02:           
                        CCEXF02,CCEXT02,CCEXR03,CCEXF03,CCEXT03,CCEXR04:        
                        CCEXF04,CCEXT04,CCEXR05,CCEXF05,CCEXT05,CCEXR06:        
                        CCEXF06,CCEXT06,CCEXR07,CCEXF07,CCEXT07,CCEXR08:        
                        CCEXF08,CCEXT08,CCEXR09,CCEXF09,CCEXT09,CCEXR10:        
                        CCEXF10,CCEXT10,CCEXR11,CCEXF11,CCEXT11,CCEXR12:        
                        CCEXF12,CCEXT12,CCEXR13,CCEXF13,CCEXT13,CCEXR14:        
                        CCEXF14,CCEXT14,CCEXSPA                                 
          RETURN
.
WRCCEX1   RESET     KEY4                                                        
          WRITE     CCSCEXA1,KEY4;CCEXEID,CCEXR01,CCEXF01,CCEXT01,CCEXR02:      
                        CCEXF02,CCEXT02,CCEXR03,CCEXF03,CCEXT03,CCEXR04:        
                        CCEXF04,CCEXT04,CCEXR05,CCEXF05,CCEXT05,CCEXR06:        
                        CCEXF06,CCEXT06,CCEXR07,CCEXF07,CCEXT07,CCEXR08:        
                        CCEXF08,CCEXT08,CCEXR09,CCEXF09,CCEXT09,CCEXR10:        
                        CCEXF10,CCEXT10,CCEXR11,CCEXF11,CCEXT11,CCEXR12:        
                        CCEXF12,CCEXT12,CCEXR13,CCEXF13,CCEXT13,CCEXR14:        
                        CCEXF14,CCEXT14,CCEXSPA                                 
          RETURN
.
DECCEX1   RESET     KEY4                                                        
          DELETE    CCSCEXA1,KEY4                                               
          RETURN
.
