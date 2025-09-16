.
. SINTRBIO    
. --------
. Filename     : sintrbaf.dat
.
RSSITB1   RESET     KEY11                                                       
          READ      SINTRBA1,KEY11;;                                            
          RETURN
.
RASITB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      SINTRBA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSITB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      SINTRBA1,KEY11;SITBNUM,SITBUNI,SITBTYP,SITBPER,SITBCAT:     
                        SITBWAR,SITBQTY,SITBCST,SITBBCH,SITBLED,SITBACC:        
                        SITBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSITB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINTRBA1;SITBNUM,SITBUNI,SITBTYP,SITBPER,SITBCAT:           
                        SITBWAR,SITBQTY,SITBCST,SITBBCH,SITBLED,SITBACC:        
                        SITBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSITB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINTRBA1;SITBNUM,SITBUNI,SITBTYP,SITBPER,SITBCAT:           
                        SITBWAR,SITBQTY,SITBCST,SITBBCH,SITBLED,SITBACC:        
                        SITBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSITB1                                                                         
          UPDATE    SINTRBA1;SITBNUM,SITBUNI,SITBTYP,SITBPER,SITBCAT:           
                        SITBWAR,SITBQTY,SITBCST,SITBBCH,SITBLED,SITBACC:        
                        SITBSPA                                                 
          RETURN
.
WRSITB1   RESET     KEY11                                                       
          WRITE     SINTRBA1,KEY11;SITBNUM,SITBUNI,SITBTYP,SITBPER,SITBCAT:     
                        SITBWAR,SITBQTY,SITBCST,SITBBCH,SITBLED,SITBACC:        
                        SITBSPA                                                 
          RETURN
.
DESITB1   RESET     KEY11                                                       
          DELETE    SINTRBA1,KEY11                                              
          RETURN
.
RSSITB2   RESET     KEY30                                                       
          READ      SINTRBA2,KEY30;;                                            
          RETURN
.
RASITB2   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      SINTRBA2,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSITB2   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      SINTRBA2,KEY30;SITBNUM,SITBUNI,SITBTYP,SITBPER,SITBCAT:     
                        SITBWAR,SITBQTY,SITBCST,SITBBCH,SITBLED,SITBACC:        
                        SITBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSITB2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINTRBA2;SITBNUM,SITBUNI,SITBTYP,SITBPER,SITBCAT:           
                        SITBWAR,SITBQTY,SITBCST,SITBBCH,SITBLED,SITBACC:        
                        SITBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSITB2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINTRBA2;SITBNUM,SITBUNI,SITBTYP,SITBPER,SITBCAT:           
                        SITBWAR,SITBQTY,SITBCST,SITBBCH,SITBLED,SITBACC:        
                        SITBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSITB2                                                                         
          UPDATE    SINTRBA2;SITBNUM,SITBUNI,SITBTYP,SITBPER,SITBCAT:           
                        SITBWAR,SITBQTY,SITBCST,SITBBCH,SITBLED,SITBACC:        
                        SITBSPA                                                 
          RETURN
.
WRSITB2   RESET     KEY30                                                       
          WRITE     SINTRBA2,KEY30;SITBNUM,SITBUNI,SITBTYP,SITBPER,SITBCAT:     
                        SITBWAR,SITBQTY,SITBCST,SITBBCH,SITBLED,SITBACC:        
                        SITBSPA                                                 
          RETURN
.
DESITB2   RESET     KEY30                                                       
          DELETE    SINTRBA2,KEY30                                              
          RETURN
.
