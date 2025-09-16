.
. FMSINTIO    
. --------
. Filename     : fmsintaf.dat
.
RSFMIN1   RESET     KEY3                                                        
          READ      FMSINTA1,KEY3;;                                             
          RETURN
.
RAFMIN1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      FMSINTA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMIN1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      FMSINTA1,KEY3;FMINCODE,FMINDESC,FMINCASH,FMINAUTH,FMINTDES: 
                        FMINREF,FMINDISS,FMINRESP,FMINLEDG,FMINCRAC,FMINCRAA:   
                        FMINFEEI,FMINSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMIN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSINTA1;FMINCODE,FMINDESC,FMINCASH,FMINAUTH,FMINTDES:      
                        FMINREF,FMINDISS,FMINRESP,FMINLEDG,FMINCRAC,FMINCRAA:   
                        FMINFEEI,FMINSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMIN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSINTA1;FMINCODE,FMINDESC,FMINCASH,FMINAUTH,FMINTDES:      
                        FMINREF,FMINDISS,FMINRESP,FMINLEDG,FMINCRAC,FMINCRAA:   
                        FMINFEEI,FMINSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMIN1                                                                         
          UPDATE    FMSINTA1;FMINCODE,FMINDESC,FMINCASH,FMINAUTH,FMINTDES:      
                        FMINREF,FMINDISS,FMINRESP,FMINLEDG,FMINCRAC,FMINCRAA:   
                        FMINFEEI,FMINSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMIN1   RESET     KEY3                                                        
          WRITE     FMSINTA1,KEY3;FMINCODE,FMINDESC,FMINCASH,FMINAUTH,FMINTDES: 
                        FMINREF,FMINDISS,FMINRESP,FMINLEDG,FMINCRAC,FMINCRAA:   
                        FMINFEEI,FMINSPAR                                       
          RETURN
.
DEFMIN1   RESET     KEY3                                                        
          DELETE    FMSINTA1,KEY3                                               
          RETURN
.
RLFMIN1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     FMSINTA1,KEY3;FMINCODE,FMINDESC,FMINCASH,FMINAUTH,FMINTDES: 
                        FMINREF,FMINDISS,FMINRESP,FMINLEDG,FMINCRAC,FMINCRAA:   
                        FMINFEEI,FMINSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMIN1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSINTA1;FMINCODE,FMINDESC,FMINCASH,FMINAUTH,FMINTDES:      
                        FMINREF,FMINDISS,FMINRESP,FMINLEDG,FMINCRAC,FMINCRAA:   
                        FMINFEEI,FMINSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMIN1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSINTA1;FMINCODE,FMINDESC,FMINCASH,FMINAUTH,FMINTDES:      
                        FMINREF,FMINDISS,FMINRESP,FMINLEDG,FMINCRAC,FMINCRAA:   
                        FMINFEEI,FMINSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMIN1   RESET     KEY3                                                        
          UNLOCK    FMSINTA1                                                    
          RETURN
.
