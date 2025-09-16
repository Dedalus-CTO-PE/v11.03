.
. MRTEXTIO    
. --------
. Filename     : mrtextaf.dat
.
RSMREX1   RESET     KEY4                                                        
          READ      MRTEXTA1,KEY4;;                                             
          RETURN
.
RAMREX1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      MRTEXTA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMREX1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      MRTEXTA1,KEY4;MREXEID,MREXDESC,MREXDDFR,MREXDDTO,MREXADFR:  
                        MREXADTO,MREXUNIT,MREXWARD,MREXPDRG,MREXPRCG,MREXWLPR:  
                        MREXCONS,MREXINCD,MREXAUTC,MREXNUMR,MREXINPR,MREXANL1:  
                        MREXANL2,MREXANL3,MREXANL4,MREXANM1,MREXANM2,MREXANM3:  
                        MREXCUID,MREXCDAT,MREXCTIM,MREXMUID,MREXMDAT,MREXMTIM:  
                        MREXDIND,MREXSDSC,MREXSUBR,MREXPCOD,MREXPSEX,MREXCNTR:  
                        MREXATYP,MREXPTYP,MREXVHOS,MREXSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMREX1                                                                         
          MOVE      ZERO,OVRCD
          READKS    MRTEXTA1;MREXEID,MREXDESC,MREXDDFR,MREXDDTO,MREXADFR:       
                        MREXADTO,MREXUNIT,MREXWARD,MREXPDRG,MREXPRCG,MREXWLPR:  
                        MREXCONS,MREXINCD,MREXAUTC,MREXNUMR,MREXINPR,MREXANL1:  
                        MREXANL2,MREXANL3,MREXANL4,MREXANM1,MREXANM2,MREXANM3:  
                        MREXCUID,MREXCDAT,MREXCTIM,MREXMUID,MREXMDAT,MREXMTIM:  
                        MREXDIND,MREXSDSC,MREXSUBR,MREXPCOD,MREXPSEX,MREXCNTR:  
                        MREXATYP,MREXPTYP,MREXVHOS,MREXSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMREX1                                                                         
          MOVE      ZERO,OVRCD
          READKP    MRTEXTA1;MREXEID,MREXDESC,MREXDDFR,MREXDDTO,MREXADFR:       
                        MREXADTO,MREXUNIT,MREXWARD,MREXPDRG,MREXPRCG,MREXWLPR:  
                        MREXCONS,MREXINCD,MREXAUTC,MREXNUMR,MREXINPR,MREXANL1:  
                        MREXANL2,MREXANL3,MREXANL4,MREXANM1,MREXANM2,MREXANM3:  
                        MREXCUID,MREXCDAT,MREXCTIM,MREXMUID,MREXMDAT,MREXMTIM:  
                        MREXDIND,MREXSDSC,MREXSUBR,MREXPCOD,MREXPSEX,MREXCNTR:  
                        MREXATYP,MREXPTYP,MREXVHOS,MREXSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMREX1                                                                         
          UPDATE    MRTEXTA1;MREXEID,MREXDESC,MREXDDFR,MREXDDTO,MREXADFR:       
                        MREXADTO,MREXUNIT,MREXWARD,MREXPDRG,MREXPRCG,MREXWLPR:  
                        MREXCONS,MREXINCD,MREXAUTC,MREXNUMR,MREXINPR,MREXANL1:  
                        MREXANL2,MREXANL3,MREXANL4,MREXANM1,MREXANM2,MREXANM3:  
                        MREXCUID,MREXCDAT,MREXCTIM,MREXMUID,MREXMDAT,MREXMTIM:  
                        MREXDIND,MREXSDSC,MREXSUBR,MREXPCOD,MREXPSEX,MREXCNTR:  
                        MREXATYP,MREXPTYP,MREXVHOS,MREXSPAR                     
          RETURN
.
WRMREX1   RESET     KEY4                                                        
          WRITE     MRTEXTA1,KEY4;MREXEID,MREXDESC,MREXDDFR,MREXDDTO,MREXADFR:  
                        MREXADTO,MREXUNIT,MREXWARD,MREXPDRG,MREXPRCG,MREXWLPR:  
                        MREXCONS,MREXINCD,MREXAUTC,MREXNUMR,MREXINPR,MREXANL1:  
                        MREXANL2,MREXANL3,MREXANL4,MREXANM1,MREXANM2,MREXANM3:  
                        MREXCUID,MREXCDAT,MREXCTIM,MREXMUID,MREXMDAT,MREXMTIM:  
                        MREXDIND,MREXSDSC,MREXSUBR,MREXPCOD,MREXPSEX,MREXCNTR:  
                        MREXATYP,MREXPTYP,MREXVHOS,MREXSPAR                     
          RETURN
