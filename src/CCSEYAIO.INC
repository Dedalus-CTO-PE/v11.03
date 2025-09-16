.
. CCSEYAIO    
. --------
. Filename     : ccseyaaf.dat
.
RSCCEY1   RESET     KEY4                                                        
          READ      CCSEYAA1,KEY4;;                                             
          RETURN
.
RACCEY1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSEYAA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEY1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSEYAA1,KEY4;CCEYEID,CCEYBA1,CCEYBA2,CCEYBA3,CCEYBAO:      
                        CCEYITH,CCEYIA1,CCEYIA2,CCEYIA3,CCEYIAO,CCEYIM1:        
                        CCEYIM2,CCEYIM3,CCEYIMO,CCEYETH1,CCEYEA11,CCEYEA21:     
                        CCEYEA31,CCEYEAO1,CCEYEM11,CCEYEM21,CCEYEM31,CCEYEMO1:  
                        CCEYETH2,CCEYEA12,CCEYEA22,CCEYEA32,CCEYEAO2,CCEYEM12:  
                        CCEYEM22,CCEYEM32,CCEYEMO2,CCEYETH3,CCEYEA13,CCEYEA23:  
                        CCEYEA33,CCEYEAO3,CCEYEM13,CCEYEM23,CCEYEM33,CCEYEMO3:  
                        CCEYETH4,CCEYEA14,CCEYEA24,CCEYEA34,CCEYEAO4,CCEYEM14:  
                        CCEYEM24,CCEYEM34,CCEYEMO4,CCEYETH5,CCEYEA15,CCEYEA25:  
                        CCEYEA35,CCEYEAO5,CCEYEM15,CCEYEM25,CCEYEM35,CCEYEMO5:  
                        CCEYSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEY1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSEYAA1;CCEYEID,CCEYBA1,CCEYBA2,CCEYBA3,CCEYBAO:           
                        CCEYITH,CCEYIA1,CCEYIA2,CCEYIA3,CCEYIAO,CCEYIM1:        
                        CCEYIM2,CCEYIM3,CCEYIMO,CCEYETH1,CCEYEA11,CCEYEA21:     
                        CCEYEA31,CCEYEAO1,CCEYEM11,CCEYEM21,CCEYEM31,CCEYEMO1:  
                        CCEYETH2,CCEYEA12,CCEYEA22,CCEYEA32,CCEYEAO2,CCEYEM12:  
                        CCEYEM22,CCEYEM32,CCEYEMO2,CCEYETH3,CCEYEA13,CCEYEA23:  
                        CCEYEA33,CCEYEAO3,CCEYEM13,CCEYEM23,CCEYEM33,CCEYEMO3:  
                        CCEYETH4,CCEYEA14,CCEYEA24,CCEYEA34,CCEYEAO4,CCEYEM14:  
                        CCEYEM24,CCEYEM34,CCEYEMO4,CCEYETH5,CCEYEA15,CCEYEA25:  
                        CCEYEA35,CCEYEAO5,CCEYEM15,CCEYEM25,CCEYEM35,CCEYEMO5:  
                        CCEYSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEY1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSEYAA1;CCEYEID,CCEYBA1,CCEYBA2,CCEYBA3,CCEYBAO:           
                        CCEYITH,CCEYIA1,CCEYIA2,CCEYIA3,CCEYIAO,CCEYIM1:        
                        CCEYIM2,CCEYIM3,CCEYIMO,CCEYETH1,CCEYEA11,CCEYEA21:     
                        CCEYEA31,CCEYEAO1,CCEYEM11,CCEYEM21,CCEYEM31,CCEYEMO1:  
                        CCEYETH2,CCEYEA12,CCEYEA22,CCEYEA32,CCEYEAO2,CCEYEM12:  
                        CCEYEM22,CCEYEM32,CCEYEMO2,CCEYETH3,CCEYEA13,CCEYEA23:  
                        CCEYEA33,CCEYEAO3,CCEYEM13,CCEYEM23,CCEYEM33,CCEYEMO3:  
                        CCEYETH4,CCEYEA14,CCEYEA24,CCEYEA34,CCEYEAO4,CCEYEM14:  
                        CCEYEM24,CCEYEM34,CCEYEMO4,CCEYETH5,CCEYEA15,CCEYEA25:  
                        CCEYEA35,CCEYEAO5,CCEYEM15,CCEYEM25,CCEYEM35,CCEYEMO5:  
                        CCEYSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEY1                                                                         
          UPDATE    CCSEYAA1;CCEYEID,CCEYBA1,CCEYBA2,CCEYBA3,CCEYBAO:           
                        CCEYITH,CCEYIA1,CCEYIA2,CCEYIA3,CCEYIAO,CCEYIM1:        
                        CCEYIM2,CCEYIM3,CCEYIMO,CCEYETH1,CCEYEA11,CCEYEA21:     
                        CCEYEA31,CCEYEAO1,CCEYEM11,CCEYEM21,CCEYEM31,CCEYEMO1:  
                        CCEYETH2,CCEYEA12,CCEYEA22,CCEYEA32,CCEYEAO2,CCEYEM12:  
                        CCEYEM22,CCEYEM32,CCEYEMO2,CCEYETH3,CCEYEA13,CCEYEA23:  
                        CCEYEA33,CCEYEAO3,CCEYEM13,CCEYEM23,CCEYEM33,CCEYEMO3:  
                        CCEYETH4,CCEYEA14,CCEYEA24,CCEYEA34,CCEYEAO4,CCEYEM14:  
                        CCEYEM24,CCEYEM34,CCEYEMO4,CCEYETH5,CCEYEA15,CCEYEA25:  
                        CCEYEA35,CCEYEAO5,CCEYEM15,CCEYEM25,CCEYEM35,CCEYEMO5:  
                        CCEYSPA                                                 
          RETURN
.
WRCCEY1   RESET     KEY4                                                        
          WRITE     CCSEYAA1,KEY4;CCEYEID,CCEYBA1,CCEYBA2,CCEYBA3,CCEYBAO:      
                        CCEYITH,CCEYIA1,CCEYIA2,CCEYIA3,CCEYIAO,CCEYIM1:        
                        CCEYIM2,CCEYIM3,CCEYIMO,CCEYETH1,CCEYEA11,CCEYEA21:     
                        CCEYEA31,CCEYEAO1,CCEYEM11,CCEYEM21,CCEYEM31,CCEYEMO1:  
                        CCEYETH2,CCEYEA12,CCEYEA22,CCEYEA32,CCEYEAO2,CCEYEM12:  
                        CCEYEM22,CCEYEM32,CCEYEMO2,CCEYETH3,CCEYEA13,CCEYEA23:  
                        CCEYEA33,CCEYEAO3,CCEYEM13,CCEYEM23,CCEYEM33,CCEYEMO3:  
                        CCEYETH4,CCEYEA14,CCEYEA24,CCEYEA34,CCEYEAO4,CCEYEM14:  
                        CCEYEM24,CCEYEM34,CCEYEMO4,CCEYETH5,CCEYEA15,CCEYEA25:  
                        CCEYEA35,CCEYEAO5,CCEYEM15,CCEYEM25,CCEYEM35,CCEYEMO5:  
                        CCEYSPA                                                 
          RETURN
.
DECCEY1   RESET     KEY4                                                        
          DELETE    CCSEYAA1,KEY4                                               
          RETURN
.
