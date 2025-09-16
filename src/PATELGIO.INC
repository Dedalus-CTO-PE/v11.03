.
. PATELGIO    
. --------
. Filename     : patelgaf.dat
.
RSPTELG1  RESET     KEY8                                                        
          READ      PATELGA1,KEY8;;                                             
          RETURN
.
RAPTELG1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATELGA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTELG1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATELGA1,KEY8;PTELVISN,PTELFINC,PTELXCSS,PTELPPRI,PTELPSHA: 
                        PTELPTHE,PTELXCLS,PTELCMPL,PTELCOVR,PTELQEXS,PTELQACC:  
                        PTELCDON,PTELRDAT,PTELSPEA,PTELHFRN,PTELPTHF,PTELXCMN:  
                        PTELPPUT,PTELPSUT,PTELPTUT,PTELECMN,PTELHSTM,PTELHFPN:  
                        PTELPSDY,PTELPSDU,PTELPHSP,PTELPHSU,PTELAFRM,PTELQLPS:  
                        PTELMDES,PTELMAMT,PTELEADM,PTELCPCP,PTELCSCP,PTELCDCP:  
                        PTELCHCP,PTELCTCP,PTELTOOP,PTELXCSD,PTELPCCU,PTELCCCU:  
                        PTELPCUT,PTELCMXC,PTELECLS,PTELSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTELG1  MOVE      ZERO,OVRCD                                                  
          READKS    PATELGA1;PTELVISN,PTELFINC,PTELXCSS,PTELPPRI,PTELPSHA:      
                        PTELPTHE,PTELXCLS,PTELCMPL,PTELCOVR,PTELQEXS,PTELQACC:  
                        PTELCDON,PTELRDAT,PTELSPEA,PTELHFRN,PTELPTHF,PTELXCMN:  
                        PTELPPUT,PTELPSUT,PTELPTUT,PTELECMN,PTELHSTM,PTELHFPN:  
                        PTELPSDY,PTELPSDU,PTELPHSP,PTELPHSU,PTELAFRM,PTELQLPS:  
                        PTELMDES,PTELMAMT,PTELEADM,PTELCPCP,PTELCSCP,PTELCDCP:  
                        PTELCHCP,PTELCTCP,PTELTOOP,PTELXCSD,PTELPCCU,PTELCCCU:  
                        PTELPCUT,PTELCMXC,PTELECLS,PTELSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTELG1  MOVE      ZERO,OVRCD                                                  
          READKP    PATELGA1;PTELVISN,PTELFINC,PTELXCSS,PTELPPRI,PTELPSHA:      
                        PTELPTHE,PTELXCLS,PTELCMPL,PTELCOVR,PTELQEXS,PTELQACC:  
                        PTELCDON,PTELRDAT,PTELSPEA,PTELHFRN,PTELPTHF,PTELXCMN:  
                        PTELPPUT,PTELPSUT,PTELPTUT,PTELECMN,PTELHSTM,PTELHFPN:  
                        PTELPSDY,PTELPSDU,PTELPHSP,PTELPHSU,PTELAFRM,PTELQLPS:  
                        PTELMDES,PTELMAMT,PTELEADM,PTELCPCP,PTELCSCP,PTELCDCP:  
                        PTELCHCP,PTELCTCP,PTELTOOP,PTELXCSD,PTELPCCU,PTELCCCU:  
                        PTELPCUT,PTELCMXC,PTELECLS,PTELSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTELG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATELGA1;PTELVISN,PTELFINC,PTELXCSS,PTELPPRI,PTELPSHA:      
                        PTELPTHE,PTELXCLS,PTELCMPL,PTELCOVR,PTELQEXS,PTELQACC:  
                        PTELCDON,PTELRDAT,PTELSPEA,PTELHFRN,PTELPTHF,PTELXCMN:  
                        PTELPPUT,PTELPSUT,PTELPTUT,PTELECMN,PTELHSTM,PTELHFPN:  
                        PTELPSDY,PTELPSDU,PTELPHSP,PTELPHSU,PTELAFRM,PTELQLPS:  
                        PTELMDES,PTELMAMT,PTELEADM,PTELCPCP,PTELCSCP,PTELCDCP:  
                        PTELCHCP,PTELCTCP,PTELTOOP,PTELXCSD,PTELPCCU,PTELCCCU:  
                        PTELPCUT,PTELCMXC,PTELECLS,PTELSPAR                     
          RETURN
.
WRPTELG1  RESET     KEY8                                                        
          WRITE     PATELGA1,KEY8;PTELVISN,PTELFINC,PTELXCSS,PTELPPRI,PTELPSHA: 
                        PTELPTHE,PTELXCLS,PTELCMPL,PTELCOVR,PTELQEXS,PTELQACC:  
                        PTELCDON,PTELRDAT,PTELSPEA,PTELHFRN,PTELPTHF,PTELXCMN:  
                        PTELPPUT,PTELPSUT,PTELPTUT,PTELECMN,PTELHSTM,PTELHFPN:  
                        PTELPSDY,PTELPSDU,PTELPHSP,PTELPHSU,PTELAFRM,PTELQLPS:  
                        PTELMDES,PTELMAMT,PTELEADM,PTELCPCP,PTELCSCP,PTELCDCP:  
                        PTELCHCP,PTELCTCP,PTELTOOP,PTELXCSD,PTELPCCU,PTELCCCU:  
                        PTELPCUT,PTELCMXC,PTELECLS,PTELSPAR                     
          RETURN
.
DEPTELG1  RESET     KEY8                                                        
          DELETE    PATELGA1,KEY8                                               
          RETURN
.
