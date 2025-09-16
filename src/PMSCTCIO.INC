.
. PMSCTCIO    
. --------
. Filename     : pmsctcaf.dat
.
RSPMCTC1  RESET     KEY8                                                        
          READ      PMSCTCA1,KEY8;;                                             
          RETURN
.
RAPMCTC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCTCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCTC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCTCA1,KEY8;PMCTADMN,PMCTURNO,PMCTVDAT,PMCTSNAM,PMCTSAD1: 
                        PMCTSAD2,PMCTSAD3,PMCTSAD4,PMCTSPCO,PMCTSPHN,PMCTCONT:  
                        PMCTREFN,PMCTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCTC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCTCA1;PMCTADMN,PMCTURNO,PMCTVDAT,PMCTSNAM,PMCTSAD1:      
                        PMCTSAD2,PMCTSAD3,PMCTSAD4,PMCTSPCO,PMCTSPHN,PMCTCONT:  
                        PMCTREFN,PMCTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCTC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCTCA1;PMCTADMN,PMCTURNO,PMCTVDAT,PMCTSNAM,PMCTSAD1:      
                        PMCTSAD2,PMCTSAD3,PMCTSAD4,PMCTSPCO,PMCTSPHN,PMCTCONT:  
                        PMCTREFN,PMCTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCTC1                                                                        
          UPDATE    PMSCTCA1;PMCTADMN,PMCTURNO,PMCTVDAT,PMCTSNAM,PMCTSAD1:      
                        PMCTSAD2,PMCTSAD3,PMCTSAD4,PMCTSPCO,PMCTSPHN,PMCTCONT:  
                        PMCTREFN,PMCTSPAR                                       
          RETURN
.
WRPMCTC1  RESET     KEY8                                                        
          WRITE     PMSCTCA1,KEY8;PMCTADMN,PMCTURNO,PMCTVDAT,PMCTSNAM,PMCTSAD1: 
                        PMCTSAD2,PMCTSAD3,PMCTSAD4,PMCTSPCO,PMCTSPHN,PMCTCONT:  
                        PMCTREFN,PMCTSPAR                                       
          RETURN
.
DEPMCTC1  RESET     KEY8                                                        
          DELETE    PMSCTCA1,KEY8                                               
          RETURN
.
