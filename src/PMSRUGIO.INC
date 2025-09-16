.
. PMSRUGIO    
. --------
. Filename     : pmsrugaf.dat
.
RSPMRUG1  RESET     KEY24                                                       
          READ      PMSRUGA1,KEY24;;                                            
          RETURN
.
RAPMRUG1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRUGA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRUG1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRUGA1,KEY24;PMRUVISN,PMRUADAT,PMRUATIM,PMRUATYP,PMRUASSO:
                        PMRUPSDT,PMRUPEDT,PMRUPTYP,PMRUMTYP,PMRUBMOB,PMRUTOIL:  
                        PMRUTRAN,PMRUEATG,PMRUCUID,PMRUCDAT,PMRUCTIM,PMRUUUID:  
                        PMRUUDTE,PMRUUTIM,PMRUDELF,PMRUDUID,PMRUDDAT,PMRUDTIM:  
                        PMRUDRES,PMRUCPLT,PMRUFUID,PMRUFDAT,PMRUFTIM,PMRUSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRUG1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSRUGA1;PMRUVISN,PMRUADAT,PMRUATIM,PMRUATYP,PMRUASSO:      
                        PMRUPSDT,PMRUPEDT,PMRUPTYP,PMRUMTYP,PMRUBMOB,PMRUTOIL:  
                        PMRUTRAN,PMRUEATG,PMRUCUID,PMRUCDAT,PMRUCTIM,PMRUUUID:  
                        PMRUUDTE,PMRUUTIM,PMRUDELF,PMRUDUID,PMRUDDAT,PMRUDTIM:  
                        PMRUDRES,PMRUCPLT,PMRUFUID,PMRUFDAT,PMRUFTIM,PMRUSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRUG1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSRUGA1;PMRUVISN,PMRUADAT,PMRUATIM,PMRUATYP,PMRUASSO:      
                        PMRUPSDT,PMRUPEDT,PMRUPTYP,PMRUMTYP,PMRUBMOB,PMRUTOIL:  
                        PMRUTRAN,PMRUEATG,PMRUCUID,PMRUCDAT,PMRUCTIM,PMRUUUID:  
                        PMRUUDTE,PMRUUTIM,PMRUDELF,PMRUDUID,PMRUDDAT,PMRUDTIM:  
                        PMRUDRES,PMRUCPLT,PMRUFUID,PMRUFDAT,PMRUFTIM,PMRUSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRUG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSRUGA1;PMRUVISN,PMRUADAT,PMRUATIM,PMRUATYP,PMRUASSO:      
                        PMRUPSDT,PMRUPEDT,PMRUPTYP,PMRUMTYP,PMRUBMOB,PMRUTOIL:  
                        PMRUTRAN,PMRUEATG,PMRUCUID,PMRUCDAT,PMRUCTIM,PMRUUUID:  
                        PMRUUDTE,PMRUUTIM,PMRUDELF,PMRUDUID,PMRUDDAT,PMRUDTIM:  
                        PMRUDRES,PMRUCPLT,PMRUFUID,PMRUFDAT,PMRUFTIM,PMRUSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMRUG1  RESET     KEY24                                                       
          WRITE     PMSRUGA1,KEY24;PMRUVISN,PMRUADAT,PMRUATIM,PMRUATYP,PMRUASSO:
                        PMRUPSDT,PMRUPEDT,PMRUPTYP,PMRUMTYP,PMRUBMOB,PMRUTOIL:  
                        PMRUTRAN,PMRUEATG,PMRUCUID,PMRUCDAT,PMRUCTIM,PMRUUUID:  
                        PMRUUDTE,PMRUUTIM,PMRUDELF,PMRUDUID,PMRUDDAT,PMRUDTIM:  
                        PMRUDRES,PMRUCPLT,PMRUFUID,PMRUFDAT,PMRUFTIM,PMRUSPAR   
          RETURN
.
DEPMRUG1  RESET     KEY24                                                       
          DELETE    PMSRUGA1,KEY24                                              
          RETURN
.
RLPMRUG1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PMSRUGA1,KEY24;PMRUVISN,PMRUADAT,PMRUATIM,PMRUATYP,PMRUASSO:
                        PMRUPSDT,PMRUPEDT,PMRUPTYP,PMRUMTYP,PMRUBMOB,PMRUTOIL:  
                        PMRUTRAN,PMRUEATG,PMRUCUID,PMRUCDAT,PMRUCTIM,PMRUUUID:  
                        PMRUUDTE,PMRUUTIM,PMRUDELF,PMRUDUID,PMRUDDAT,PMRUDTIM:  
                        PMRUDRES,PMRUCPLT,PMRUFUID,PMRUFDAT,PMRUFTIM,PMRUSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMRUG1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSRUGA1;PMRUVISN,PMRUADAT,PMRUATIM,PMRUATYP,PMRUASSO:      
                        PMRUPSDT,PMRUPEDT,PMRUPTYP,PMRUMTYP,PMRUBMOB,PMRUTOIL:  
                        PMRUTRAN,PMRUEATG,PMRUCUID,PMRUCDAT,PMRUCTIM,PMRUUUID:  
                        PMRUUDTE,PMRUUTIM,PMRUDELF,PMRUDUID,PMRUDDAT,PMRUDTIM:  
                        PMRUDRES,PMRUCPLT,PMRUFUID,PMRUFDAT,PMRUFTIM,PMRUSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMRUG1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSRUGA1;PMRUVISN,PMRUADAT,PMRUATIM,PMRUATYP,PMRUASSO:      
                        PMRUPSDT,PMRUPEDT,PMRUPTYP,PMRUMTYP,PMRUBMOB,PMRUTOIL:  
                        PMRUTRAN,PMRUEATG,PMRUCUID,PMRUCDAT,PMRUCTIM,PMRUUUID:  
                        PMRUUDTE,PMRUUTIM,PMRUDELF,PMRUDUID,PMRUDDAT,PMRUDTIM:  
                        PMRUDRES,PMRUCPLT,PMRUFUID,PMRUFDAT,PMRUFTIM,PMRUSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMRUG1  RESET     KEY24                                                       
          UNLOCK    PMSRUGA1                                                    
          RETURN
.
