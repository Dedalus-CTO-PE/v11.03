.
. WEBBBFIO    
. --------
. Filename     : webbbfaf.dat
.
RSWBBBF1  RESET     KEY37                                                       
          READ      WEBBBFA1,KEY37;;                                            
          RETURN
.
RAWBBBF1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBFA1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBF1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBFA1,KEY37;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:
                                   WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:
                                   WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBF1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBFA1;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBF1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBFA1;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBFA1;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          RETURN
.
WRWBBBF1  RESET     KEY37                                                       
          WRITE     WEBBBFA1,KEY37;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:
                                   WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:
                                   WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR 
          RETURN
.
DEWBBBF1  RESET     KEY37                                                       
          DELETE    WEBBBFA1,KEY37                                              
          RETURN
.
RSWBBBF2  RESET     KEY61                                                       
          READ      WEBBBFA2,KEY61;;                                            
          RETURN
.
RAWBBBF2  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBFA2,KEY61;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBF2  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBFA2,KEY61;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:
                                   WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:
                                   WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBF2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBFA2;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBF2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBFA2;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBF2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBFA2;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          RETURN
.
WRWBBBF2  RESET     KEY61                                                       
          WRITE     WEBBBFA2,KEY61;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:
                                   WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:
                                   WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR 
          RETURN
.
DEWBBBF2  RESET     KEY61                                                       
          DELETE    WEBBBFA2,KEY61                                              
          RETURN
.
RSWBBBF3  RESET     KEY73                                                       
          READ      WEBBBFA3,KEY73;;                                            
          RETURN
.
RAWBBBF3  RESET     KEY73                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBFA3,KEY73;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBF3  RESET     KEY73                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBFA3,KEY73;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:
                                   WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:
                                   WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBF3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBFA3;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBF3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBFA3;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBF3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBFA3;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          RETURN
.
WRWBBBF3  RESET     KEY73                                                       
          WRITE     WEBBBFA3,KEY73;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:
                                   WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:
                                   WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR 
          RETURN
.
DEWBBBF3  RESET     KEY73                                                       
          DELETE    WEBBBFA3,KEY73                                              
          RETURN
.
RSWBBBF4  RESET     KEY37                                                       
          READ      WEBBBFA4,KEY37;;                                            
          RETURN
.
RAWBBBF4  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBFA4,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBF4  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBFA4,KEY37;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:
                                   WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:
                                   WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBF4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBFA4;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBF4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBFA4;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBF4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBFA4;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:      
                             WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:      
                             WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR       
          RETURN
.
WRWBBBF4  RESET     KEY37                                                       
          WRITE     WEBBBFA4,KEY37;WBBFCLID,WBBFRPTC,WBBFMEVC,WBBFSRVC,WBBFASSC:
                                   WBBFBEPD,WBBFCHAM,WBBFSVID,WBBFITMN,WBBFNOFP:
                                   WBBFPROV,WBBFTRID,WBBFMSID,WBBFRKEY,WBBFSPAR 
          RETURN
.
DEWBBBF4  RESET     KEY37                                                       
          DELETE    WEBBBFA4,KEY37                                              
          RETURN
.
