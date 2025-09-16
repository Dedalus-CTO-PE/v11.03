.
. COMCODIO    
. --------
. Filename     : comcodaf.dat
.
RSCMCOD1  RESET     KEY5                                                        
          READ      COMCODA1,KEY5;;                                             
          RETURN
.
RACMCOD1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      COMCODA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMCOD1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      COMCODA1,KEY5;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT: 
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMCOD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    COMCODA1;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMCOD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    COMCODA1;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMCOD1                                                                        
          UPDATE    COMCODA1;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
WRCMCOD1  RESET     KEY5                                                        
          WRITE     COMCODA1,KEY5;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT: 
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
DECMCOD1  RESET     KEY5                                                        
          DELETE    COMCODA1,KEY5                                               
          RETURN
.
RSCMCOD2  RESET     KEY25                                                       
          READ      COMCODA2,KEY25;;                                            
          RETURN
.
RACMCOD2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      COMCODA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMCOD2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      COMCODA2,KEY25;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMCOD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    COMCODA2;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMCOD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    COMCODA2;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMCOD2                                                                        
          UPDATE    COMCODA2;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
WRCMCOD2  RESET     KEY25                                                       
          WRITE     COMCODA2,KEY25;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
DECMCOD2  RESET     KEY25                                                       
          DELETE    COMCODA2,KEY25                                              
          RETURN
.
RSCMCOD3  RESET     KEY5                                                        
          READ      COMCODA3,KEY5;;                                             
          RETURN
.
RACMCOD3  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      COMCODA3,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMCOD3  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      COMCODA3,KEY5;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT: 
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMCOD3                                                                        
          MOVE      ZERO,OVRCD
          READKS    COMCODA3;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMCOD3                                                                        
          MOVE      ZERO,OVRCD
          READKP    COMCODA3;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMCOD3                                                                        
          UPDATE    COMCODA3;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
WRCMCOD3  RESET     KEY5                                                        
          WRITE     COMCODA3,KEY5;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT: 
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
DECMCOD3  RESET     KEY5                                                        
          DELETE    COMCODA3,KEY5                                               
          RETURN
.
RSCMCOD4  RESET     KEY25                                                       
          READ      COMCODA4,KEY25;;                                            
          RETURN
.
RACMCOD4  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      COMCODA4,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMCOD4  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      COMCODA4,KEY25;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMCOD4                                                                        
          MOVE      ZERO,OVRCD
          READKS    COMCODA4;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMCOD4                                                                        
          MOVE      ZERO,OVRCD
          READKP    COMCODA4;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMCOD4                                                                        
          UPDATE    COMCODA4;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
WRCMCOD4  RESET     KEY25                                                       
          WRITE     COMCODA4,KEY25;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
DECMCOD4  RESET     KEY25                                                       
          DELETE    COMCODA4,KEY25                                              
          RETURN
.
RSCMCOD5  RESET     KEY9                                                        
          READ      COMCODA5,KEY9;;                                             
          RETURN
.
RACMCOD5  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      COMCODA5,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMCOD5  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      COMCODA5,KEY9;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT: 
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMCOD5                                                                        
          MOVE      ZERO,OVRCD
          READKS    COMCODA5;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMCOD5                                                                        
          MOVE      ZERO,OVRCD
          READKP    COMCODA5;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMCOD5                                                                        
          UPDATE    COMCODA5;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
WRCMCOD5  RESET     KEY9                                                        
          WRITE     COMCODA5,KEY9;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT: 
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
DECMCOD5  RESET     KEY9                                                        
          DELETE    COMCODA5,KEY9                                               
          RETURN
.
RSCMCOD6  RESET     KEY13                                                       
          READ      COMCODA6,KEY13;;                                            
          RETURN
.
RACMCOD6  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      COMCODA6,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMCOD6  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      COMCODA6,KEY13;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMCOD6                                                                        
          MOVE      ZERO,OVRCD
          READKS    COMCODA6;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMCOD6                                                                        
          MOVE      ZERO,OVRCD
          READKP    COMCODA6;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMCOD6                                                                        
          UPDATE    COMCODA6;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:      
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
WRCMCOD6  RESET     KEY13                                                       
          WRITE     COMCODA6,KEY13;CMCDTCOD,CMCDACOD,CMCDDESC,CMCDHDPE,CMCDFMDT:
                        CMCDTODT,CMCDASSC,CMCDNATE,CMCDSI01,CMCDSI02,CMCDSI03:  
                        CMCDSI04,CMCDSI05,CMCDSI06,CMCDSI07,CMCDSI08,CMCDSI09:  
                        CMCDSI10,CMCDSI11,CMCDGRPV,CMCDDEFT,CMCDSECL,CMCDSPAR   
          RETURN
.
DECMCOD6  RESET     KEY13                                                       
          DELETE    COMCODA6,KEY13                                              
          RETURN
.
