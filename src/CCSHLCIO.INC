.
. CCSHLCIO    
. --------
. Filename     : ccshlcaf.dat
.
RSCCHL1   RESET     KEY2                                                        
          READ      CCSHLCA1,KEY2;;                                             
          RETURN
.
RACCHL1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      CCSHLCA1,KEY2;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCHL1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      CCSHLCA1,KEY2;CCHLHCD,CCHLPMA,CCHLPTR,CCHLPMI,CCHLPDS:      
                        CCHLPVI,CCHLPMO,CCHLPMD,CCHLADE,CCHLADI,CCHLOSI:        
                        CCHLOBB,CCHLCDP,CCHLPMX,CCHLPIN,CCHLPDT,CCHLPCD:        
                        CCHLPMB,CCHLPDC,CCHLPIC,CCHLARF,CCHLENC,CCHLEVS:        
                        CCHLOPR,CCHLSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCHL1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSHLCA1;CCHLHCD,CCHLPMA,CCHLPTR,CCHLPMI,CCHLPDS:           
                        CCHLPVI,CCHLPMO,CCHLPMD,CCHLADE,CCHLADI,CCHLOSI:        
                        CCHLOBB,CCHLCDP,CCHLPMX,CCHLPIN,CCHLPDT,CCHLPCD:        
                        CCHLPMB,CCHLPDC,CCHLPIC,CCHLARF,CCHLENC,CCHLEVS:        
                        CCHLOPR,CCHLSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCHL1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSHLCA1;CCHLHCD,CCHLPMA,CCHLPTR,CCHLPMI,CCHLPDS:           
                        CCHLPVI,CCHLPMO,CCHLPMD,CCHLADE,CCHLADI,CCHLOSI:        
                        CCHLOBB,CCHLCDP,CCHLPMX,CCHLPIN,CCHLPDT,CCHLPCD:        
                        CCHLPMB,CCHLPDC,CCHLPIC,CCHLARF,CCHLENC,CCHLEVS:        
                        CCHLOPR,CCHLSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCHL1                                                                         
          UPDATE    CCSHLCA1;CCHLHCD,CCHLPMA,CCHLPTR,CCHLPMI,CCHLPDS:           
                        CCHLPVI,CCHLPMO,CCHLPMD,CCHLADE,CCHLADI,CCHLOSI:        
                        CCHLOBB,CCHLCDP,CCHLPMX,CCHLPIN,CCHLPDT,CCHLPCD:        
                        CCHLPMB,CCHLPDC,CCHLPIC,CCHLARF,CCHLENC,CCHLEVS:        
                        CCHLOPR,CCHLSPA                                         
          RETURN
.
WRCCHL1   RESET     KEY2                                                        
          WRITE     CCSHLCA1,KEY2;CCHLHCD,CCHLPMA,CCHLPTR,CCHLPMI,CCHLPDS:      
                        CCHLPVI,CCHLPMO,CCHLPMD,CCHLADE,CCHLADI,CCHLOSI:        
                        CCHLOBB,CCHLCDP,CCHLPMX,CCHLPIN,CCHLPDT,CCHLPCD:        
                        CCHLPMB,CCHLPDC,CCHLPIC,CCHLARF,CCHLENC,CCHLEVS:        
                        CCHLOPR,CCHLSPA                                         
          RETURN
.
DECCHL1   RESET     KEY2                                                        
          DELETE    CCSHLCA1,KEY2                                               
          RETURN
.
