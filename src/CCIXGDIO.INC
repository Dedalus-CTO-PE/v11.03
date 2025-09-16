.
.CCIXGDIO    
.--------
. Filename     : ccixgdaf.dat
.
RSCCXGD1  RESET     KEY40                                                       
          READ      CCIXGDA1,KEY40;;                                            
          RETURN
.
RACCXGD1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      CCIXGDA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCXGD1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      CCIXGDA1,KEY40;CCXDPRID,CCXDSCID,CCXDUNIQ,CCXDCOD1,CCXDCOD2:
                                   CCXDCOD3,CCXDDEPT,CCXDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCXGD1  MOVE      ZERO,OVRCD
          READKS    CCIXGDA1;CCXDPRID,CCXDSCID,CCXDUNIQ,CCXDCOD1,CCXDCOD2:
                             CCXDCOD3,CCXDDEPT,CCXDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCXGD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    CCIXGDA1;CCXDPRID,CCXDSCID,CCXDUNIQ,CCXDCOD1,CCXDCOD2:
                             CCXDCOD3,CCXDDEPT,CCXDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCXGD1  UPDATE    CCIXGDA1;CCXDPRID,CCXDSCID,CCXDUNIQ,CCXDCOD1,CCXDCOD2:
                             CCXDCOD3,CCXDDEPT,CCXDSPAR       
          RETURN
.
WRCCXGD1  RESET     KEY40                                                       
          WRITE     CCIXGDA1,KEY40;CCXDPRID,CCXDSCID,CCXDUNIQ,CCXDCOD1,CCXDCOD2:
                                   CCXDCOD3,CCXDDEPT,CCXDSPAR 
          RETURN
.
DECCXGD1  RESET     KEY40                                                       
          DELETE    CCIXGDA1,KEY40                                              
          RETURN
.
