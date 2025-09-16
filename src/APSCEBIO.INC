.
. APSCEBIO    
. --------
. Filename     : apscebaf.dat
.
RSAPEB1   RESET     KEY14                                                       
          READ      APSCEBA1,KEY14;;                                            
          RETURN
.
RAAPEB1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      APSCEBA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPEB1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      APSCEBA1,KEY14;APEBISC,APEBORD,APEBCAT,APEBLED,APEBACC:     
                        APEBDIS,APEBRES,APEBDES,APEBAMT,APEBGST,APEBUCT:        
                        APEBUGS,APEBQTY,APEBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPEB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCEBA1;APEBISC,APEBORD,APEBCAT,APEBLED,APEBACC:           
                        APEBDIS,APEBRES,APEBDES,APEBAMT,APEBGST,APEBUCT:        
                        APEBUGS,APEBQTY,APEBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPEB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCEBA1;APEBISC,APEBORD,APEBCAT,APEBLED,APEBACC:           
                        APEBDIS,APEBRES,APEBDES,APEBAMT,APEBGST,APEBUCT:        
                        APEBUGS,APEBQTY,APEBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPEB1                                                                         
          UPDATE    APSCEBA1;APEBISC,APEBORD,APEBCAT,APEBLED,APEBACC:           
                        APEBDIS,APEBRES,APEBDES,APEBAMT,APEBGST,APEBUCT:        
                        APEBUGS,APEBQTY,APEBSPA                                 
          RETURN
.
WRAPEB1   RESET     KEY14                                                       
          WRITE     APSCEBA1,KEY14;APEBISC,APEBORD,APEBCAT,APEBLED,APEBACC:     
                        APEBDIS,APEBRES,APEBDES,APEBAMT,APEBGST,APEBUCT:        
                        APEBUGS,APEBQTY,APEBSPA                                 
          RETURN
.
DEAPEB1   RESET     KEY14                                                       
          DELETE    APSCEBA1,KEY14                                              
          RETURN
.
RSAPEB2   RESET     KEY28                                                       
          READ      APSCEBA2,KEY28;;                                            
          RETURN
.
RAAPEB2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      APSCEBA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPEB2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      APSCEBA2,KEY28;APEBISC,APEBORD,APEBCAT,APEBLED,APEBACC:     
                        APEBDIS,APEBRES,APEBDES,APEBAMT,APEBGST,APEBUCT:        
                        APEBUGS,APEBQTY,APEBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPEB2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCEBA2;APEBISC,APEBORD,APEBCAT,APEBLED,APEBACC:           
                        APEBDIS,APEBRES,APEBDES,APEBAMT,APEBGST,APEBUCT:        
                        APEBUGS,APEBQTY,APEBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPEB2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCEBA2;APEBISC,APEBORD,APEBCAT,APEBLED,APEBACC:           
                        APEBDIS,APEBRES,APEBDES,APEBAMT,APEBGST,APEBUCT:        
                        APEBUGS,APEBQTY,APEBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPEB2                                                                         
          UPDATE    APSCEBA2;APEBISC,APEBORD,APEBCAT,APEBLED,APEBACC:           
                        APEBDIS,APEBRES,APEBDES,APEBAMT,APEBGST,APEBUCT:        
                        APEBUGS,APEBQTY,APEBSPA                                 
          RETURN
.
WRAPEB2   RESET     KEY28                                                       
          WRITE     APSCEBA2,KEY28;APEBISC,APEBORD,APEBCAT,APEBLED,APEBACC:     
                        APEBDIS,APEBRES,APEBDES,APEBAMT,APEBGST,APEBUCT:        
                        APEBUGS,APEBQTY,APEBSPA                                 
          RETURN
.
DEAPEB2   RESET     KEY28                                                       
          DELETE    APSCEBA2,KEY28                                              
          RETURN
.
