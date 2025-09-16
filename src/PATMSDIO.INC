.
. PATMSDIO    
. --------
. Filename     : patmsdaf.dat
.
RSPTMSD1  RESET     KEY12                                                       
          READ      PATMSDA1,KEY12;;                                            
          RETURN
.
RAPTMSD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATMSDA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMSD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATMSDA1,KEY12;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMSD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMSDA1;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:      
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMSD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMSDA1;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:      
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMSD1                                                                        
          UPDATE    PATMSDA1;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:      
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTMSD1  RESET     KEY12                                                       
          WRITE     PATMSDA1,KEY12;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          RETURN
.
DEPTMSD1  RESET     KEY12                                                       
          DELETE    PATMSDA1,KEY12                                              
          RETURN
.
RLPTMSD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     PATMSDA1,KEY12;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTMSD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATMSDA1;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:      
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTMSD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATMSDA1;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:      
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTMSD1  RESET     KEY12                                                       
          UNLOCK    PATMSDA1                                                    
          RETURN
.
RSPTMSD2  RESET     KEY12                                                       
          READ      PATMSDA2,KEY12;;                                            
          RETURN
.
RAPTMSD2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATMSDA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMSD2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATMSDA2,KEY12;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMSD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMSDA2;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:      
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMSD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMSDA2;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:      
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMSD2                                                                        
          UPDATE    PATMSDA2;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:      
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTMSD2  RESET     KEY12                                                       
          WRITE     PATMSDA2,KEY12;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          RETURN
.
DEPTMSD2  RESET     KEY12                                                       
          DELETE    PATMSDA2,KEY12                                              
          RETURN
.
RLPTMSD2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     PATMSDA2,KEY12;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTMSD2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATMSDA2;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:      
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTMSD2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATMSDA2;PTMDDEPT,PTMDDATE,PTMDPRAD,PTMDPBAD,PTMDTRIN:      
                        PTMDTOUT,PTMDDSCH,PTMDNBDY,PTMDBBDY,PTMDDEAD,PTMDBPRA:  
                        PTMDBPBA,PTMDLVBD,PTMDAEAD,PTMDOBTH,PTMDOUTT,PTMDDAYS:  
                        PTMDPATS,PTMDSBDY,PTMDWARD,PTMDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTMSD2  RESET     KEY12                                                       
          UNLOCK    PATMSDA2                                                    
          RETURN
.
