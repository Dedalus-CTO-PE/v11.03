.
. CCSPKYIO    
. --------
. Filename     : ccspkyaf.dat
.
RSCCPK1   RESET     KEY38                                                       
          READ      CCSPKYA1,KEY38;;                                            
          RETURN
.
RACCPK1   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPKYA1,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPK1   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPKYA1,KEY38;CCPKFKY,CCPKHCD,CCPKDPT,CCPKPCD,CCPKSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPKYA1;CCPKFKY,CCPKHCD,CCPKDPT,CCPKPCD,CCPKSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPKYA1;CCPKFKY,CCPKHCD,CCPKDPT,CCPKPCD,CCPKSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPK1                                                                         
          UPDATE    CCSPKYA1;CCPKFKY,CCPKHCD,CCPKDPT,CCPKPCD,CCPKSPA            
          RETURN
.
WRCCPK1   RESET     KEY38                                                       
          WRITE     CCSPKYA1,KEY38;CCPKFKY,CCPKHCD,CCPKDPT,CCPKPCD,CCPKSPA      
          RETURN
.
DECCPK1   RESET     KEY38                                                       
          DELETE    CCSPKYA1,KEY38                                              
          RETURN
.
RSCCPK2   RESET     KEY38                                                       
          READ      CCSPKYA2,KEY38;;                                            
          RETURN
.
RACCPK2   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPKYA2,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPK2   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPKYA2,KEY38;CCPKFKY,CCPKHCD,CCPKDPT,CCPKPCD,CCPKSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPKYA2;CCPKFKY,CCPKHCD,CCPKDPT,CCPKPCD,CCPKSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPKYA2;CCPKFKY,CCPKHCD,CCPKDPT,CCPKPCD,CCPKSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPK2                                                                         
          UPDATE    CCSPKYA2;CCPKFKY,CCPKHCD,CCPKDPT,CCPKPCD,CCPKSPA            
          RETURN
.
WRCCPK2   RESET     KEY38                                                       
          WRITE     CCSPKYA2,KEY38;CCPKFKY,CCPKHCD,CCPKDPT,CCPKPCD,CCPKSPA      
          RETURN
.
DECCPK2   RESET     KEY38                                                       
          DELETE    CCSPKYA2,KEY38                                              
          RETURN
.
