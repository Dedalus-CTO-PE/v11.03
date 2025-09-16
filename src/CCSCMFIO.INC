.
. CCSCMFIO    
. --------
. Filename     : ccscmfaf.dat
.
RSCCMF1   RESET     KEY28                                                       
          READ      CCSCMFA1,KEY28;;                                            
          RETURN
.
RACCMF1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMFA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMF1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMFA1,KEY28;CCMFHCD,CCMFFDPT,CCMFYEAR,CCMFPER,CCMFTDPT:  
                        CCMFCTY,CCMFATY,CCMFTWG,CCMFWGT,CCMFTOT,CCMFAMT:        
                        CCMFSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMFA1;CCMFHCD,CCMFFDPT,CCMFYEAR,CCMFPER,CCMFTDPT:        
                        CCMFCTY,CCMFATY,CCMFTWG,CCMFWGT,CCMFTOT,CCMFAMT:        
                        CCMFSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMFA1;CCMFHCD,CCMFFDPT,CCMFYEAR,CCMFPER,CCMFTDPT:        
                        CCMFCTY,CCMFATY,CCMFTWG,CCMFWGT,CCMFTOT,CCMFAMT:        
                        CCMFSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMF1                                                                         
          UPDATE    CCSCMFA1;CCMFHCD,CCMFFDPT,CCMFYEAR,CCMFPER,CCMFTDPT:        
                        CCMFCTY,CCMFATY,CCMFTWG,CCMFWGT,CCMFTOT,CCMFAMT:        
                        CCMFSPA                                                 
          RETURN
.
WRCCMF1   RESET     KEY28                                                       
          WRITE     CCSCMFA1,KEY28;CCMFHCD,CCMFFDPT,CCMFYEAR,CCMFPER,CCMFTDPT:  
                        CCMFCTY,CCMFATY,CCMFTWG,CCMFWGT,CCMFTOT,CCMFAMT:        
                        CCMFSPA                                                 
          RETURN
.
DECCMF1   RESET     KEY28                                                       
          DELETE    CCSCMFA1,KEY28                                              
          RETURN
.
RSCCMF2   RESET     KEY28                                                       
          READ      CCSCMFA2,KEY28;;                                            
          RETURN
.
RACCMF2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMFA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMF2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMFA2,KEY28;CCMFHCD,CCMFFDPT,CCMFYEAR,CCMFPER,CCMFTDPT:  
                        CCMFCTY,CCMFATY,CCMFTWG,CCMFWGT,CCMFTOT,CCMFAMT:        
                        CCMFSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMF2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMFA2;CCMFHCD,CCMFFDPT,CCMFYEAR,CCMFPER,CCMFTDPT:        
                        CCMFCTY,CCMFATY,CCMFTWG,CCMFWGT,CCMFTOT,CCMFAMT:        
                        CCMFSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMF2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMFA2;CCMFHCD,CCMFFDPT,CCMFYEAR,CCMFPER,CCMFTDPT:        
                        CCMFCTY,CCMFATY,CCMFTWG,CCMFWGT,CCMFTOT,CCMFAMT:        
                        CCMFSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMF2                                                                         
          UPDATE    CCSCMFA2;CCMFHCD,CCMFFDPT,CCMFYEAR,CCMFPER,CCMFTDPT:        
                        CCMFCTY,CCMFATY,CCMFTWG,CCMFWGT,CCMFTOT,CCMFAMT:        
                        CCMFSPA                                                 
          RETURN
.
WRCCMF2   RESET     KEY28                                                       
          WRITE     CCSCMFA2,KEY28;CCMFHCD,CCMFFDPT,CCMFYEAR,CCMFPER,CCMFTDPT:  
                        CCMFCTY,CCMFATY,CCMFTWG,CCMFWGT,CCMFTOT,CCMFAMT:        
                        CCMFSPA                                                 
          RETURN
.
DECCMF2   RESET     KEY28                                                       
          DELETE    CCSCMFA2,KEY28                                              
          RETURN
.
