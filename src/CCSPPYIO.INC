.
. CCSPPYIO    
. --------
. Filename     : ccsppyaf.dat
.
RSCCPP1   RESET     KEY8                                                        
          READ      CCSPPYA1,KEY8;;                                             
          RETURN
.
RACCPP1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      CCSPPYA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPP1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      CCSPPYA1,KEY8;CCPPPID,CCPPDES,CCPPEID,CCPPTIM,CCPPARE:      
                        CCPPCT1,CCPPCT2,CCPPCT3,CCPPDN1,CCPPDN2,CCPPDN3:        
                        CCPPDN4,CCPPDN5,CCPPEPS,CCPPNE,CCPPBD,CCPPC1:           
                        CCPPC2,CCPPACC,CCPPTHE,CCPPOTH,CCPPALOS,CCPPAC1:        
                        CCPPAC2,CCPPAACC,CCPPATHE,CCPPAOTH,CCPPBC1,CCPPBC2:     
                        CCPPBACC,CCPPBTHE,CCPPBOTH,CCPPSPA1,CCPPSPA2            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPPYA1;CCPPPID,CCPPDES,CCPPEID,CCPPTIM,CCPPARE:           
                        CCPPCT1,CCPPCT2,CCPPCT3,CCPPDN1,CCPPDN2,CCPPDN3:        
                        CCPPDN4,CCPPDN5,CCPPEPS,CCPPNE,CCPPBD,CCPPC1:           
                        CCPPC2,CCPPACC,CCPPTHE,CCPPOTH,CCPPALOS,CCPPAC1:        
                        CCPPAC2,CCPPAACC,CCPPATHE,CCPPAOTH,CCPPBC1,CCPPBC2:     
                        CCPPBACC,CCPPBTHE,CCPPBOTH,CCPPSPA1,CCPPSPA2            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPPYA1;CCPPPID,CCPPDES,CCPPEID,CCPPTIM,CCPPARE:           
                        CCPPCT1,CCPPCT2,CCPPCT3,CCPPDN1,CCPPDN2,CCPPDN3:        
                        CCPPDN4,CCPPDN5,CCPPEPS,CCPPNE,CCPPBD,CCPPC1:           
                        CCPPC2,CCPPACC,CCPPTHE,CCPPOTH,CCPPALOS,CCPPAC1:        
                        CCPPAC2,CCPPAACC,CCPPATHE,CCPPAOTH,CCPPBC1,CCPPBC2:     
                        CCPPBACC,CCPPBTHE,CCPPBOTH,CCPPSPA1,CCPPSPA2            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPP1                                                                         
          UPDATE    CCSPPYA1;CCPPPID,CCPPDES,CCPPEID,CCPPTIM,CCPPARE:           
                        CCPPCT1,CCPPCT2,CCPPCT3,CCPPDN1,CCPPDN2,CCPPDN3:        
                        CCPPDN4,CCPPDN5,CCPPEPS,CCPPNE,CCPPBD,CCPPC1:           
                        CCPPC2,CCPPACC,CCPPTHE,CCPPOTH,CCPPALOS,CCPPAC1:        
                        CCPPAC2,CCPPAACC,CCPPATHE,CCPPAOTH,CCPPBC1,CCPPBC2:     
                        CCPPBACC,CCPPBTHE,CCPPBOTH,CCPPSPA1,CCPPSPA2            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCPP1   RESET     KEY8                                                        
          WRITE     CCSPPYA1,KEY8;CCPPPID,CCPPDES,CCPPEID,CCPPTIM,CCPPARE:      
                        CCPPCT1,CCPPCT2,CCPPCT3,CCPPDN1,CCPPDN2,CCPPDN3:        
                        CCPPDN4,CCPPDN5,CCPPEPS,CCPPNE,CCPPBD,CCPPC1:           
                        CCPPC2,CCPPACC,CCPPTHE,CCPPOTH,CCPPALOS,CCPPAC1:        
                        CCPPAC2,CCPPAACC,CCPPATHE,CCPPAOTH,CCPPBC1,CCPPBC2:     
                        CCPPBACC,CCPPBTHE,CCPPBOTH,CCPPSPA1,CCPPSPA2            
          RETURN
.
DECCPP1   RESET     KEY8                                                        
          DELETE    CCSPPYA1,KEY8                                               
          RETURN
.
RLCCPP1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     CCSPPYA1,KEY8;CCPPPID,CCPPDES,CCPPEID,CCPPTIM,CCPPARE:      
                        CCPPCT1,CCPPCT2,CCPPCT3,CCPPDN1,CCPPDN2,CCPPDN3:        
                        CCPPDN4,CCPPDN5,CCPPEPS,CCPPNE,CCPPBD,CCPPC1:           
                        CCPPC2,CCPPACC,CCPPTHE,CCPPOTH,CCPPALOS,CCPPAC1:        
                        CCPPAC2,CCPPAACC,CCPPATHE,CCPPAOTH,CCPPBC1,CCPPBC2:     
                        CCPPBACC,CCPPBTHE,CCPPBOTH,CCPPSPA1,CCPPSPA2            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCPP1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSPPYA1;CCPPPID,CCPPDES,CCPPEID,CCPPTIM,CCPPARE:           
                        CCPPCT1,CCPPCT2,CCPPCT3,CCPPDN1,CCPPDN2,CCPPDN3:        
                        CCPPDN4,CCPPDN5,CCPPEPS,CCPPNE,CCPPBD,CCPPC1:           
                        CCPPC2,CCPPACC,CCPPTHE,CCPPOTH,CCPPALOS,CCPPAC1:        
                        CCPPAC2,CCPPAACC,CCPPATHE,CCPPAOTH,CCPPBC1,CCPPBC2:     
                        CCPPBACC,CCPPBTHE,CCPPBOTH,CCPPSPA1,CCPPSPA2            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCPP1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSPPYA1;CCPPPID,CCPPDES,CCPPEID,CCPPTIM,CCPPARE:           
                        CCPPCT1,CCPPCT2,CCPPCT3,CCPPDN1,CCPPDN2,CCPPDN3:        
                        CCPPDN4,CCPPDN5,CCPPEPS,CCPPNE,CCPPBD,CCPPC1:           
                        CCPPC2,CCPPACC,CCPPTHE,CCPPOTH,CCPPALOS,CCPPAC1:        
                        CCPPAC2,CCPPAACC,CCPPATHE,CCPPAOTH,CCPPBC1,CCPPBC2:     
                        CCPPBACC,CCPPBTHE,CCPPBOTH,CCPPSPA1,CCPPSPA2            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCPP1   RESET     KEY8                                                        
          UNLOCK    CCSPPYA1                                                    
          RETURN
.
