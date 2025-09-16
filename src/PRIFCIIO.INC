.
. PRIFCIIO    
. --------
. Filename     : prifciaf.dat
.
RSPRFCI1  RESET     KEY32                                                       
          READ      PRIFCIA1,KEY32;;                                            
          RETURN
.
RAPRFCI1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PRIFCIA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRFCI1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PRIFCIA1,KEY32;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFCRTY,PRFCRTYP                                           
          RETURN
.
RKPRFCI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRIFCIA1;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:      
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFCRTY,PRFCRTYP                                           
          RETURN
.
RPPRFCI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRIFCIA1;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:      
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFCRTY,PRFCRTYP                                           
          RETURN
.
UPPRFCI1                                                                        
          MOVE      PRFCRTYP,DPRFCRTY                                           
          UPDATE    PRIFCIA1;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:      
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          RETURN
.
WRPRFCI1  RESET     KEY32                                                       
          MOVE      PRFCRTYP,DPRFCRTY                                           
          WRITE     PRIFCIA1,KEY32;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          RETURN
.
DEPRFCI1  RESET     KEY32                                                       
          DELETE    PRIFCIA1,KEY32                                              
          RETURN
.
RSPRFCI2  RESET     KEY33                                                       
          READ      PRIFCIA2,KEY33;;                                            
          RETURN
.
RAPRFCI2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PRIFCIA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRFCI2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PRIFCIA2,KEY33;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFCRTY,PRFCRTYP                                           
          RETURN
.
RKPRFCI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRIFCIA2;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:      
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFCRTY,PRFCRTYP                                           
          RETURN
.
RPPRFCI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRIFCIA2;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:      
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFCRTY,PRFCRTYP                                           
          RETURN
.
UPPRFCI2                                                                        
          MOVE      PRFCRTYP,DPRFCRTY                                           
          UPDATE    PRIFCIA2;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:      
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          RETURN
.
WRPRFCI2  RESET     KEY33                                                       
          MOVE      PRFCRTYP,DPRFCRTY                                           
          WRITE     PRIFCIA2,KEY33;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          RETURN
.
DEPRFCI2  RESET     KEY33                                                       
          DELETE    PRIFCIA2,KEY33                                              
          RETURN
.
RSPRFCI3  RESET     KEY33                                                       
          READ      PRIFCIA3,KEY33;;                                            
          RETURN
.
RAPRFCI3  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PRIFCIA3,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRFCI3  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PRIFCIA3,KEY33;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFCRTY,PRFCRTYP                                           
          RETURN
.
RKPRFCI3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRIFCIA3;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:      
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFCRTY,PRFCRTYP                                           
          RETURN
.
RPPRFCI3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRIFCIA3;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:      
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFCRTY,PRFCRTYP                                           
          RETURN
.
UPPRFCI3                                                                        
          MOVE      PRFCRTYP,DPRFCRTY                                           
          UPDATE    PRIFCIA3;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:      
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          RETURN
.
WRPRFCI3  RESET     KEY33                                                       
          MOVE      PRFCRTYP,DPRFCRTY                                           
          WRITE     PRIFCIA3,KEY33;PRFCDEBT,PRFCSCAN,PRFCUNIQ,PRFCINVN,PRFCTRAN:
                        PRFCCRNO,PRFCCRDT,PRFCIAMT,PRFCCAMT,PRFCTRDT,PRFCTRTM:  
                        PRFCDESC,PRFCMPRA,PRFCSDOC,PRFCNUMS,PRFCRDOC,PRFCRDET:  
                        PRFCCLMC,PRFCPIND,PRFCMSGC,DPRFCRTY,PRFCIFLG,PRFCINUM:  
                        PRFCSUBI,PRFCMSCG,PRFCBNUM,PRFCUDF1,PRFCUDF2,PRFCUDF3:  
                        PRFCUDF4,PRFCADMC,PRFCRDAT,PRFCITAM,PRFCOPCD,PRFCMSFL:  
                        PRFCTRFR,PRFCMAFN,PRFCGSTA,PRFCGSTC,PRFCGAMT,PRFCCGST:  
                        PRFCRPRD,PRFCUPDT,PRFCUPTM,PRFCWUID,PRFCSPAR            
          RETURN
.
DEPRFCI3  RESET     KEY33                                                       
          DELETE    PRIFCIA3,KEY33                                              
          RETURN
.
