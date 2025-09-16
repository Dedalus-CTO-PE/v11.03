.
. APSINPIO    
. --------
. Filename     : apsinpaf.dat
.
RSAPIN1   RESET     KEY51                                                       
          READ      APSINPA1,KEY51;;                                            
          RETURN
.
RAAPIN1   RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      APSINPA1,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPIN1   RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      APSINPA1,KEY51;APINBCH,APINCRD,APINREF,APINDOC,APINORD:     
                        APINLIN,APINUPD,APINLED,APINACC,APINDIS,APINRES:        
                        APINCAT,APINDES,APINQTY,APINUCT,APINAMT,APINPAY:        
                        APINGST,APINCGS,APINPAYG,APINBASC,APINSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPIN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSINPA1;APINBCH,APINCRD,APINREF,APINDOC,APINORD:           
                        APINLIN,APINUPD,APINLED,APINACC,APINDIS,APINRES:        
                        APINCAT,APINDES,APINQTY,APINUCT,APINAMT,APINPAY:        
                        APINGST,APINCGS,APINPAYG,APINBASC,APINSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPIN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSINPA1;APINBCH,APINCRD,APINREF,APINDOC,APINORD:           
                        APINLIN,APINUPD,APINLED,APINACC,APINDIS,APINRES:        
                        APINCAT,APINDES,APINQTY,APINUCT,APINAMT,APINPAY:        
                        APINGST,APINCGS,APINPAYG,APINBASC,APINSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPIN1                                                                         
          UPDATE    APSINPA1;APINBCH,APINCRD,APINREF,APINDOC,APINORD:           
                        APINLIN,APINUPD,APINLED,APINACC,APINDIS,APINRES:        
                        APINCAT,APINDES,APINQTY,APINUCT,APINAMT,APINPAY:        
                        APINGST,APINCGS,APINPAYG,APINBASC,APINSPA               
          RETURN
.
WRAPIN1   RESET     KEY51                                                       
          WRITE     APSINPA1,KEY51;APINBCH,APINCRD,APINREF,APINDOC,APINORD:     
                        APINLIN,APINUPD,APINLED,APINACC,APINDIS,APINRES:        
                        APINCAT,APINDES,APINQTY,APINUCT,APINAMT,APINPAY:        
                        APINGST,APINCGS,APINPAYG,APINBASC,APINSPA               
          RETURN
.
DEAPIN1   RESET     KEY51                                                       
          DELETE    APSINPA1,KEY51                                              
          RETURN
.
RSAPIN2   RESET     KEY51                                                       
          READ      APSINPA2,KEY51;;                                            
          RETURN
.
RAAPIN2   RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      APSINPA2,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPIN2   RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      APSINPA2,KEY51;APINBCH,APINCRD,APINREF,APINDOC,APINORD:     
                        APINLIN,APINUPD,APINLED,APINACC,APINDIS,APINRES:        
                        APINCAT,APINDES,APINQTY,APINUCT,APINAMT,APINPAY:        
                        APINGST,APINCGS,APINPAYG,APINBASC,APINSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPIN2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSINPA2;APINBCH,APINCRD,APINREF,APINDOC,APINORD:           
                        APINLIN,APINUPD,APINLED,APINACC,APINDIS,APINRES:        
                        APINCAT,APINDES,APINQTY,APINUCT,APINAMT,APINPAY:        
                        APINGST,APINCGS,APINPAYG,APINBASC,APINSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPIN2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSINPA2;APINBCH,APINCRD,APINREF,APINDOC,APINORD:           
                        APINLIN,APINUPD,APINLED,APINACC,APINDIS,APINRES:        
                        APINCAT,APINDES,APINQTY,APINUCT,APINAMT,APINPAY:        
                        APINGST,APINCGS,APINPAYG,APINBASC,APINSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPIN2                                                                         
          UPDATE    APSINPA2;APINBCH,APINCRD,APINREF,APINDOC,APINORD:           
                        APINLIN,APINUPD,APINLED,APINACC,APINDIS,APINRES:        
                        APINCAT,APINDES,APINQTY,APINUCT,APINAMT,APINPAY:        
                        APINGST,APINCGS,APINPAYG,APINBASC,APINSPA               
          RETURN
.
WRAPIN2   RESET     KEY51                                                       
          WRITE     APSINPA2,KEY51;APINBCH,APINCRD,APINREF,APINDOC,APINORD:     
                        APINLIN,APINUPD,APINLED,APINACC,APINDIS,APINRES:        
                        APINCAT,APINDES,APINQTY,APINUCT,APINAMT,APINPAY:        
                        APINGST,APINCGS,APINPAYG,APINBASC,APINSPA               
          RETURN
.
DEAPIN2   RESET     KEY51                                                       
          DELETE    APSINPA2,KEY51                                              
          RETURN
.
