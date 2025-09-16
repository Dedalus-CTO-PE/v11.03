.
. WEBPCFIO    
. --------
. Filename     : webpcfaf.dat
.
RSWBPCF1  RESET     KEY49                                                       
          READ      WEBPCFA1,KEY49;;                                            
          RETURN
.
RAWBPCF1  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCFA1,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCF1  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCFA1,KEY49;WBPFCLID,WBPFTRID,WBPFCNTR,WBPFEVDT,WBPFMEID:
                                   WBPFMSID,WBPFSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCF1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCFA1;WBPFCLID,WBPFTRID,WBPFCNTR,WBPFEVDT,WBPFMEID:      
                             WBPFMSID,WBPFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCF1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCFA1;WBPFCLID,WBPFTRID,WBPFCNTR,WBPFEVDT,WBPFMEID:      
                             WBPFMSID,WBPFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCFA1;WBPFCLID,WBPFTRID,WBPFCNTR,WBPFEVDT,WBPFMEID:      
                             WBPFMSID,WBPFSPAR                                  
          RETURN
.
WRWBPCF1  RESET     KEY49                                                       
          WRITE     WEBPCFA1,KEY49;WBPFCLID,WBPFTRID,WBPFCNTR,WBPFEVDT,WBPFMEID:
                                   WBPFMSID,WBPFSPAR                            
          RETURN
.
DEWBPCF1  RESET     KEY49                                                       
          DELETE    WEBPCFA1,KEY49                                              
          RETURN
.
RSWBPCF2  RESET     KEY49                                                       
          READ      WEBPCFA2,KEY49;;                                            
          RETURN
.
RAWBPCF2  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCFA2,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCF2  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCFA2,KEY49;WBPFCLID,WBPFTRID,WBPFCNTR,WBPFEVDT,WBPFMEID:
                                   WBPFMSID,WBPFSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCF2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCFA2;WBPFCLID,WBPFTRID,WBPFCNTR,WBPFEVDT,WBPFMEID:      
                             WBPFMSID,WBPFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCF2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCFA2;WBPFCLID,WBPFTRID,WBPFCNTR,WBPFEVDT,WBPFMEID:      
                             WBPFMSID,WBPFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCF2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCFA2;WBPFCLID,WBPFTRID,WBPFCNTR,WBPFEVDT,WBPFMEID:      
                             WBPFMSID,WBPFSPAR                                  
          RETURN
.
WRWBPCF2  RESET     KEY49                                                       
          WRITE     WEBPCFA2,KEY49;WBPFCLID,WBPFTRID,WBPFCNTR,WBPFEVDT,WBPFMEID:
                                   WBPFMSID,WBPFSPAR                            
          RETURN
.
DEWBPCF2  RESET     KEY49                                                       
          DELETE    WEBPCFA2,KEY49                                              
          RETURN
.
