.
. CCSPNOIO    
. --------
. Filename     : ccspnoaf.dat
.
RSCCPN1   RESET     KEY21                                                       
          READ      CCSPNOA1,KEY21;;                                            
          RETURN
.
RACCPN1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPNOA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPN1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPNOA1,KEY21;CCPNHCD,CCPNDPT,CCPNPCD,CCPNLIN,CCPNDAT:     
                        CCPNSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPNOA1;CCPNHCD,CCPNDPT,CCPNPCD,CCPNLIN,CCPNDAT:           
                        CCPNSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPNOA1;CCPNHCD,CCPNDPT,CCPNPCD,CCPNLIN,CCPNDAT:           
                        CCPNSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPN1                                                                         
          UPDATE    CCSPNOA1;CCPNHCD,CCPNDPT,CCPNPCD,CCPNLIN,CCPNDAT:           
                        CCPNSPA                                                 
          RETURN
.
WRCCPN1   RESET     KEY21                                                       
          WRITE     CCSPNOA1,KEY21;CCPNHCD,CCPNDPT,CCPNPCD,CCPNLIN,CCPNDAT:     
                        CCPNSPA                                                 
          RETURN
.
DECCPN1   RESET     KEY21                                                       
          DELETE    CCSPNOA1,KEY21                                              
          RETURN
.
