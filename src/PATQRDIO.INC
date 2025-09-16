.
. PATQRDIO    
. --------
. Filename     : patqrdaf.dat
.
RSPTQRD1  RESET     KEY12                                                       
          READ      PATQRDA1,KEY12;;                                            
          RETURN
.
RAPTQRD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATQRDA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTQRD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATQRDA1,KEY12;DPTQRADM,DPTQREPN,DPTQRCNT:
                        PTQRBISA,PTQRBISD,PTQRCLSP:
                        PTQRODTE,PTQRARTR,PTQRUSRF,PTQRPCSA,PTQRPCSD,PTQRRGAA:  
                        PTQRRGAD,PTQRSRPC,PTQRFIMA,PTQRFIMD,PTQRDIAG,PTQRCOM1:  
                        PTQRCOM2,PTQRFADT,PTQRFDDT,PTQRMCDT,PTQRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTQRADM,PTQRADMN                                           
          MOVE      DPTQREPN,PTQREPNO                                           
          MOVE      DPTQRCNT,PTQRCNTR                                           
          RETURN
.
RKPTQRD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATQRDA1;DPTQRADM,DPTQREPN,DPTQRCNT:
                        PTQRBISA,PTQRBISD,PTQRCLSP:      
                        PTQRODTE,PTQRARTR,PTQRUSRF,PTQRPCSA,PTQRPCSD,PTQRRGAA:  
                        PTQRRGAD,PTQRSRPC,PTQRFIMA,PTQRFIMD,PTQRDIAG,PTQRCOM1:  
                        PTQRCOM2,PTQRFADT,PTQRFDDT,PTQRMCDT,PTQRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTQRADM,PTQRADMN                                           
          MOVE      DPTQREPN,PTQREPNO                                           
          MOVE      DPTQRCNT,PTQRCNTR                                           
          RETURN
.
RPPTQRD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATQRDA1;DPTQRADM,DPTQREPN,DPTQRCNT:
                        PTQRBISA,PTQRBISD,PTQRCLSP:      
                        PTQRODTE,PTQRARTR,PTQRUSRF,PTQRPCSA,PTQRPCSD,PTQRRGAA:  
                        PTQRRGAD,PTQRSRPC,PTQRFIMA,PTQRFIMD,PTQRDIAG,PTQRCOM1:  
                        PTQRCOM2,PTQRFADT,PTQRFDDT,PTQRMCDT,PTQRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTQRADM,PTQRADMN                                           
          MOVE      DPTQREPN,PTQREPNO                                           
          MOVE      DPTQRCNT,PTQRCNTR                                           
          RETURN
.
UPPTQRD1                                                                        
          MOVE      PTQRADMN,DPTQRADM                                           
          MOVE      PTQREPNO,DPTQREPN                                           
          MOVE      PTQRCNTR,DPTQRCNT                                           
          UPDATE    PATQRDA1;DPTQRADM,DPTQREPN,DPTQRCNT:
                        PTQRBISA,PTQRBISD,PTQRCLSP:      
                        PTQRODTE,PTQRARTR,PTQRUSRF,PTQRPCSA,PTQRPCSD,PTQRRGAA:  
                        PTQRRGAD,PTQRSRPC,PTQRFIMA,PTQRFIMD,PTQRDIAG,PTQRCOM1:  
                        PTQRCOM2,PTQRFADT,PTQRFDDT,PTQRMCDT,PTQRSPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTQRD1  RESET     KEY12                                                       
          MOVE      PTQRADMN,DPTQRADM                                           
          MOVE      PTQREPNO,DPTQREPN                                           
          MOVE      PTQRCNTR,DPTQRCNT                                           
          WRITE     PATQRDA1,KEY12;DPTQRADM,DPTQREPN,DPTQRCNT:
                        PTQRBISA,PTQRBISD,PTQRCLSP:
                        PTQRODTE,PTQRARTR,PTQRUSRF,PTQRPCSA,PTQRPCSD,PTQRRGAA:  
                        PTQRRGAD,PTQRSRPC,PTQRFIMA,PTQRFIMD,PTQRDIAG,PTQRCOM1:  
                        PTQRCOM2,PTQRFADT,PTQRFDDT,PTQRMCDT,PTQRSPAR
          RETURN
.
DEPTQRD1  RESET     KEY12                                                       
          DELETE    PATQRDA1,KEY12                                              
          RETURN
.
RLPTQRD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     PATQRDA1,KEY12;DPTQRADM,DPTQREPN,DPTQRCNT:
                        PTQRBISA,PTQRBISD,PTQRCLSP:
                        PTQRODTE,PTQRARTR,PTQRUSRF,PTQRPCSA,PTQRPCSD,PTQRRGAA:  
                        PTQRRGAD,PTQRSRPC,PTQRFIMA,PTQRFIMD,PTQRDIAG,PTQRCOM1:  
                        PTQRCOM2,PTQRFADT,PTQRFDDT,PTQRMCDT,PTQRSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTQRADM,PTQRADMN                                           
          MOVE      DPTQREPN,PTQREPNO                                           
          MOVE      DPTQRCNT,PTQRCNTR                                           
          RETURN
.
KLPTQRD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATQRDA1;DPTQRADM,DPTQREPN,DPTQRCNT:
                        PTQRBISA,PTQRBISD,PTQRCLSP:      
                        PTQRODTE,PTQRARTR,PTQRUSRF,PTQRPCSA,PTQRPCSD,PTQRRGAA:  
                        PTQRRGAD,PTQRSRPC,PTQRFIMA,PTQRFIMD,PTQRDIAG,PTQRCOM1:  
                        PTQRCOM2,PTQRFADT,PTQRFDDT,PTQRMCDT,PTQRSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTQRADM,PTQRADMN                                           
          MOVE      DPTQREPN,PTQREPNO                                           
          MOVE      DPTQRCNT,PTQRCNTR                                           
          RETURN
.
PLPTQRD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATQRDA1;DPTQRADM,DPTQREPN,DPTQRCNT:
                        PTQRBISA,PTQRBISD,PTQRCLSP:      
                        PTQRODTE,PTQRARTR,PTQRUSRF,PTQRPCSA,PTQRPCSD,PTQRRGAA:  
                        PTQRRGAD,PTQRSRPC,PTQRFIMA,PTQRFIMD,PTQRDIAG,PTQRCOM1:  
                        PTQRCOM2,PTQRFADT,PTQRFDDT,PTQRMCDT,PTQRSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTQRADM,PTQRADMN                                           
          MOVE      DPTQREPN,PTQREPNO                                           
          MOVE      DPTQRCNT,PTQRCNTR                                           
          RETURN
.
UUPTQRD1  RESET     KEY12                                                       
          UNLOCK    PATQRDA1                                                    
          RETURN
.
