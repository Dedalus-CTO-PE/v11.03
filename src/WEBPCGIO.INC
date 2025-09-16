.
. WEBPCGIO    
. --------
. Filename     : webpcgaf.dat
.
RSWBPCG1  RESET     KEY51                                                       
          READ      WEBPCGA1,KEY51;;                                            
          RETURN
.
RAWBPCG1  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCGA1,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCG1  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCGA1,KEY51;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:
                                   WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:
                                   WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCG1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCGA1;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:      
                             WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:      
                             WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCG1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCGA1;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:      
                             WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:      
                             WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCGA1;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:      
                             WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:      
                             WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR                
          RETURN
.
WRWBPCG1  RESET     KEY51                                                       
          WRITE     WEBPCGA1,KEY51;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:
                                   WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:
                                   WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR          
          RETURN
.
DEWBPCG1  RESET     KEY51                                                       
          DELETE    WEBPCGA1,KEY51                                              
          RETURN
.
RSWBPCG2  RESET     KEY51                                                       
          READ      WEBPCGA2,KEY51;;                                            
          RETURN
.
RAWBPCG2  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCGA2,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCG2  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCGA2,KEY51;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:
                                   WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:
                                   WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCG2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCGA2;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:      
                             WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:      
                             WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCG2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCGA2;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:      
                             WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:      
                             WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCG2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCGA2;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:      
                             WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:      
                             WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR                
          RETURN
.
WRWBPCG2  RESET     KEY51                                                       
          WRITE     WEBPCGA2,KEY51;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:
                                   WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:
                                   WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR          
          RETURN
.
DEWBPCG2  RESET     KEY51                                                       
          DELETE    WEBPCGA2,KEY51                                              
          RETURN
.
RSWBPCG3  RESET     KEY63                                                       
          READ      WEBPCGA3,KEY63;;                                            
          RETURN
.
RAWBPCG3  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCGA3,KEY63;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCG3  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCGA3,KEY63;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:
                                   WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:
                                   WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCG3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCGA3;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:      
                             WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:      
                             WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCG3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCGA3;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:      
                             WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:      
                             WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCG3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCGA3;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:      
                             WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:      
                             WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR                
          RETURN
.
WRWBPCG3  RESET     KEY63                                                       
          WRITE     WEBPCGA3,KEY63;WBPGCLID,WBPGTRID,WBPGCNTR,WBPGSCNT,WBPGSVID:
                                   WBPGASCD,WBPGBENP,WBPGCHGA,WBPGITMN,WBPGNMPT:
                                   WBPGCODE,WBPGTEXT,WBPGMSID,WBPGSPAR          
          RETURN
.
DEWBPCG3  RESET     KEY63                                                       
          DELETE    WEBPCGA3,KEY63                                              
          RETURN
.
