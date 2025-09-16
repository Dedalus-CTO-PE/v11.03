.
. WEBSEDIO    
. --------
. Filename     : websedaf.dat
.
RSWBSED1  RESET     KEY44                                                       
          READ      WEBSEDA1,KEY44;;                                            
          RETURN
.
RAWBSED1  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSEDA1,KEY44;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSED1  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSEDA1,KEY44;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:
                                   WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSED1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSEDA1;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:      
                             WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSED1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSEDA1;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:      
                             WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSED1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSEDA1;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:      
                             WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR       
          RETURN
.
WRWBSED1  RESET     KEY44                                                       
          WRITE     WEBSEDA1,KEY44;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:
                                   WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR 
          RETURN
.
DEWBSED1  RESET     KEY44                                                       
          DELETE    WEBSEDA1,KEY44                                              
          RETURN
.
RSWBSED2  RESET     KEY68                                                       
          READ      WEBSEDA2,KEY68;;                                            
          RETURN
.
RAWBSED2  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSEDA2,KEY68;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSED2  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSEDA2,KEY68;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:
                                   WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSED2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSEDA2;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:      
                             WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSED2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSEDA2;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:      
                             WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSED2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSEDA2;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:      
                             WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR       
          RETURN
.
WRWBSED2  RESET     KEY68                                                       
          WRITE     WEBSEDA2,KEY68;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:
                                   WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR 
          RETURN
.
DEWBSED2  RESET     KEY68                                                       
          DELETE    WEBSEDA2,KEY68                                              
          RETURN
.
RSWBSED3  RESET     KEY80                                                       
          READ      WEBSEDA3,KEY80;;                                            
          RETURN
.
RAWBSED3  RESET     KEY80                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSEDA3,KEY80;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSED3  RESET     KEY80                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSEDA3,KEY80;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:
                                   WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSED3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSEDA3;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:      
                             WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSED3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSEDA3;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:      
                             WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSED3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSEDA3;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:      
                             WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR       
          RETURN
.
WRWBSED3  RESET     KEY80                                                       
          WRITE     WEBSEDA3,KEY80;WBSDARID,WBSDRPTC,WBSDSCOD,WBSDSRVC,WBSDSFEC:
                                   WBSDSEXC,WBSDSFET,WBSDTRID,WBSDMSID,WBSDSPAR 
          RETURN
.
DEWBSED3  RESET     KEY80                                                       
          DELETE    WEBSEDA3,KEY80                                              
          RETURN
.
