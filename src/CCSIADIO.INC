.
. CCSIADIO    
. --------
. Filename     : ccsiadaf.dat
.
RSCCIA1   RESET     KEY18                                                       
          READ      CCSIADA1,KEY18;;                                            
          RETURN
.
RACCIA1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSIADA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCIA1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSIADA1,KEY18;CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:     
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCIA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSIADA1;CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:           
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCIA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSIADA1;CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:           
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCIA1                                                                         
          UPDATE    CCSIADA1;CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:           
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCIA1   RESET     KEY18                                                       
          WRITE     CCSIADA1,KEY18;CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:     
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          RETURN
.
DECCIA1   RESET     KEY18                                                       
          DELETE    CCSIADA1,KEY18                                              
          RETURN
.
RLCCIA1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     CCSIADA1,KEY18;CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:     
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCIA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSIADA1;CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:           
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCIA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSIADA1;CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:           
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCIA1   RESET     KEY18                                                       
          UNLOCK    CCSIADA1                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WACCIA00
          MOVE      "   64",AUDTSECT
          MOVE      " 38",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WACCIA99 IF NOT EQUAL
.
          PACK     CCIAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",CCIAAUDD
          CLOCK     TIME,CCIAAUDT
          MOVE      PORT,CCIAAUDP
          LOAD      CCIAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,CCIAAUDS
          MOVE      PASSCODE,CCIAAUDO
          PACK      KEY19,CCIAAUDD,CCIAAUDT,CCIAAUDP,CCIAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWCCIA
WACCIA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DACCIA00
          MOVE      "   64",AUDTSECT
          MOVE      " 38",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DACCIA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADCCIA
DACCIA99  RETURN
ASCCIA    RESET     KEY19                                                       
          READ      CCSAUDIA,KEY19;;                                            
          RETURN
.
AKCCIA                                                                          
          MOVE      ZERO,OVRCD
          READKS    CCSAUDIA;CCIAAUDD,CCIAAUDT,CCIAAUDP,CCIAAUDR,CCIAAUDS:      
                    CCIAAUDO,CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:           
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
AUCCIA                                                                          
          UPDATE    CCSAUDIA;CCIAAUDD,CCIAAUDT,CCIAAUDP,CCIAAUDR,CCIAAUDS:      
                    CCIAAUDO,CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:           
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          RETURN
.
AWCCIA    RESET     KEY19                                                       
          WRITE     CCSAUDIA,KEY19;CCIAAUDD,CCIAAUDT,CCIAAUDP,CCIAAUDR,CCIAAUDS:
                    CCIAAUDO,CCIAHCD,CCIAEPS,CCIABA1,CCIABA2,CCIABA3:           
                        CCIALOS,CCIAITH,CCIAIA1,CCIAIA2,CCIAIA3,CCIAIAO:        
                        CCIAIM1,CCIAIM2,CCIAIM3,CCIAIMO,CCIAETH1,CCIAETH2:      
                        CCIAETH3,CCIAETH4,CCIAETH5,CCIAEA11,CCIAEA12,CCIAEA13:  
                        CCIAEA14,CCIAEA15,CCIAEA21,CCIAEA22,CCIAEA23,CCIAEA24:  
                        CCIAEA25,CCIAEA31,CCIAEA32,CCIAEA33,CCIAEA34,CCIAEA35:  
                        CCIAEAO1,CCIAEAO2,CCIAEAO3,CCIAEAO4,CCIAEAO5,CCIAEM11:  
                        CCIAEM12,CCIAEM13,CCIAEM14,CCIAEM15,CCIAEM21,CCIAEM22:  
                        CCIAEM23,CCIAEM24,CCIAEM25,CCIAEM31,CCIAEM32,CCIAEM33:  
                        CCIAEM34,CCIAEM35,CCIAEMO1,CCIAEMO2,CCIAEMO3,CCIAEMO4:  
                        CCIAEMO5,CCIATT1,CCIATT2,CCIATT3,CCIATT4,CCIASPA        
          RETURN
.
ADCCIA    RESET     KEY19                                                       
          DELETE    CCSAUDIA,KEY19;                                             
          RETURN
.
