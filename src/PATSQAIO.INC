.
. PATSQAIO    
. --------
. Filename     : patsqaaf.dat
.
RSPTSQA1  RESET     KEY10                                                       
          READ      PATSQAA1,KEY10;;                                            
          RETURN
.
RAPTSQA1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATSQAA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTSQA1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATSQAA1,KEY10;PTSQCODE,PTSQTCOM,PTSQTCOD,PTSQDCRE,PTSQLMOD:
                        PTSQTLMO,PTSQMOPE,PTSQSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTSQA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATSQAA1;PTSQCODE,PTSQTCOM,PTSQTCOD,PTSQDCRE,PTSQLMOD:      
                        PTSQTLMO,PTSQMOPE,PTSQSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTSQA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATSQAA1;PTSQCODE,PTSQTCOM,PTSQTCOD,PTSQDCRE,PTSQLMOD:      
                        PTSQTLMO,PTSQMOPE,PTSQSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTSQA1                                                                        
          UPDATE    PATSQAA1;PTSQCODE,PTSQTCOM,PTSQTCOD,PTSQDCRE,PTSQLMOD:      
                        PTSQTLMO,PTSQMOPE,PTSQSPAR                              
          RETURN
.
WRPTSQA1  RESET     KEY10                                                       
          WRITE     PATSQAA1,KEY10;PTSQCODE,PTSQTCOM,PTSQTCOD,PTSQDCRE,PTSQLMOD:
                        PTSQTLMO,PTSQMOPE,PTSQSPAR                              
          RETURN
.
DEPTSQA1  RESET     KEY10                                                       
          DELETE    PATSQAA1,KEY10                                              
          RETURN
.
