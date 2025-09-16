.
. WEBELFIO    
. --------
. Filename     : webelfaf.dat
.
RSWBELF1  RESET     KEY8                                                        
          READ      WEBELFA1,KEY8;;                                             
          RETURN
.
RAWBELF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBELFA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBELF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBELFA1,KEY8;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM: 
                                  WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT: 
                                  WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI: 
                                  WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND: 
                                  WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2: 
                                  WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT: 
                                  WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG: 
                                  WBEFTRID,WBEFMSID,WBEFSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBELF1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBELFA1;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBELF1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBELFA1;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBELF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBELFA1;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          RETURN
.
WRWBELF1  RESET     KEY8                                                        
          WRITE     WEBELFA1,KEY8;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM: 
                                  WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT: 
                                  WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI: 
                                  WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND: 
                                  WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2: 
                                  WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT: 
                                  WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG: 
                                  WBEFTRID,WBEFMSID,WBEFSPAR                    
          RETURN
.
DEWBELF1  RESET     KEY8                                                        
          DELETE    WEBELFA1,KEY8                                               
          RETURN
.
RSWBELF2  RESET     KEY16                                                       
          READ      WEBELFA2,KEY16;;                                            
          RETURN
.
RAWBELF2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBELF2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA2,KEY16;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBELF2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBELFA2;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBELF2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBELFA2;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBELF2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBELFA2;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          RETURN
.
WRWBELF2  RESET     KEY16                                                       
          WRITE     WEBELFA2,KEY16;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          RETURN
.
DEWBELF2  RESET     KEY16                                                       
          DELETE    WEBELFA2,KEY16                                              
          RETURN
.
RSWBELF3  RESET     KEY88                                                       
          READ      WEBELFA3,KEY88;;                                            
          RETURN
.
RAWBELF3  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA3,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBELF3  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA3,KEY88;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBELF3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBELFA3;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBELF3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBELFA3;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBELF3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBELFA3;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          RETURN
.
WRWBELF3  RESET     KEY88                                                       
          WRITE     WEBELFA3,KEY88;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          RETURN
.
DEWBELF3  RESET     KEY88                                                       
          DELETE    WEBELFA3,KEY88                                              
          RETURN
.
RSWBELF4  RESET     KEY88                                                       
          READ      WEBELFA4,KEY88;;                                            
          RETURN
.
RAWBELF4  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA4,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBELF4  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA4,KEY88;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBELF4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBELFA4;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBELF4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBELFA4;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBELF4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBELFA4;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          RETURN
.
WRWBELF4  RESET     KEY88                                                       
          WRITE     WEBELFA4,KEY88;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          RETURN
.
DEWBELF4  RESET     KEY88                                                       
          DELETE    WEBELFA4,KEY88                                              
          RETURN
.
RSWBELF5  RESET     KEY19                                                       
          READ      WEBELFA5,KEY19;;                                            
          RETURN
.
RAWBELF5  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA5,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBELF5  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA5,KEY19;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBELF5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBELFA5;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBELF5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBELFA5;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBELF5  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBELFA5;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          RETURN
.
WRWBELF5  RESET     KEY19                                                       
          WRITE     WEBELFA5,KEY19;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          RETURN
.
DEWBELF5  RESET     KEY19                                                       
          DELETE    WEBELFA5,KEY19                                              
          RETURN
.
RSWBELF6  RESET     KEY32                                                       
          READ      WEBELFA6,KEY32;;                                            
          RETURN
.
RAWBELF6  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA6,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBELF6  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA6,KEY32;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBELF6  MOVE      ZERO,OVRCD                                                  
          READKS    WEBELFA6;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBELF6  MOVE      ZERO,OVRCD                                                  
          READKP    WEBELFA6;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBELF6  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBELFA6;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          RETURN
.
WRWBELF6  RESET     KEY32                                                       
          WRITE     WEBELFA6,KEY32;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          RETURN
.
DEWBELF6  RESET     KEY32                                                       
          DELETE    WEBELFA6,KEY32                                              
          RETURN
.
RSWBELF7  RESET     KEY44                                                       
          READ      WEBELFA7,KEY44;;                                            
          RETURN
.
RAWBELF7  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA7,KEY44;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBELF7  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      WEBELFA7,KEY44;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBELF7  MOVE      ZERO,OVRCD                                                  
          READKS    WEBELFA7;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBELF7  MOVE      ZERO,OVRCD                                                  
          READKP    WEBELFA7;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBELF7  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBELFA7;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:      
                             WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:      
                             WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:      
                             WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:      
                             WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:      
                             WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:      
                             WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:      
                             WBEFTRID,WBEFMSID,WBEFSPAR                         
          RETURN
.
WRWBELF7  RESET     KEY44                                                       
          WRITE     WEBELFA7,KEY44;WBEFELGN,WBEFURNO,WBEFOECC,WBEFTITL,WBEFFNAM:
                                   WBEFSNAM,WBEFHFGN,WBEFHFSN,WBEFGEND,WBEFBDAT:
                                   WBEFEADT,WBEFISTY,WBEFPLOS,WBEFDINT,WBEFPEAI:
                                   WBEFEMAD,WBEFPRIC,WBEFPRIM,WBEFCLTY,WBEFHFND:
                                   WBEFHFNT,WBEFHFMN,WBEFDIAG,WBEFSRV1,WBEFSRV2:
                                   WBEFSRV3,WBEFSRV4,WBEFSRV5,WBEFCUID,WBEFCDAT:
                                   WBEFCTIM,WBEFDVAN,WBEFVISN,WBEFCNTR,WBEFFLAG:
                                   WBEFTRID,WBEFMSID,WBEFSPAR                   
          RETURN
.
DEWBELF7  RESET     KEY44                                                       
          DELETE    WEBELFA7,KEY44                                              
          RETURN
.
