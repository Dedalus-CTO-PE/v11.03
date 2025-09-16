.
. CCSPERIO    
. --------
. Filename     : ccsperaf.dat
.
RSCCPE1   RESET     KEY12                                                       
          READ      CCSPERA1,KEY12;;                                            
          RETURN
.
RACCPE1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPERA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPE1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPERA1,KEY12;CCPERUN,CCPEREC,CCPEDES,CCPEFKY,CCPEENC:     
                        CCPEURN,CCPEDAT,CCPETIM,CCPEQTY,CCPECHG,CCPECL1:        
                        CCPECL2,CCPECL3,CCPECL4,CCPECL5,CCPESPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPERA1;CCPERUN,CCPEREC,CCPEDES,CCPEFKY,CCPEENC:           
                        CCPEURN,CCPEDAT,CCPETIM,CCPEQTY,CCPECHG,CCPECL1:        
                        CCPECL2,CCPECL3,CCPECL4,CCPECL5,CCPESPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPERA1;CCPERUN,CCPEREC,CCPEDES,CCPEFKY,CCPEENC:           
                        CCPEURN,CCPEDAT,CCPETIM,CCPEQTY,CCPECHG,CCPECL1:        
                        CCPECL2,CCPECL3,CCPECL4,CCPECL5,CCPESPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPE1                                                                         
          UPDATE    CCSPERA1;CCPERUN,CCPEREC,CCPEDES,CCPEFKY,CCPEENC:           
                        CCPEURN,CCPEDAT,CCPETIM,CCPEQTY,CCPECHG,CCPECL1:        
                        CCPECL2,CCPECL3,CCPECL4,CCPECL5,CCPESPA                 
          RETURN
.
WRCCPE1   RESET     KEY12                                                       
          WRITE     CCSPERA1,KEY12;CCPERUN,CCPEREC,CCPEDES,CCPEFKY,CCPEENC:     
                        CCPEURN,CCPEDAT,CCPETIM,CCPEQTY,CCPECHG,CCPECL1:        
                        CCPECL2,CCPECL3,CCPECL4,CCPECL5,CCPESPA                 
          RETURN
.
DECCPE1   RESET     KEY12                                                       
          DELETE    CCSPERA1,KEY12                                              
          RETURN
.
