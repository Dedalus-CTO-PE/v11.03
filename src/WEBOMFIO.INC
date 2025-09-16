.
. WEBOMFIO    
. --------
. Filename     : webomfaf.dat
.
RSWBOMF1  RESET     KEY8                                                        
          READ      WEBOMFA1,KEY8;;                                             
          RETURN
.
RAWBOMF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBOMFA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBOMFA1,KEY8;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM: 
                                  WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT: 
                                  WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI: 
                                  WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND: 
                                  WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2: 
                                  WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT: 
                                  WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG: 
                                  WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR: 
                                  WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3: 
                                  WBOFITM4,WBOFITM5,WBOFSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMF1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMFA1;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMF1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMFA1;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMFA1;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          RETURN
.
WRWBOMF1  RESET     KEY8                                                        
          WRITE     WEBOMFA1,KEY8;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM: 
                                  WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT: 
                                  WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI: 
                                  WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND: 
                                  WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2: 
                                  WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT: 
                                  WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG: 
                                  WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR: 
                                  WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3: 
                                  WBOFITM4,WBOFITM5,WBOFSPAR                    
          RETURN
.
DEWBOMF1  RESET     KEY8                                                        
          DELETE    WEBOMFA1,KEY8                                               
          RETURN
.
RSWBOMF2  RESET     KEY16                                                       
          READ      WEBOMFA2,KEY16;;                                            
          RETURN
.
RAWBOMF2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMF2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA2,KEY16;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMF2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMFA2;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMF2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMFA2;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMF2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMFA2;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          RETURN
.
WRWBOMF2  RESET     KEY16                                                       
          WRITE     WEBOMFA2,KEY16;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          RETURN
.
DEWBOMF2  RESET     KEY16                                                       
          DELETE    WEBOMFA2,KEY16                                              
          RETURN
.
RSWBOMF3  RESET     KEY88                                                       
          READ      WEBOMFA3,KEY88;;                                            
          RETURN
.
RAWBOMF3  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA3,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMF3  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA3,KEY88;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMF3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMFA3;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMF3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMFA3;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMF3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMFA3;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          RETURN
.
WRWBOMF3  RESET     KEY88                                                       
          WRITE     WEBOMFA3,KEY88;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          RETURN
.
DEWBOMF3  RESET     KEY88                                                       
          DELETE    WEBOMFA3,KEY88                                              
          RETURN
.
RSWBOMF4  RESET     KEY88                                                       
          READ      WEBOMFA4,KEY88;;                                            
          RETURN
.
RAWBOMF4  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA4,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMF4  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA4,KEY88;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMF4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMFA4;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMF4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMFA4;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMF4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMFA4;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          RETURN
.
WRWBOMF4  RESET     KEY88                                                       
          WRITE     WEBOMFA4,KEY88;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          RETURN
.
DEWBOMF4  RESET     KEY88                                                       
          DELETE    WEBOMFA4,KEY88                                              
          RETURN
.
RSWBOMF5  RESET     KEY19                                                       
          READ      WEBOMFA5,KEY19;;                                            
          RETURN
.
RAWBOMF5  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA5,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMF5  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA5,KEY19;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMF5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMFA5;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMF5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMFA5;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMF5  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMFA5;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          RETURN
.
WRWBOMF5  RESET     KEY19                                                       
          WRITE     WEBOMFA5,KEY19;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          RETURN
.
DEWBOMF5  RESET     KEY19                                                       
          DELETE    WEBOMFA5,KEY19                                              
          RETURN
.
RSWBOMF6  RESET     KEY32                                                       
          READ      WEBOMFA6,KEY32;;                                            
          RETURN
.
RAWBOMF6  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA6,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMF6  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA6,KEY32;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMF6  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMFA6;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMF6  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMFA6;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMF6  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMFA6;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          RETURN
.
WRWBOMF6  RESET     KEY32                                                       
          WRITE     WEBOMFA6,KEY32;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          RETURN
.
DEWBOMF6  RESET     KEY32                                                       
          DELETE    WEBOMFA6,KEY32                                              
          RETURN
.
RSWBOMF7  RESET     KEY44                                                       
          READ      WEBOMFA7,KEY44;;                                            
          RETURN
.
RAWBOMF7  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA7,KEY44;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMF7  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMFA7,KEY44;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMF7  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMFA7;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMF7  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMFA7;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMF7  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMFA7;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:      
                             WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:      
                             WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:      
                             WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:      
                             WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:      
                             WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:      
                             WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:      
                             WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:      
                             WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:      
                             WBOFITM4,WBOFITM5,WBOFSPAR                         
          RETURN
.
WRWBOMF7  RESET     KEY44                                                       
          WRITE     WEBOMFA7,KEY44;WBOFELGN,WBOFURNO,WBOFOECC,WBOFTITL,WBOFFNAM:
                                   WBOFSNAM,WBOFHFGN,WBOFHFSN,WBOFGEND,WBOFBDAT:
                                   WBOFEADT,WBOFISTY,WBOFPLOS,WBOFDINT,WBOFPEAI:
                                   WBOFEMAD,WBOFPRIC,WBOFPRIM,WBOFCLTY,WBOFHFND:
                                   WBOFHFNT,WBOFHFMN,WBOFDIAG,WBOFSRV1,WBOFSRV2:
                                   WBOFSRV3,WBOFSRV4,WBOFSRV5,WBOFCUID,WBOFCDAT:
                                   WBOFCTIM,WBOFDVAN,WBOFVISN,WBOFCNTR,WBOFFLAG:
                                   WBOFTRID,WBOFMSID,WBOFSTCD,WBOFMEDI,WBOFMEDR:
                                   WBOFPRPR,WBOFSVPR,WBOFITM1,WBOFITM2,WBOFITM3:
                                   WBOFITM4,WBOFITM5,WBOFSPAR                   
          RETURN
.
DEWBOMF7  RESET     KEY44                                                       
          DELETE    WEBOMFA7,KEY44                                              
          RETURN
.
