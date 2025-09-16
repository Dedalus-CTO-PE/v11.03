.
. CCSPFKIO    
. --------
. Filename     : ccspfkaf.dat
.
RSCCPF1   RESET     KEY20                                                       
          READ      CCSPFKA1,KEY20;;                                            
          RETURN
.
RACCPF1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPFKA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPF1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPFKA1,KEY20;CCPFFKY,CCPFDES,CCPFSUS,CCPFSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPFKA1;CCPFFKY,CCPFDES,CCPFSUS,CCPFSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPFKA1;CCPFFKY,CCPFDES,CCPFSUS,CCPFSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPF1                                                                         
          UPDATE    CCSPFKA1;CCPFFKY,CCPFDES,CCPFSUS,CCPFSPA                    
          RETURN
.
WRCCPF1   RESET     KEY20                                                       
          WRITE     CCSPFKA1,KEY20;CCPFFKY,CCPFDES,CCPFSUS,CCPFSPA              
          RETURN
.
DECCPF1   RESET     KEY20                                                       
          DELETE    CCSPFKA1,KEY20                                              
          RETURN
.
