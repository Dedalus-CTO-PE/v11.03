.
. WEBOPVIO    
. --------
. Filename     : webopvaf.dat
.
RSWBOPV1  RESET     KEY26                                                       
          READ      WEBOPVA1,KEY26;;                                            
          RETURN
.
RAWBOPV1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOPVA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOPV1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOPVA1,KEY26;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:
                                   WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:
                                   WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
RKWBOPV1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOPVA1;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
RPWBOPV1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOPVA1;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
UPWBOPV1  MOVE      ZERO,OVRCD                                                  
          MOVE      WBOPCNTR,DWBOPCNT
          UPDATE    WEBOPVA1;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          RETURN
.
WRWBOPV1  RESET     KEY26                                                       
          MOVE      WBOPCNTR,DWBOPCNT
          WRITE     WEBOPVA1,KEY26;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:
                                   WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:
                                   WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR          
          RETURN
.
DEWBOPV1  RESET     KEY26                                                       
          DELETE    WEBOPVA1,KEY26                                              
          RETURN
.
RSWBOPV2  RESET     KEY50                                                       
          READ      WEBOPVA2,KEY50;;                                            
          RETURN
.
RAWBOPV2  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOPVA2,KEY50;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOPV2  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOPVA2,KEY50;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:
                                   WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:
                                   WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
RKWBOPV2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOPVA2;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
RPWBOPV2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOPVA2;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
UPWBOPV2  MOVE      ZERO,OVRCD                                                  
          MOVE      WBOPCNTR,DWBOPCNT
          UPDATE    WEBOPVA2;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          RETURN
.
WRWBOPV2  RESET     KEY50                                                       
          MOVE      WBOPCNTR,DWBOPCNT
          WRITE     WEBOPVA2,KEY50;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:
                                   WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:
                                   WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR          
          RETURN
.
DEWBOPV2  RESET     KEY50                                                       
          DELETE    WEBOPVA2,KEY50                                              
          RETURN
.
RSWBOPV3  RESET     KEY27                                                       
          READ      WEBOPVA3,KEY27;;                                            
          RETURN
.
RAWBOPV3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOPVA3,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOPV3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOPVA3,KEY27;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:
                                   WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:
                                   WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
RKWBOPV3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOPVA3;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
RPWBOPV3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOPVA3;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
UPWBOPV3  MOVE      ZERO,OVRCD                                                  
          MOVE      WBOPCNTR,DWBOPCNT
          UPDATE    WEBOPVA3;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          RETURN
.
WRWBOPV3  RESET     KEY27                                                       
          MOVE      WBOPCNTR,DWBOPCNT
          WRITE     WEBOPVA3,KEY27;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:
                                   WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:
                                   WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR          
          RETURN
.
DEWBOPV3  RESET     KEY27                                                       
          DELETE    WEBOPVA3,KEY27                                              
          RETURN
.
RSWBOPV4  RESET     KEY62                                                       
          READ      WEBOPVA4,KEY62;;                                            
          RETURN
.
RAWBOPV4  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOPVA4,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOPV4  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOPVA4,KEY62;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:
                                   WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:
                                   WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
RKWBOPV4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOPVA4;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
RPWBOPV4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOPVA4;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DWBOPCNT,WBOPCNTR
          RETURN
.
UPWBOPV4  MOVE      ZERO,OVRCD                                                  
          MOVE      WBOPCNTR,DWBOPCNT
          UPDATE    WEBOPVA4;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:      
                             WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:      
                             WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR                
          RETURN
.
WRWBOPV4  RESET     KEY62                                                       
          MOVE      WBOPCNTR,DWBOPCNT
          WRITE     WEBOPVA4,KEY62;WBOPURNO,WBOPDATE,WBOPTIME,DWBOPCNT,WBOPHOSP:
                                   WBOPTRID,WBOPFNAM,WBOPMEDN,WBOPMEDR,WBOPSTAT:
                                   WBOPEROR,WBOPRESP,WBOPMSID,WBOPSPAR          
          RETURN
.
DEWBOPV4  RESET     KEY62                                                       
          DELETE    WEBOPVA4,KEY62                                              
          RETURN
.
