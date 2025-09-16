.
. CCSPCDIO    
. --------
. Filename     : ccspcdaf.dat
.
RSCCPC1   RESET     KEY28                                                       
          READ      CCSPCDA1,KEY28;;                                            
          RETURN
.
RACCPC1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPCDA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPC1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPCDA1,KEY28;CCPCHCD,CCPCDPT,CCPCYEAR,CCPCPER,CCPCPCD:    
                        CCPCCTY,CCPCCST,CCPCBCT,CCPCFBU,CCPCRVI,CCPCSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPCDA1;CCPCHCD,CCPCDPT,CCPCYEAR,CCPCPER,CCPCPCD:          
                        CCPCCTY,CCPCCST,CCPCBCT,CCPCFBU,CCPCRVI,CCPCSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPCDA1;CCPCHCD,CCPCDPT,CCPCYEAR,CCPCPER,CCPCPCD:          
                        CCPCCTY,CCPCCST,CCPCBCT,CCPCFBU,CCPCRVI,CCPCSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPC1                                                                         
          UPDATE    CCSPCDA1;CCPCHCD,CCPCDPT,CCPCYEAR,CCPCPER,CCPCPCD:          
                        CCPCCTY,CCPCCST,CCPCBCT,CCPCFBU,CCPCRVI,CCPCSPA         
          RETURN
.
WRCCPC1   RESET     KEY28                                                       
          WRITE     CCSPCDA1,KEY28;CCPCHCD,CCPCDPT,CCPCYEAR,CCPCPER,CCPCPCD:    
                        CCPCCTY,CCPCCST,CCPCBCT,CCPCFBU,CCPCRVI,CCPCSPA         
          RETURN
.
DECCPC1   RESET     KEY28                                                       
          DELETE    CCSPCDA1,KEY28                                              
          RETURN
.
