.
. APSIMSIO    
. --------
. Filename     : apsimsaf.dat
.
RSAPIM1   RESET     KEY40                                                       
          READ      APSIMSA1,KEY40;;                                            
          RETURN
.
RAAPIM1   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPIM1   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA1,KEY40;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPIM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSIMSA1;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPIM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSIMSA1;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPIM1                                                                         
          UPDATE    APSIMSA1;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
WRAPIM1   RESET     KEY40                                                       
          WRITE     APSIMSA1,KEY40;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
DEAPIM1   RESET     KEY40                                                       
          DELETE    APSIMSA1,KEY40                                              
          RETURN
.
RSAPIM2   RESET     KEY48                                                       
          READ      APSIMSA2,KEY48;;                                            
          RETURN
.
RAAPIM2   RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA2,KEY48;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPIM2   RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA2,KEY48;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPIM2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSIMSA2;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPIM2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSIMSA2;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPIM2                                                                         
          UPDATE    APSIMSA2;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
WRAPIM2   RESET     KEY48                                                       
          WRITE     APSIMSA2,KEY48;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
DEAPIM2   RESET     KEY48                                                       
          DELETE    APSIMSA2,KEY48                                              
          RETURN
.
RSAPIM3   RESET     KEY40                                                       
          READ      APSIMSA3,KEY40;;                                            
          RETURN
.
RAAPIM3   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA3,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPIM3   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA3,KEY40;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPIM3                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSIMSA3;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPIM3                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSIMSA3;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPIM3                                                                         
          UPDATE    APSIMSA3;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
WRAPIM3   RESET     KEY40                                                       
          WRITE     APSIMSA3,KEY40;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
DEAPIM3   RESET     KEY40                                                       
          DELETE    APSIMSA3,KEY40                                              
          RETURN
.
RSAPIM4   RESET     KEY40                                                       
          READ      APSIMSA4,KEY40;;                                            
          RETURN
.
RAAPIM4   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA4,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPIM4   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA4,KEY40;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPIM4                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSIMSA4;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPIM4                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSIMSA4;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPIM4                                                                         
          UPDATE    APSIMSA4;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
WRAPIM4   RESET     KEY40                                                       
          WRITE     APSIMSA4,KEY40;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
DEAPIM4   RESET     KEY40                                                       
          DELETE    APSIMSA4,KEY40                                              
          RETURN
.
RSAPIM5   RESET     KEY40                                                       
          READ      APSIMSA5,KEY40;;                                            
          RETURN
.
RAAPIM5   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA5,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPIM5   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA5,KEY40;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPIM5                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSIMSA5;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPIM5                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSIMSA5;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPIM5                                                                         
          UPDATE    APSIMSA5;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
WRAPIM5   RESET     KEY40                                                       
          WRITE     APSIMSA5,KEY40;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
DEAPIM5   RESET     KEY40                                                       
          DELETE    APSIMSA5,KEY40                                              
          RETURN
.
RSAPIM6   RESET     KEY41                                                       
          READ      APSIMSA6,KEY41;;                                            
          RETURN
.
RAAPIM6   RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA6,KEY41;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPIM6   RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      APSIMSA6,KEY41;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPIM6                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSIMSA6;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPIM6                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSIMSA6;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPIM6                                                                         
          UPDATE    APSIMSA6;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:           
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
WRAPIM6   RESET     KEY41                                                       
          WRITE     APSIMSA6,KEY41;APIMBCH,APIMCRD,APIMREF,APIMDOC,APIMTYP:     
                        APIMUPD,APIMOUT,APIMTER,APIMIDT,APIMDDT,APIMPDT:        
                        APIMTDT,APIMTOT,APIMDIS,APIMGST,APIMPAY,APIMCM1:        
                        APIMCM2,APIMICM,APIMPAYG,APIMSPA                        
          RETURN
.
DEAPIM6   RESET     KEY41                                                       
          DELETE    APSIMSA6,KEY41                                              
          RETURN
.
