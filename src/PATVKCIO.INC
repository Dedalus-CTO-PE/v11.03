.
. PATVKCIO    
. --------
. Filename     : patvkcaf.dat
.
RSPTVKC1  RESET     KEY8                                                        
          READ      PATVKCA1,KEY8;;                                             
          RETURN
.
RAPTVKC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATVKCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTVKC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATVKCA1,KEY8;DPTVKBIL,PTVKCARD,PTVKCEXP,PTVKCXMP,PTVKFMLY: 
                        PTVKCOMP,PTVKSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPTVKBIL,PTVKBILL                                           
          RETURN
.
RKPTVKC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATVKCA1;DPTVKBIL,PTVKCARD,PTVKCEXP,PTVKCXMP,PTVKFMLY:      
                        PTVKCOMP,PTVKSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPTVKBIL,PTVKBILL                                           
          RETURN
.
RPPTVKC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATVKCA1;DPTVKBIL,PTVKCARD,PTVKCEXP,PTVKCXMP,PTVKFMLY:      
                        PTVKCOMP,PTVKSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPTVKBIL,PTVKBILL                                           
          RETURN
.
UPPTVKC1                                                                        
          MOVE      PTVKBILL,DPTVKBIL                                           
          UPDATE    PATVKCA1;DPTVKBIL,PTVKCARD,PTVKCEXP,PTVKCXMP,PTVKFMLY:      
                        PTVKCOMP,PTVKSPAR                                                
          RETURN
.
WRPTVKC1  RESET     KEY8                                                        
          MOVE      PTVKBILL,DPTVKBIL                                           
          WRITE     PATVKCA1,KEY8;DPTVKBIL,PTVKCARD,PTVKCEXP,PTVKCXMP,PTVKFMLY: 
                        PTVKCOMP,PTVKSPAR                                                
          RETURN
.
DEPTVKC1  RESET     KEY8                                                        
          DELETE    PATVKCA1,KEY8                                               
          RETURN
.
ASPTVKC   RESET     KEY19                                                       
          READ      PATAUDVK,KEY19;;                                            
          RETURN
.
AKPTVKC                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATAUDVK;PTVKAUDD,PTVKAUDT,PTVKAUDP,PTVKAUDR,PTVKAUDS:      
                    PTVKAUDO,DPTVKBIL,PTVKCARD,PTVKCEXP,PTVKCXMP,PTVKFMLY:      
                        PTVKCOMP,PTVKSPAR                                                
          MOVE      DPTVKBIL,PTVKBILL                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
AUPTVKC                                                                         
          MOVE      PTVKBILL,DPTVKBIL                                           
          UPDATE    PATAUDVK;PTVKAUDD,PTVKAUDT,PTVKAUDP,PTVKAUDR,PTVKAUDS:      
                    PTVKAUDO,DPTVKBIL,PTVKCARD,PTVKCEXP,PTVKCXMP,PTVKFMLY:      
                        PTVKCOMP,PTVKSPAR                                                
          RETURN
.
AWPTVKC   RESET     KEY19                                                       
          MOVE      PTVKBILL,DPTVKBIL                                           
          WRITE     PATAUDVK,KEY19;PTVKAUDD,PTVKAUDT,PTVKAUDP,PTVKAUDR,PTVKAUDS:
                    PTVKAUDO,DPTVKBIL,PTVKCARD,PTVKCEXP,PTVKCXMP,PTVKFMLY:      
                        PTVKCOMP,PTVKSPAR                                                
          RETURN
.
ADPTVKC   RESET     KEY19                                                       
          DELETE    PATAUDVK,KEY19;                                             
          RETURN
.
