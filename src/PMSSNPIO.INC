.
. PMSSNPIO    
. --------
. Filename     : pmssnpaf.dat
.
RSPMSNP1  RESET     KEY5                                                        
          READ      PMSSNPA1,KEY5;;                                             
          RETURN
.
RAPMSNP1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      PMSSNPA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSNP1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      PMSSNPA1,KEY5;PMSNCLCD,PMSNVERS,PMSNDESC,PMSNETYP,PMSNACTV: 
                        PMSNDACT,PMSNDIAC,PMSNCUID,PMSNCDAT,PMSNCTIM,PMSNUUID:  
                        PMSNUDAT,PMSNUTIM,PMSNHDPE,PMSNHCPE,PMSNANSE,PMSNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSNP1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSNPA1;PMSNCLCD,PMSNVERS,PMSNDESC,PMSNETYP,PMSNACTV:      
                        PMSNDACT,PMSNDIAC,PMSNCUID,PMSNCDAT,PMSNCTIM,PMSNUUID:  
                        PMSNUDAT,PMSNUTIM,PMSNHDPE,PMSNHCPE,PMSNANSE,PMSNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSNP1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSNPA1;PMSNCLCD,PMSNVERS,PMSNDESC,PMSNETYP,PMSNACTV:      
                        PMSNDACT,PMSNDIAC,PMSNCUID,PMSNCDAT,PMSNCTIM,PMSNUUID:  
                        PMSNUDAT,PMSNUTIM,PMSNHDPE,PMSNHCPE,PMSNANSE,PMSNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSNP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSNPA1;PMSNCLCD,PMSNVERS,PMSNDESC,PMSNETYP,PMSNACTV:      
                        PMSNDACT,PMSNDIAC,PMSNCUID,PMSNCDAT,PMSNCTIM,PMSNUUID:  
                        PMSNUDAT,PMSNUTIM,PMSNHDPE,PMSNHCPE,PMSNANSE,PMSNSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSNP1  RESET     KEY5                                                        
          WRITE     PMSSNPA1,KEY5;PMSNCLCD,PMSNVERS,PMSNDESC,PMSNETYP,PMSNACTV: 
                        PMSNDACT,PMSNDIAC,PMSNCUID,PMSNCDAT,PMSNCTIM,PMSNUUID:  
                        PMSNUDAT,PMSNUTIM,PMSNHDPE,PMSNHCPE,PMSNANSE,PMSNSPAR   
          RETURN
.
DEPMSNP1  RESET     KEY5                                                        
          DELETE    PMSSNPA1,KEY5                                               
          RETURN
.
RLPMSNP1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     PMSSNPA1,KEY5;PMSNCLCD,PMSNVERS,PMSNDESC,PMSNETYP,PMSNACTV: 
                        PMSNDACT,PMSNDIAC,PMSNCUID,PMSNCDAT,PMSNCTIM,PMSNUUID:  
                        PMSNUDAT,PMSNUTIM,PMSNHDPE,PMSNHCPE,PMSNANSE,PMSNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSNP1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSNPA1;PMSNCLCD,PMSNVERS,PMSNDESC,PMSNETYP,PMSNACTV:      
                        PMSNDACT,PMSNDIAC,PMSNCUID,PMSNCDAT,PMSNCTIM,PMSNUUID:  
                        PMSNUDAT,PMSNUTIM,PMSNHDPE,PMSNHCPE,PMSNANSE,PMSNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSNP1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSNPA1;PMSNCLCD,PMSNVERS,PMSNDESC,PMSNETYP,PMSNACTV:      
                        PMSNDACT,PMSNDIAC,PMSNCUID,PMSNCDAT,PMSNCTIM,PMSNUUID:  
                        PMSNUDAT,PMSNUTIM,PMSNHDPE,PMSNHCPE,PMSNANSE,PMSNSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSNP1  RESET     KEY5                                                        
          UNLOCK    PMSSNPA1                                                    
          RETURN
.
