.
. PMSELFIO    
. --------
. Filename     : pmselfaf.dat
.
RSPMELF1  RESET     KEY8                                                        
          READ      PMSELFA1,KEY8;;                                             
          RETURN
.
RAPMELF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSELFA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMELF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSELFA1,KEY8;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM: 
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMELF1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSELFA1;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMELF1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSELFA1;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMELF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSELFA1;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          RETURN
.
WRPMELF1  RESET     KEY8                                                        
          WRITE     PMSELFA1,KEY8;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM: 
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          RETURN
.
DEPMELF1  RESET     KEY8                                                        
          DELETE    PMSELFA1,KEY8                                               
          RETURN
.
RSPMELF2  RESET     KEY16                                                       
          READ      PMSELFA2,KEY16;;                                            
          RETURN
.
RAPMELF2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSELFA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMELF2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSELFA2,KEY16;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMELF2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSELFA2;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMELF2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSELFA2;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMELF2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSELFA2;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          RETURN
.
WRPMELF2  RESET     KEY16                                                       
          WRITE     PMSELFA2,KEY16;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          RETURN
.
DEPMELF2  RESET     KEY16                                                       
          DELETE    PMSELFA2,KEY16                                              
          RETURN
.
RSPMELF3  RESET     KEY88                                                       
          READ      PMSELFA3,KEY88;;                                            
          RETURN
.
RAPMELF3  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSELFA3,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMELF3  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSELFA3,KEY88;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMELF3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSELFA3;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMELF3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSELFA3;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMELF3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSELFA3;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          RETURN
.
WRPMELF3  RESET     KEY88                                                       
          WRITE     PMSELFA3,KEY88;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          RETURN
.
DEPMELF3  RESET     KEY88                                                       
          DELETE    PMSELFA3,KEY88                                              
          RETURN
.
RSPMELF4  RESET     KEY88                                                       
          READ      PMSELFA4,KEY88;;                                            
          RETURN
.
RAPMELF4  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSELFA4,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMELF4  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSELFA4,KEY88;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMELF4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSELFA4;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMELF4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSELFA4;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMELF4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSELFA4;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:      
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          RETURN
.
WRPMELF4  RESET     KEY88                                                       
          WRITE     PMSELFA4,KEY88;PMEFELGN,PMEFURNO,PMEFOECC,PMEFTITL,PMEFFNAM:
                        PMEFSNAM,PMEFHFGN,PMEFHFSN,PMEFGEND,PMEFBDAT,PMEFEADT:  
                        PMEFISTY,PMEFPLOS,PMEFDINT,PMEFPEAI,PMEFEMAD,PMEFPRIC:  
                        PMEFPRIM,PMEFCLTY,PMEFHFND,PMEFHFNT,PMEFHFMN,PMEFDIAG:  
                        PMEFSRV1,PMEFSRV2,PMEFSRV3,PMEFSRV4,PMEFSRV5,PMEFCUID:  
                        PMEFCDAT,PMEFCTIM,PMEFDVAN,PMEFVISN,PMEFCNTR,PMEFFLAG:  
                        PMEFSPAR                                                
          RETURN
.
DEPMELF4  RESET     KEY88                                                       
          DELETE    PMSELFA4,KEY88                                              
          RETURN
.
