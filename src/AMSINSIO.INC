.
. AMSINSIO    
. --------
. Filename     : amsinsaf.dat
.
RSAMIN1   RESET     KEY14                                                       
          READ      AMSINSA1,KEY14;;                                            
          RETURN
.
RAAMIN1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      AMSINSA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMIN1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      AMSINSA1,KEY14;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:     
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMIN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSINSA1;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMIN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSINSA1;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMIN1                                                                         
          UPDATE    AMSINSA1;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          RETURN
.
WRAMIN1   RESET     KEY14                                                       
          WRITE     AMSINSA1,KEY14;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:     
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          RETURN
.
DEAMIN1   RESET     KEY14                                                       
          DELETE    AMSINSA1,KEY14                                              
          RETURN
.
RSAMIN2   RESET     KEY49                                                       
          READ      AMSINSA2,KEY49;;                                            
          RETURN
.
RAAMIN2   RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      AMSINSA2,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMIN2   RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      AMSINSA2,KEY49;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:     
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMIN2                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSINSA2;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMIN2                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSINSA2;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMIN2                                                                         
          UPDATE    AMSINSA2;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          RETURN
.
WRAMIN2   RESET     KEY49                                                       
          WRITE     AMSINSA2,KEY49;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:     
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          RETURN
.
DEAMIN2   RESET     KEY49                                                       
          DELETE    AMSINSA2,KEY49                                              
          RETURN
.
RSAMIN3   RESET     KEY22                                                       
          READ      AMSINSA3,KEY22;;                                            
          RETURN
.
RAAMIN3   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSINSA3,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMIN3   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSINSA3,KEY22;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:     
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMIN3                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSINSA3;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMIN3                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSINSA3;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMIN3                                                                         
          UPDATE    AMSINSA3;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          RETURN
.
WRAMIN3   RESET     KEY22                                                       
          WRITE     AMSINSA3,KEY22;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:     
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          RETURN
.
DEAMIN3   RESET     KEY22                                                       
          DELETE    AMSINSA3,KEY22                                              
          RETURN
.
RSAMIN4   RESET     KEY74                                                       
          READ      AMSINSA4,KEY74;;                                            
          RETURN
.
RAAMIN4   RESET     KEY74                                                       
          MOVE      ZERO,OVRCD
          READ      AMSINSA4,KEY74;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMIN4   RESET     KEY74                                                       
          MOVE      ZERO,OVRCD
          READ      AMSINSA4,KEY74;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:     
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMIN4                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSINSA4;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMIN4                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSINSA4;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMIN4                                                                         
          UPDATE    AMSINSA4;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          RETURN
.
WRAMIN4   RESET     KEY74                                                       
          WRITE     AMSINSA4,KEY74;AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:     
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          RETURN
.
DEAMIN4   RESET     KEY74                                                       
          DELETE    AMSINSA4,KEY74                                              
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAAMIN00
          MOVE      "    3",AUDTSECT
          MOVE      " 12",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAAMIN99 IF NOT EQUAL
.
          PACK     AMINAUDD,CCC,CYY,CMM,CDD
          REP       " 0",AMINAUDD
          CLOCK     TIME,AMINAUDT
          MOVE      PORT,AMINAUDP
          LOAD      AMINAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,AMINAUDS
          MOVE      PASSCODE,AMINAUDO
          PACK      KEY19,AMINAUDD,AMINAUDT,AMINAUDP,AMINAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWAMIN
WAAMIN99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAAMIN00
          MOVE      "    3",AUDTSECT
          MOVE      " 12",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAAMIN99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADAMIN
DAAMIN99  RETURN
ASAMIN    RESET     KEY19                                                       
          READ      AMSAUDIN,KEY19;;                                            
          RETURN
.
AKAMIN                                                                          
          MOVE      ZERO,OVRCD
          READKS    AMSAUDIN;AMINAUDD,AMINAUDT,AMINAUDP,AMINAUDR,AMINAUDS:      
                    AMINAUDO,AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUAMIN                                                                          
          UPDATE    AMSAUDIN;AMINAUDD,AMINAUDT,AMINAUDP,AMINAUDR,AMINAUDS:      
                    AMINAUDO,AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          RETURN
.
AWAMIN    RESET     KEY19                                                       
          WRITE     AMSAUDIN,KEY19;AMINAUDD,AMINAUDT,AMINAUDP,AMINAUDR,AMINAUDS:
                    AMINAUDO,AMINREG,AMINASS,AMINCOM,AMINCOD,AMINREF:           
                        AMINCON,AMINDAT,AMINVAL,AMINAPR,AMINUA1,AMINUA2:        
                        AMINUR1,AMINUR2,AMINUD1,AMINUD2,AMINUY1,AMINUY2:        
                        AMINSPA                                                 
          RETURN
.
ADAMIN    RESET     KEY19                                                       
          DELETE    AMSAUDIN,KEY19;                                             
          RETURN
.
