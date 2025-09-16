.
. WEBEEDIO    
. --------
. Filename     : webeedaf.dat
.
RSWBEED1  RESET     KEY30                                                       
          READ      WEBEEDA1,KEY30;;                                            
          RETURN
.
RAWBEED1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEDA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEED1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEDA1,KEY30;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:
                                   WBEDCTID,WBEDMSID,WBEDSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEED1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEEDA1;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:      
                             WBEDCTID,WBEDMSID,WBEDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEED1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEEDA1;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:      
                             WBEDCTID,WBEDMSID,WBEDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEED1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEEDA1;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:      
                             WBEDCTID,WBEDMSID,WBEDSPAR                         
          RETURN
.
WRWBEED1  RESET     KEY30                                                       
          WRITE     WEBEEDA1,KEY30;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:
                                   WBEDCTID,WBEDMSID,WBEDSPAR                   
          RETURN
.
DEWBEED1  RESET     KEY30                                                       
          DELETE    WEBEEDA1,KEY30                                              
          RETURN
.
RSWBEED2  RESET     KEY54                                                       
          READ      WEBEEDA2,KEY54;;                                            
          RETURN
.
RAWBEED2  RESET     KEY54                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEDA2,KEY54;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEED2  RESET     KEY54                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEDA2,KEY54;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:
                                   WBEDCTID,WBEDMSID,WBEDSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEED2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEEDA2;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:      
                             WBEDCTID,WBEDMSID,WBEDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEED2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEEDA2;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:      
                             WBEDCTID,WBEDMSID,WBEDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEED2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEEDA2;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:      
                             WBEDCTID,WBEDMSID,WBEDSPAR                         
          RETURN
.
WRWBEED2  RESET     KEY54                                                       
          WRITE     WEBEEDA2,KEY54;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:
                                   WBEDCTID,WBEDMSID,WBEDSPAR                   
          RETURN
.
DEWBEED2  RESET     KEY54                                                       
          DELETE    WEBEEDA2,KEY54                                              
          RETURN
.
RSWBEED3  RESET     KEY66                                                       
          READ      WEBEEDA3,KEY66;;                                            
          RETURN
.
RAWBEED3  RESET     KEY66                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEDA3,KEY66;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEED3  RESET     KEY66                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEDA3,KEY66;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:
                                   WBEDCTID,WBEDMSID,WBEDSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEED3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEEDA3;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:      
                             WBEDCTID,WBEDMSID,WBEDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEED3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEEDA3;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:      
                             WBEDCTID,WBEDMSID,WBEDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEED3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEEDA3;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:      
                             WBEDCTID,WBEDMSID,WBEDSPAR                         
          RETURN
.
WRWBEED3  RESET     KEY66                                                       
          WRITE     WEBEEDA3,KEY66;WBEDARID,WBEDRPTC,WBEDCFEC,WBEDEXPC,WBEDCFET:
                                   WBEDCTID,WBEDMSID,WBEDSPAR                   
          RETURN
.
DEWBEED3  RESET     KEY66                                                       
          DELETE    WEBEEDA3,KEY66                                              
          RETURN
.
