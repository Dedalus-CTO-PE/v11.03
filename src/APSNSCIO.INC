.
. APSNSCIO    
. --------
. Filename     : apsnscaf.dat
.
RSAPNS1   RESET     KEY8                                                        
          READ      APSNSCA1,KEY8;;                                             
          RETURN
.
RAAPNS1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSNSCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPNS1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSNSCA1,KEY8;APNSBCH,APNSUNI,APNSNA1,APNSNA2,APNSAD1:      
                        APNSAD2,APNSAD3,APNSPC,APNSABN,APNSGREG,APNSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPNS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSNSCA1;APNSBCH,APNSUNI,APNSNA1,APNSNA2,APNSAD1:           
                        APNSAD2,APNSAD3,APNSPC,APNSABN,APNSGREG,APNSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPNS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSNSCA1;APNSBCH,APNSUNI,APNSNA1,APNSNA2,APNSAD1:           
                        APNSAD2,APNSAD3,APNSPC,APNSABN,APNSGREG,APNSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPNS1                                                                         
          UPDATE    APSNSCA1;APNSBCH,APNSUNI,APNSNA1,APNSNA2,APNSAD1:           
                        APNSAD2,APNSAD3,APNSPC,APNSABN,APNSGREG,APNSSPA         
          RETURN
.
WRAPNS1   RESET     KEY8                                                        
          WRITE     APSNSCA1,KEY8;APNSBCH,APNSUNI,APNSNA1,APNSNA2,APNSAD1:      
                        APNSAD2,APNSAD3,APNSPC,APNSABN,APNSGREG,APNSSPA         
          RETURN
.
DEAPNS1   RESET     KEY8                                                        
          DELETE    APSNSCA1,KEY8                                               
          RETURN
.
RSAPNS2   RESET     KEY38                                                       
          READ      APSNSCA2,KEY38;;                                            
          RETURN
.
RAAPNS2   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      APSNSCA2,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPNS2   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      APSNSCA2,KEY38;APNSBCH,APNSUNI,APNSNA1,APNSNA2,APNSAD1:     
                        APNSAD2,APNSAD3,APNSPC,APNSABN,APNSGREG,APNSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPNS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSNSCA2;APNSBCH,APNSUNI,APNSNA1,APNSNA2,APNSAD1:           
                        APNSAD2,APNSAD3,APNSPC,APNSABN,APNSGREG,APNSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPNS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSNSCA2;APNSBCH,APNSUNI,APNSNA1,APNSNA2,APNSAD1:           
                        APNSAD2,APNSAD3,APNSPC,APNSABN,APNSGREG,APNSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPNS2                                                                         
          UPDATE    APSNSCA2;APNSBCH,APNSUNI,APNSNA1,APNSNA2,APNSAD1:           
                        APNSAD2,APNSAD3,APNSPC,APNSABN,APNSGREG,APNSSPA         
          RETURN
.
WRAPNS2   RESET     KEY38                                                       
          WRITE     APSNSCA2,KEY38;APNSBCH,APNSUNI,APNSNA1,APNSNA2,APNSAD1:     
                        APNSAD2,APNSAD3,APNSPC,APNSABN,APNSGREG,APNSSPA         
          RETURN
.
DEAPNS2   RESET     KEY38                                                       
          DELETE    APSNSCA2,KEY38                                              
          RETURN
.