.
DEMREX1   RESET     KEY4                                                        
          DELETE    MRTEXTA1,KEY4                                               
          RETURN
.
RSMREX2   RESET     KEY39                                                       
          READ      MRTEXTA2,KEY39;;                                            
          RETURN
.
RAMREX2   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      MRTEXTA2,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMREX2   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      MRTEXTA2,KEY39;MREXEID,MREXDESC,MREXDDFR,MREXDDTO,MREXADFR: 
                        MREXADTO,MREXUNIT,MREXWARD,MREXPDRG,MREXPRCG,MREXWLPR:  
                        MREXCONS,MREXINCD,MREXAUTC,MREXNUMR,MREXINPR,MREXANL1:  
                        MREXANL2,MREXANL3,MREXANL4,MREXANM1,MREXANM2,MREXANM3:  
                        MREXCUID,MREXCDAT,MREXCTIM,MREXMUID,MREXMDAT,MREXMTIM:  
                        MREXDIND,MREXSDSC,MREXSUBR,MREXPCOD,MREXPSEX,MREXCNTR:  
                        MREXATYP,MREXPTYP,MREXVHOS,MREXSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMREX2                                                                         
          MOVE      ZERO,OVRCD
          READKS    MRTEXTA2;MREXEID,MREXDESC,MREXDDFR,MREXDDTO,MREXADFR:       
                        MREXADTO,MREXUNIT,MREXWARD,MREXPDRG,MREXPRCG,MREXWLPR:  
                        MREXCONS,MREXINCD,MREXAUTC,MREXNUMR,MREXINPR,MREXANL1:  
                        MREXANL2,MREXANL3,MREXANL4,MREXANM1,MREXANM2,MREXANM3:  
                        MREXCUID,MREXCDAT,MREXCTIM,MREXMUID,MREXMDAT,MREXMTIM:  
                        MREXDIND,MREXSDSC,MREXSUBR,MREXPCOD,MREXPSEX,MREXCNTR:  
                        MREXATYP,MREXPTYP,MREXVHOS,MREXSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMREX2                                                                         
          MOVE      ZERO,OVRCD
          READKP    MRTEXTA2;MREXEID,MREXDESC,MREXDDFR,MREXDDTO,MREXADFR:       
                        MREXADTO,MREXUNIT,MREXWARD,MREXPDRG,MREXPRCG,MREXWLPR:  
                        MREXCONS,MREXINCD,MREXAUTC,MREXNUMR,MREXINPR,MREXANL1:  
                        MREXANL2,MREXANL3,MREXANL4,MREXANM1,MREXANM2,MREXANM3:  
                        MREXCUID,MREXCDAT,MREXCTIM,MREXMUID,MREXMDAT,MREXMTIM:  
                        MREXDIND,MREXSDSC,MREXSUBR,MREXPCOD,MREXPSEX,MREXCNTR:  
                        MREXATYP,MREXPTYP,MREXVHOS,MREXSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMREX2                                                                         
          UPDATE    MRTEXTA2;MREXEID,MREXDESC,MREXDDFR,MREXDDTO,MREXADFR:       
                        MREXADTO,MREXUNIT,MREXWARD,MREXPDRG,MREXPRCG,MREXWLPR:  
                        MREXCONS,MREXINCD,MREXAUTC,MREXNUMR,MREXINPR,MREXANL1:  
                        MREXANL2,MREXANL3,MREXANL4,MREXANM1,MREXANM2,MREXANM3:  
                        MREXCUID,MREXCDAT,MREXCTIM,MREXMUID,MREXMDAT,MREXMTIM:  
                        MREXDIND,MREXSDSC,MREXSUBR,MREXPCOD,MREXPSEX,MREXCNTR:  
                        MREXATYP,MREXPTYP,MREXVHOS,MREXSPAR                     
          RETURN
.
WRMREX2   RESET     KEY39                                                       
          WRITE     MRTEXTA2,KEY39;MREXEID,MREXDESC,MREXDDFR,MREXDDTO,MREXADFR: 
                        MREXADTO,MREXUNIT,MREXWARD,MREXPDRG,MREXPRCG,MREXWLPR:  
                        MREXCONS,MREXINCD,MREXAUTC,MREXNUMR,MREXINPR,MREXANL1:  
                        MREXANL2,MREXANL3,MREXANL4,MREXANM1,MREXANM2,MREXANM3:  
                        MREXCUID,MREXCDAT,MREXCTIM,MREXMUID,MREXMDAT,MREXMTIM:  
                        MREXDIND,MREXSDSC,MREXSUBR,MREXPCOD,MREXPSEX,MREXCNTR:  
                        MREXATYP,MREXPTYP,MREXVHOS,MREXSPAR                     
          RETURN
.
DEMREX2   RESET     KEY39                                                       
          DELETE    MRTEXTA2,KEY39                                              
          RETURN
.
