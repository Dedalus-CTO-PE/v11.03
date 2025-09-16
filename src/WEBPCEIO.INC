.
. WEBPCEIO    
. --------
. Filename     : webpceaf.dat
.
RSWBPCE1  RESET     KEY46                                                       
          READ      WEBPCEA1,KEY46;;                                            
          RETURN
.
RAWBPCE1  RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCEA1,KEY46;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCE1  RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCEA1,KEY46;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:
                                   WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:
                                   WBPESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCE1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCEA1;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCE1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCEA1;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCEA1;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          RETURN
.
WRWBPCE1  RESET     KEY46                                                       
          WRITE     WEBPCEA1,KEY46;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:
                                   WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:
                                   WBPESPAR                                     
          RETURN
.
DEWBPCE1  RESET     KEY46                                                       
          DELETE    WEBPCEA1,KEY46                                              
          RETURN
.
RSWBPCE2  RESET     KEY46                                                       
          READ      WEBPCEA2,KEY46;;                                            
          RETURN
.
RAWBPCE2  RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCEA2,KEY46;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCE2  RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCEA2,KEY46;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:
                                   WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:
                                   WBPESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCE2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCEA2;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCE2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCEA2;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCE2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCEA2;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          RETURN
.
WRWBPCE2  RESET     KEY46                                                       
          WRITE     WEBPCEA2,KEY46;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:
                                   WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:
                                   WBPESPAR                                     
          RETURN
.
DEWBPCE2  RESET     KEY46                                                       
          DELETE    WEBPCEA2,KEY46                                              
          RETURN
.
RSWBPCE3  RESET     KEY58                                                       
          READ      WEBPCEA3,KEY58;;                                            
          RETURN
.
RAWBPCE3  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCEA3,KEY58;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCE3  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCEA3,KEY58;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:
                                   WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:
                                   WBPESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCE3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCEA3;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCE3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCEA3;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCE3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCEA3;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          RETURN
.
WRWBPCE3  RESET     KEY58                                                       
          WRITE     WEBPCEA3,KEY58;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:
                                   WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:
                                   WBPESPAR                                     
          RETURN
.
DEWBPCE3  RESET     KEY58                                                       
          DELETE    WEBPCEA3,KEY58                                              
          RETURN
.
RSWBPCE4  RESET     KEY96                                                       
          READ      WEBPCEA4,KEY96;;                                            
          RETURN
.
RAWBPCE4  RESET     KEY96                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCEA4,KEY96;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCE4  RESET     KEY96                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCEA4,KEY96;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:
                                   WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:
                                   WBPESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCE4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCEA4;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCE4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCEA4;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCE4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCEA4;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:      
                             WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:      
                             WBPESPAR                                           
          RETURN
.
WRWBPCE4  RESET     KEY96                                                       
          WRITE     WEBPCEA4,KEY96;WBPESTAT,WBPECLID,WBPECCMN,WBPECCMR,WBPEPCMN:
                                   WBPEPCMR,WBPEECDE,WBPEETXT,WBPETRID,WBPEMSID:
                                   WBPESPAR                                     
          RETURN
.
DEWBPCE4  RESET     KEY96                                                       
          DELETE    WEBPCEA4,KEY96                                              
          RETURN
.
