.
. WEBBBEIO    
. --------
. Filename     : webbbeaf.dat
.
RSWBBBE1  RESET     KEY35                                                       
          READ      WEBBBEA1,KEY35;;                                            
          RETURN
.
RAWBBBE1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBEA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBE1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBEA1,KEY35;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:
                                   WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:
                                   WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBE1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBEA1;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBE1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBEA1;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBEA1;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          RETURN
.
WRWBBBE1  RESET     KEY35                                                       
          WRITE     WEBBBEA1,KEY35;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:
                                   WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:
                                   WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR 
          RETURN
.
DEWBBBE1  RESET     KEY35                                                       
          DELETE    WEBBBEA1,KEY35                                              
          RETURN
.
RSWBBBE2  RESET     KEY59                                                       
          READ      WEBBBEA2,KEY59;;                                            
          RETURN
.
RAWBBBE2  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBEA2,KEY59;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBE2  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBEA2,KEY59;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:
                                   WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:
                                   WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBE2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBEA2;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBE2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBEA2;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBE2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBEA2;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          RETURN
.
WRWBBBE2  RESET     KEY59                                                       
          WRITE     WEBBBEA2,KEY59;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:
                                   WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:
                                   WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR 
          RETURN
.
DEWBBBE2  RESET     KEY59                                                       
          DELETE    WEBBBEA2,KEY59                                              
          RETURN
.
RSWBBBE3  RESET     KEY71                                                       
          READ      WEBBBEA3,KEY71;;                                            
          RETURN
.
RAWBBBE3  RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBEA3,KEY71;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBE3  RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBEA3,KEY71;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:
                                   WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:
                                   WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBE3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBEA3;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBE3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBEA3;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBE3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBEA3;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          RETURN
.
WRWBBBE3  RESET     KEY71                                                       
          WRITE     WEBBBEA3,KEY71;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:
                                   WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:
                                   WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR 
          RETURN
.
DEWBBBE3  RESET     KEY71                                                       
          DELETE    WEBBBEA3,KEY71                                              
          RETURN
.
RSWBBBE4  RESET     KEY35                                                       
          READ      WEBBBEA4,KEY35;;                                            
          RETURN
.
RAWBBBE4  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBEA4,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBE4  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBEA4,KEY35;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:
                                   WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:
                                   WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBE4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBEA4;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBE4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBEA4;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBE4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBEA4;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:      
                             WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:      
                             WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR       
          RETURN
.
WRWBBBE4  RESET     KEY35                                                       
          WRITE     WEBBBEA4,KEY35;WBBECLID,WBBERPTC,WBBEMEVC,WBBEEVDT,WBBEEVID:
                                   WBBEPTSC,WBBEPTST,WBBEPTMN,WBBEPTMR,WBBEPTFN:
                                   WBBEPTGN,WBBETRID,WBBEMSID,WBBERKEY,WBBESPAR 
          RETURN
.
DEWBBBE4  RESET     KEY35                                                       
          DELETE    WEBBBEA4,KEY35                                              
          RETURN
.
