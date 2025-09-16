.
. PRIEAHIO    
. --------
. Filename     : prieahaf.dat
.
RSPREAH1  RESET     KEY32                                                       
          READ      PRIEAHA1,KEY32;;                                            
          RETURN
.
RAPREAH1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PRIEAHA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPREAH1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PRIEAHA1,KEY32;PRAHFBID,PRAHARID,PRAHCLID,PRAHRPTC,PRAHCPFN:
                        PRAHCPMN,PRAHCPRN,PRAHFSCD,PRAHCFAC,PRAHMCFC,PRAHMSCD:  
                        PRAHPSNM,PRAHPFNM,PRAHPMCN,PRAHPRFN,PRAHSTAT,PRAHFTID:  
                        PRAHUDTE,PRAHUTIM,PRAHSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPREAH1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIEAHA1;PRAHFBID,PRAHARID,PRAHCLID,PRAHRPTC,PRAHCPFN:      
                        PRAHCPMN,PRAHCPRN,PRAHFSCD,PRAHCFAC,PRAHMCFC,PRAHMSCD:  
                        PRAHPSNM,PRAHPFNM,PRAHPMCN,PRAHPRFN,PRAHSTAT,PRAHFTID:  
                        PRAHUDTE,PRAHUTIM,PRAHSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPREAH1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIEAHA1;PRAHFBID,PRAHARID,PRAHCLID,PRAHRPTC,PRAHCPFN:      
                        PRAHCPMN,PRAHCPRN,PRAHFSCD,PRAHCFAC,PRAHMCFC,PRAHMSCD:  
                        PRAHPSNM,PRAHPFNM,PRAHPMCN,PRAHPRFN,PRAHSTAT,PRAHFTID:  
                        PRAHUDTE,PRAHUTIM,PRAHSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPREAH1  UPDATE    PRIEAHA1;PRAHFBID,PRAHARID,PRAHCLID,PRAHRPTC,PRAHCPFN:      
                        PRAHCPMN,PRAHCPRN,PRAHFSCD,PRAHCFAC,PRAHMCFC,PRAHMSCD:  
                        PRAHPSNM,PRAHPFNM,PRAHPMCN,PRAHPRFN,PRAHSTAT,PRAHFTID:  
                        PRAHUDTE,PRAHUTIM,PRAHSPAR                              
          RETURN
.
WRPREAH1  RESET     KEY32                                                       
          WRITE     PRIEAHA1,KEY32;PRAHFBID,PRAHARID,PRAHCLID,PRAHRPTC,PRAHCPFN:
                        PRAHCPMN,PRAHCPRN,PRAHFSCD,PRAHCFAC,PRAHMCFC,PRAHMSCD:  
                        PRAHPSNM,PRAHPFNM,PRAHPMCN,PRAHPRFN,PRAHSTAT,PRAHFTID:  
                        PRAHUDTE,PRAHUTIM,PRAHSPAR                              
          RETURN
.
DEPREAH1  RESET     KEY32                                                       
          DELETE    PRIEAHA1,KEY32                                              
          RETURN
.
RSPREAH2  RESET     KEY56                                                       
          READ      PRIEAHA2,KEY56;;                                            
          RETURN
.
RAPREAH2  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      PRIEAHA2,KEY56;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPREAH2  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      PRIEAHA2,KEY56;PRAHFBID,PRAHARID,PRAHCLID,PRAHRPTC,PRAHCPFN:
                        PRAHCPMN,PRAHCPRN,PRAHFSCD,PRAHCFAC,PRAHMCFC,PRAHMSCD:  
                        PRAHPSNM,PRAHPFNM,PRAHPMCN,PRAHPRFN,PRAHSTAT,PRAHFTID:  
                        PRAHUDTE,PRAHUTIM,PRAHSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPREAH2  MOVE      ZERO,OVRCD                                                  
          READKS    PRIEAHA2;PRAHFBID,PRAHARID,PRAHCLID,PRAHRPTC,PRAHCPFN:      
                        PRAHCPMN,PRAHCPRN,PRAHFSCD,PRAHCFAC,PRAHMCFC,PRAHMSCD:  
                        PRAHPSNM,PRAHPFNM,PRAHPMCN,PRAHPRFN,PRAHSTAT,PRAHFTID:  
                        PRAHUDTE,PRAHUTIM,PRAHSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPREAH2  MOVE      ZERO,OVRCD                                                  
          READKP    PRIEAHA2;PRAHFBID,PRAHARID,PRAHCLID,PRAHRPTC,PRAHCPFN:      
                        PRAHCPMN,PRAHCPRN,PRAHFSCD,PRAHCFAC,PRAHMCFC,PRAHMSCD:  
                        PRAHPSNM,PRAHPFNM,PRAHPMCN,PRAHPRFN,PRAHSTAT,PRAHFTID:  
                        PRAHUDTE,PRAHUTIM,PRAHSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPREAH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PRIEAHA2;PRAHFBID,PRAHARID,PRAHCLID,PRAHRPTC,PRAHCPFN:      
                        PRAHCPMN,PRAHCPRN,PRAHFSCD,PRAHCFAC,PRAHMCFC,PRAHMSCD:  
                        PRAHPSNM,PRAHPFNM,PRAHPMCN,PRAHPRFN,PRAHSTAT,PRAHFTID:  
                        PRAHUDTE,PRAHUTIM,PRAHSPAR                              
          RETURN
.
WRPREAH2  RESET     KEY56                                                       
          WRITE     PRIEAHA2,KEY56;PRAHFBID,PRAHARID,PRAHCLID,PRAHRPTC,PRAHCPFN:
                        PRAHCPMN,PRAHCPRN,PRAHFSCD,PRAHCFAC,PRAHMCFC,PRAHMSCD:  
                        PRAHPSNM,PRAHPFNM,PRAHPMCN,PRAHPRFN,PRAHSTAT,PRAHFTID:  
                        PRAHUDTE,PRAHUTIM,PRAHSPAR                              
          RETURN
.
DEPREAH2  RESET     KEY56                                                       
          DELETE    PRIEAHA2,KEY56                                              
          RETURN
.
