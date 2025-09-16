.
. CCIPARIO    
. --------
. Filename     : cciparaf.dat
.
RSCCPAR1  RESET     KEY3                                                        
          READ      CCIPARA1,KEY3;;                                             
          RETURN
.
RACCPAR1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CCIPARA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPAR1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CCIPARA1,KEY3;DCCPATYP,CCPAAUTO,CCPAPCD1,CCPAPCD2,CCPAPCD3: 
                        CCPADCD1,CCPADCD2,CCPASPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCCPATYP,CCPATYPE                                           
          RETURN
.
RKCCPAR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    CCIPARA1;DCCPATYP,CCPAAUTO,CCPAPCD1,CCPAPCD2,CCPAPCD3:      
                        CCPADCD1,CCPADCD2,CCPASPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCCPATYP,CCPATYPE                                           
          RETURN
.
RPCCPAR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    CCIPARA1;DCCPATYP,CCPAAUTO,CCPAPCD1,CCPAPCD2,CCPAPCD3:      
                        CCPADCD1,CCPADCD2,CCPASPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCCPATYP,CCPATYPE                                           
          RETURN
.
UPCCPAR1                                                                        
          MOVE      CCPATYPE,DCCPATYP                                           
          UPDATE    CCIPARA1;DCCPATYP,CCPAAUTO,CCPAPCD1,CCPAPCD2,CCPAPCD3:      
                        CCPADCD1,CCPADCD2,CCPASPAR                              
          RETURN
.
WRCCPAR1  RESET     KEY3                                                        
          MOVE      CCPATYPE,DCCPATYP                                           
          WRITE     CCIPARA1,KEY3;DCCPATYP,CCPAAUTO,CCPAPCD1,CCPAPCD2,CCPAPCD3: 
                        CCPADCD1,CCPADCD2,CCPASPAR                              
          RETURN
.
DECCPAR1  RESET     KEY3                                                        
          DELETE    CCIPARA1,KEY3                                               
          RETURN
.
