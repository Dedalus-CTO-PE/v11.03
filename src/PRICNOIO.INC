.
. PRICNOIO    
. --------
. Filename     : pricnoaf.dat
.
RSPRCNO1  RESET     KEY8                                                        
          READ      PRICNOA1,KEY8;;                                             
          RETURN
.
RAPRCNO1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PRICNOA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRCNO1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PRICNOA1,KEY8;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN: 
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRCNO1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRICNOA1;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRCNO1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRICNOA1;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRCNO1                                                                        
          UPDATE    PRICNOA1;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          RETURN
.
WRPRCNO1  RESET     KEY8                                                        
          WRITE     PRICNOA1,KEY8;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN: 
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          RETURN
.
DEPRCNO1  RESET     KEY8                                                        
          DELETE    PRICNOA1,KEY8                                               
          RETURN
.
RSPRCNO2  RESET     KEY18                                                       
          READ      PRICNOA2,KEY18;;                                            
          RETURN
.
RAPRCNO2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PRICNOA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRCNO2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PRICNOA2,KEY18;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRCNO2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRICNOA2;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRCNO2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRICNOA2;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRCNO2                                                                        
          UPDATE    PRICNOA2;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          RETURN
.
WRPRCNO2  RESET     KEY18                                                       
          WRITE     PRICNOA2,KEY18;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          RETURN
.
DEPRCNO2  RESET     KEY18                                                       
          DELETE    PRICNOA2,KEY18                                              
          RETURN
.
RSPRCNO3  RESET     KEY16                                                       
          READ      PRICNOA3,KEY16;;                                            
          RETURN
.
RAPRCNO3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRICNOA3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRCNO3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRICNOA3,KEY16;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRCNO3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRICNOA3;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRCNO3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRICNOA3;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRCNO3                                                                        
          UPDATE    PRICNOA3;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          RETURN
.
WRPRCNO3  RESET     KEY16                                                       
          WRITE     PRICNOA3,KEY16;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          RETURN
.
DEPRCNO3  RESET     KEY16                                                       
          DELETE    PRICNOA3,KEY16                                              
          RETURN
.
RSPRCNO4  RESET     KEY16                                                       
          READ      PRICNOA4,KEY16;;                                            
          RETURN
.
RAPRCNO4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRICNOA4,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRCNO4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRICNOA4,KEY16;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRCNO4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRICNOA4;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRCNO4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRICNOA4;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRCNO4                                                                        
          UPDATE    PRICNOA4;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:      
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          RETURN
.
WRPRCNO4  RESET     KEY16                                                       
          WRITE     PRICNOA4,KEY16;PRCOCRNO,PRCODATE,PRCODEBT,PRCOSCAN,PRCOINVN:
                        PRCOSTAT,PRCOREAS,PRCOAMNT,PRCOGSTM,PRCOSPAR            
          RETURN
.
DEPRCNO4  RESET     KEY16                                                       
          DELETE    PRICNOA4,KEY16                                              
          RETURN
.
