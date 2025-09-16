.
. OPRAAEIO    
. --------
. Filename     : opraaeaf.dat
.
RSOPAAE1  RESET     KEY30                                                       
          READ      OPRAAE11,KEY30;;                                            
          RETURN
.
RAOPAAE1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      OPRAAE11,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPAAE1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      OPRAAE11,KEY30;OPAADATE,OPAATIME,OPAACLIN,OPAACASE,OPAAADMN:
                        OPAAGEUR,OPAAGEAC,OPAAGEP1,OPAAGEP2,OPAAPMRA,OPAAPMP1:  
                        OPAAPMP2,OPAARFPS,OPAARFTA,OPAARFBR,OPAARFRD,OPAARFLA:  
                        OPAARFBO,OPAARFAS,OPAARFVB,OPAARFRE,OPAARFRC,OPAACCIA:  
                        OPAACCCP,OPAACCEC,OPAACCNA,OPAACCHP,OPAACCHR,OPAACCBR:  
                        OPAACCTA,OPAABTB1,OPAABTB2,OPAABTB3,OPAAORDE,OPAAORDT:  
                        OPAAORAN,OPAAORSE,OPAAORUN,OPAAORIR,OPAAORNB,OPAAORST:  
                        OPAADIIN,OPAAADVE,OPAADIDT,OPAAOTFD,OPAAOTF1,OPAAOTF2:  
                        OPAAOTF3,OPAAOTF4,OPAAOTF5,OPAARFDE,OPAASPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPAAE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRAAE11;OPAADATE,OPAATIME,OPAACLIN,OPAACASE,OPAAADMN:      
                        OPAAGEUR,OPAAGEAC,OPAAGEP1,OPAAGEP2,OPAAPMRA,OPAAPMP1:  
                        OPAAPMP2,OPAARFPS,OPAARFTA,OPAARFBR,OPAARFRD,OPAARFLA:  
                        OPAARFBO,OPAARFAS,OPAARFVB,OPAARFRE,OPAARFRC,OPAACCIA:  
                        OPAACCCP,OPAACCEC,OPAACCNA,OPAACCHP,OPAACCHR,OPAACCBR:  
                        OPAACCTA,OPAABTB1,OPAABTB2,OPAABTB3,OPAAORDE,OPAAORDT:  
                        OPAAORAN,OPAAORSE,OPAAORUN,OPAAORIR,OPAAORNB,OPAAORST:  
                        OPAADIIN,OPAAADVE,OPAADIDT,OPAAOTFD,OPAAOTF1,OPAAOTF2:  
                        OPAAOTF3,OPAAOTF4,OPAAOTF5,OPAARFDE,OPAASPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPAAE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRAAE11;OPAADATE,OPAATIME,OPAACLIN,OPAACASE,OPAAADMN:      
                        OPAAGEUR,OPAAGEAC,OPAAGEP1,OPAAGEP2,OPAAPMRA,OPAAPMP1:  
                        OPAAPMP2,OPAARFPS,OPAARFTA,OPAARFBR,OPAARFRD,OPAARFLA:  
                        OPAARFBO,OPAARFAS,OPAARFVB,OPAARFRE,OPAARFRC,OPAACCIA:  
                        OPAACCCP,OPAACCEC,OPAACCNA,OPAACCHP,OPAACCHR,OPAACCBR:  
                        OPAACCTA,OPAABTB1,OPAABTB2,OPAABTB3,OPAAORDE,OPAAORDT:  
                        OPAAORAN,OPAAORSE,OPAAORUN,OPAAORIR,OPAAORNB,OPAAORST:  
                        OPAADIIN,OPAAADVE,OPAADIDT,OPAAOTFD,OPAAOTF1,OPAAOTF2:  
                        OPAAOTF3,OPAAOTF4,OPAAOTF5,OPAARFDE,OPAASPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPAAE1                                                                        
          UPDATE    OPRAAE11;OPAADATE,OPAATIME,OPAACLIN,OPAACASE,OPAAADMN:      
                        OPAAGEUR,OPAAGEAC,OPAAGEP1,OPAAGEP2,OPAAPMRA,OPAAPMP1:  
                        OPAAPMP2,OPAARFPS,OPAARFTA,OPAARFBR,OPAARFRD,OPAARFLA:  
                        OPAARFBO,OPAARFAS,OPAARFVB,OPAARFRE,OPAARFRC,OPAACCIA:  
                        OPAACCCP,OPAACCEC,OPAACCNA,OPAACCHP,OPAACCHR,OPAACCBR:  
                        OPAACCTA,OPAABTB1,OPAABTB2,OPAABTB3,OPAAORDE,OPAAORDT:  
                        OPAAORAN,OPAAORSE,OPAAORUN,OPAAORIR,OPAAORNB,OPAAORST:  
                        OPAADIIN,OPAAADVE,OPAADIDT,OPAAOTFD,OPAAOTF1,OPAAOTF2:  
                        OPAAOTF3,OPAAOTF4,OPAAOTF5,OPAARFDE,OPAASPAR            
          RETURN
.
WROPAAE1  RESET     KEY30                                                       
          WRITE     OPRAAE11,KEY30;OPAADATE,OPAATIME,OPAACLIN,OPAACASE,OPAAADMN:
                        OPAAGEUR,OPAAGEAC,OPAAGEP1,OPAAGEP2,OPAAPMRA,OPAAPMP1:  
                        OPAAPMP2,OPAARFPS,OPAARFTA,OPAARFBR,OPAARFRD,OPAARFLA:  
                        OPAARFBO,OPAARFAS,OPAARFVB,OPAARFRE,OPAARFRC,OPAACCIA:  
                        OPAACCCP,OPAACCEC,OPAACCNA,OPAACCHP,OPAACCHR,OPAACCBR:  
                        OPAACCTA,OPAABTB1,OPAABTB2,OPAABTB3,OPAAORDE,OPAAORDT:  
                        OPAAORAN,OPAAORSE,OPAAORUN,OPAAORIR,OPAAORNB,OPAAORST:  
                        OPAADIIN,OPAAADVE,OPAADIDT,OPAAOTFD,OPAAOTF1,OPAAOTF2:  
                        OPAAOTF3,OPAAOTF4,OPAAOTF5,OPAARFDE,OPAASPAR            
          RETURN
.
DEOPAAE1  RESET     KEY30                                                       
          DELETE    OPRAAE11,KEY30                                              
          RETURN
.
