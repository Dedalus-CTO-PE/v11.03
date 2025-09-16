.
. CCIGDPIO    
. --------
. Filename     : ccigdpaf.dat
.
RSCCGDP1  RESET     KEY21                                                       
          READ      CCIGDPA1,KEY21;;                                            
          RETURN
.
RACCGDP1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      CCIGDPA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCGDP1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      CCIGDPA1,KEY21;DCCGDTYP,CCGDCOD1,CCGDCOD2,CCGDDEPT,CCGDSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DCCGDTYP,CCGDTYPE                                           
          RETURN
.
RKCCGDP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    CCIGDPA1;DCCGDTYP,CCGDCOD1,CCGDCOD2,CCGDDEPT,CCGDSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DCCGDTYP,CCGDTYPE                                           
          RETURN
.
RPCCGDP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    CCIGDPA1;DCCGDTYP,CCGDCOD1,CCGDCOD2,CCGDDEPT,CCGDSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DCCGDTYP,CCGDTYPE                                           
          RETURN
.
UPCCGDP1                                                                        
          MOVE      CCGDTYPE,DCCGDTYP                                           
          UPDATE    CCIGDPA1;DCCGDTYP,CCGDCOD1,CCGDCOD2,CCGDDEPT,CCGDSPAR       
          RETURN
.
WRCCGDP1  RESET     KEY21                                                       
          MOVE      CCGDTYPE,DCCGDTYP                                           
          WRITE     CCIGDPA1,KEY21;DCCGDTYP,CCGDCOD1,CCGDCOD2,CCGDDEPT,CCGDSPAR 
          RETURN
.
DECCGDP1  RESET     KEY21                                                       
          DELETE    CCIGDPA1,KEY21                                              
          RETURN
.
