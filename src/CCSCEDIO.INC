.
. CCSCEDIO    
. --------
. Filename     : ccscedaf.dat
.
RSCCED1   RESET     KEY20                                                       
          READ      CCSCEDA1,KEY20;;                                            
          RETURN
.
RACCED1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEDA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCED1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEDA1,KEY20;CCEDLV1,CCEDLV2,CCEDNEP,CCEDFTC,CCEDFMN:     
                        CCEDFMX,CCEDFSV,CCEDTTC,CCEDTMN,CCEDTMX,CCEDTSV:        
                        CCEDLTO,CCEDLMN,CCEDLMX,CCEDLSV,CCEDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCED1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCEDA1;CCEDLV1,CCEDLV2,CCEDNEP,CCEDFTC,CCEDFMN:           
                        CCEDFMX,CCEDFSV,CCEDTTC,CCEDTMN,CCEDTMX,CCEDTSV:        
                        CCEDLTO,CCEDLMN,CCEDLMX,CCEDLSV,CCEDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCED1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCEDA1;CCEDLV1,CCEDLV2,CCEDNEP,CCEDFTC,CCEDFMN:           
                        CCEDFMX,CCEDFSV,CCEDTTC,CCEDTMN,CCEDTMX,CCEDTSV:        
                        CCEDLTO,CCEDLMN,CCEDLMX,CCEDLSV,CCEDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCED1                                                                         
          UPDATE    CCSCEDA1;CCEDLV1,CCEDLV2,CCEDNEP,CCEDFTC,CCEDFMN:           
                        CCEDFMX,CCEDFSV,CCEDTTC,CCEDTMN,CCEDTMX,CCEDTSV:        
                        CCEDLTO,CCEDLMN,CCEDLMX,CCEDLSV,CCEDSPA                 
          RETURN
.
WRCCED1   RESET     KEY20                                                       
          WRITE     CCSCEDA1,KEY20;CCEDLV1,CCEDLV2,CCEDNEP,CCEDFTC,CCEDFMN:     
                        CCEDFMX,CCEDFSV,CCEDTTC,CCEDTMN,CCEDTMX,CCEDTSV:        
                        CCEDLTO,CCEDLMN,CCEDLMX,CCEDLSV,CCEDSPA                 
          RETURN
.
DECCED1   RESET     KEY20                                                       
          DELETE    CCSCEDA1,KEY20                                              
          RETURN
.
