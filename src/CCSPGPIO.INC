.
. CCSPGPIO    
. --------
. Filename     : ccspgpaf.dat
.
RSCCPG1   RESET     KEY14                                                       
          READ      CCSPGPA1,KEY14;;                                            
          RETURN
.
RACCPG1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPGPA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPG1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPGPA1,KEY14;CCPGHCD,CCPGDPT,CCPGGCD,CCPGDES,CCPGDSC:     
                        CCPGSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPG1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPGPA1;CCPGHCD,CCPGDPT,CCPGGCD,CCPGDES,CCPGDSC:           
                        CCPGSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPG1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPGPA1;CCPGHCD,CCPGDPT,CCPGGCD,CCPGDES,CCPGDSC:           
                        CCPGSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPG1                                                                         
          UPDATE    CCSPGPA1;CCPGHCD,CCPGDPT,CCPGGCD,CCPGDES,CCPGDSC:           
                        CCPGSPA                                                 
          RETURN
.
WRCCPG1   RESET     KEY14                                                       
          WRITE     CCSPGPA1,KEY14;CCPGHCD,CCPGDPT,CCPGGCD,CCPGDES,CCPGDSC:     
                        CCPGSPA                                                 
          RETURN
.
DECCPG1   RESET     KEY14                                                       
          DELETE    CCSPGPA1,KEY14                                              
          RETURN
.
