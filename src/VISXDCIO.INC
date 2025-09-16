.
. VISXDCIO    
. --------
. Filename     : visxdcaf.dat
.
RSVSXDC1  RESET     KEY11                                                       
          READ      VISXDCA1,KEY11;;                                            
          RETURN
.
RAVSXDC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      VISXDCA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSXDC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      VISXDCA1,KEY11;VSXDVISN,VSXDTYDA,VSXDVAL1,VSXDVAL2,VSXDVAL3:
                                   VSXDVAL4,VSXDVAL5,VSXDVAL6,VSXDVAL7,VSXDVAL8:
                                   VSXDVAL9,VSXDVA10,VSXDCOD1,VSXDCOD2,VSXDCOD3:
                                   VSXDCOD4,VSXDCOD5,VSXDCOD6,VSXDCOD7,VSXDCOD8:
                                   VSXDCOD9,VSXDCO10,VSXDTXT1,VSXDTXT2,VSXDTXT3:
                                   VSXDTXT4,VSXDTXT5,VSXDTXT6,VSXDTXT7,VSXDTXT8:
                                   VSXDTXT9,VSXDTX10,VSXDYN01,VSXDYN02,VSXDYN03:
                                   VSXDYN04,VSXDYN05,VSXDYN06,VSXDYN07,VSXDYN08:
                                   VSXDYN09,VSXDYN10,VSXDDAT1,VSXDTIM1,VSXDDAT2:
                                   VSXDTIM2,VSXDDAT3,VSXDTIM3,VSXDDAT4,VSXDTIM4:
                                   VSXDDAT5,VSXDTIM5,VSXDDAT6,VSXDTIM6,VSXDDAT7:
                                   VSXDTIM7,VSXDDAT8,VSXDTIM8,VSXDDAT9,VSXDTIM9:
                                   VSXDDA10,VSXDTI10,VSXDDELT,VSXDCUSR,VSXDCDAT:
                                   VSXDCTIM,VSXDUUSR,VSXDUDAT,VSXDUTIM,VSXDUCID:
                                   VSXDUCDT,VSXDUCTM,VSXDSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSXDC1  MOVE      ZERO,OVRCD                                                  
          READKS    VISXDCA1;VSXDVISN,VSXDTYDA,VSXDVAL1,VSXDVAL2,VSXDVAL3:      
                             VSXDVAL4,VSXDVAL5,VSXDVAL6,VSXDVAL7,VSXDVAL8:      
                             VSXDVAL9,VSXDVA10,VSXDCOD1,VSXDCOD2,VSXDCOD3:      
                             VSXDCOD4,VSXDCOD5,VSXDCOD6,VSXDCOD7,VSXDCOD8:      
                             VSXDCOD9,VSXDCO10,VSXDTXT1,VSXDTXT2,VSXDTXT3:      
                             VSXDTXT4,VSXDTXT5,VSXDTXT6,VSXDTXT7,VSXDTXT8:      
                             VSXDTXT9,VSXDTX10,VSXDYN01,VSXDYN02,VSXDYN03:      
                             VSXDYN04,VSXDYN05,VSXDYN06,VSXDYN07,VSXDYN08:      
                             VSXDYN09,VSXDYN10,VSXDDAT1,VSXDTIM1,VSXDDAT2:      
                             VSXDTIM2,VSXDDAT3,VSXDTIM3,VSXDDAT4,VSXDTIM4:      
                             VSXDDAT5,VSXDTIM5,VSXDDAT6,VSXDTIM6,VSXDDAT7:      
                             VSXDTIM7,VSXDDAT8,VSXDTIM8,VSXDDAT9,VSXDTIM9:      
                             VSXDDA10,VSXDTI10,VSXDDELT,VSXDCUSR,VSXDCDAT:      
                             VSXDCTIM,VSXDUUSR,VSXDUDAT,VSXDUTIM,VSXDUCID:      
                             VSXDUCDT,VSXDUCTM,VSXDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSXDC1  MOVE      ZERO,OVRCD                                                  
          READKP    VISXDCA1;VSXDVISN,VSXDTYDA,VSXDVAL1,VSXDVAL2,VSXDVAL3:      
                             VSXDVAL4,VSXDVAL5,VSXDVAL6,VSXDVAL7,VSXDVAL8:      
                             VSXDVAL9,VSXDVA10,VSXDCOD1,VSXDCOD2,VSXDCOD3:      
                             VSXDCOD4,VSXDCOD5,VSXDCOD6,VSXDCOD7,VSXDCOD8:      
                             VSXDCOD9,VSXDCO10,VSXDTXT1,VSXDTXT2,VSXDTXT3:      
                             VSXDTXT4,VSXDTXT5,VSXDTXT6,VSXDTXT7,VSXDTXT8:      
                             VSXDTXT9,VSXDTX10,VSXDYN01,VSXDYN02,VSXDYN03:      
                             VSXDYN04,VSXDYN05,VSXDYN06,VSXDYN07,VSXDYN08:      
                             VSXDYN09,VSXDYN10,VSXDDAT1,VSXDTIM1,VSXDDAT2:      
                             VSXDTIM2,VSXDDAT3,VSXDTIM3,VSXDDAT4,VSXDTIM4:      
                             VSXDDAT5,VSXDTIM5,VSXDDAT6,VSXDTIM6,VSXDDAT7:      
                             VSXDTIM7,VSXDDAT8,VSXDTIM8,VSXDDAT9,VSXDTIM9:      
                             VSXDDA10,VSXDTI10,VSXDDELT,VSXDCUSR,VSXDCDAT:      
                             VSXDCTIM,VSXDUUSR,VSXDUDAT,VSXDUTIM,VSXDUCID:      
                             VSXDUCDT,VSXDUCTM,VSXDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSXDC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    VISXDCA1;VSXDVISN,VSXDTYDA,VSXDVAL1,VSXDVAL2,VSXDVAL3:      
                             VSXDVAL4,VSXDVAL5,VSXDVAL6,VSXDVAL7,VSXDVAL8:      
                             VSXDVAL9,VSXDVA10,VSXDCOD1,VSXDCOD2,VSXDCOD3:      
                             VSXDCOD4,VSXDCOD5,VSXDCOD6,VSXDCOD7,VSXDCOD8:      
                             VSXDCOD9,VSXDCO10,VSXDTXT1,VSXDTXT2,VSXDTXT3:      
                             VSXDTXT4,VSXDTXT5,VSXDTXT6,VSXDTXT7,VSXDTXT8:      
                             VSXDTXT9,VSXDTX10,VSXDYN01,VSXDYN02,VSXDYN03:      
                             VSXDYN04,VSXDYN05,VSXDYN06,VSXDYN07,VSXDYN08:      
                             VSXDYN09,VSXDYN10,VSXDDAT1,VSXDTIM1,VSXDDAT2:      
                             VSXDTIM2,VSXDDAT3,VSXDTIM3,VSXDDAT4,VSXDTIM4:      
                             VSXDDAT5,VSXDTIM5,VSXDDAT6,VSXDTIM6,VSXDDAT7:      
                             VSXDTIM7,VSXDDAT8,VSXDTIM8,VSXDDAT9,VSXDTIM9:      
                             VSXDDA10,VSXDTI10,VSXDDELT,VSXDCUSR,VSXDCDAT:      
                             VSXDCTIM,VSXDUUSR,VSXDUDAT,VSXDUTIM,VSXDUCID:      
                             VSXDUCDT,VSXDUCTM,VSXDSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRVSXDC1  RESET     KEY11                                                       
          WRITE     VISXDCA1,KEY11;VSXDVISN,VSXDTYDA,VSXDVAL1,VSXDVAL2,VSXDVAL3:
                                   VSXDVAL4,VSXDVAL5,VSXDVAL6,VSXDVAL7,VSXDVAL8:
                                   VSXDVAL9,VSXDVA10,VSXDCOD1,VSXDCOD2,VSXDCOD3:
                                   VSXDCOD4,VSXDCOD5,VSXDCOD6,VSXDCOD7,VSXDCOD8:
                                   VSXDCOD9,VSXDCO10,VSXDTXT1,VSXDTXT2,VSXDTXT3:
                                   VSXDTXT4,VSXDTXT5,VSXDTXT6,VSXDTXT7,VSXDTXT8:
                                   VSXDTXT9,VSXDTX10,VSXDYN01,VSXDYN02,VSXDYN03:
                                   VSXDYN04,VSXDYN05,VSXDYN06,VSXDYN07,VSXDYN08:
                                   VSXDYN09,VSXDYN10,VSXDDAT1,VSXDTIM1,VSXDDAT2:
                                   VSXDTIM2,VSXDDAT3,VSXDTIM3,VSXDDAT4,VSXDTIM4:
                                   VSXDDAT5,VSXDTIM5,VSXDDAT6,VSXDTIM6,VSXDDAT7:
                                   VSXDTIM7,VSXDDAT8,VSXDTIM8,VSXDDAT9,VSXDTIM9:
                                   VSXDDA10,VSXDTI10,VSXDDELT,VSXDCUSR,VSXDCDAT:
                                   VSXDCTIM,VSXDUUSR,VSXDUDAT,VSXDUTIM,VSXDUCID:
                                   VSXDUCDT,VSXDUCTM,VSXDSPAR                   
          RETURN
.
DEVSXDC1  RESET     KEY11                                                       
          DELETE    VISXDCA1,KEY11                                              
          RETURN
.
RLVSXDC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     VISXDCA1,KEY11;VSXDVISN,VSXDTYDA,VSXDVAL1,VSXDVAL2,VSXDVAL3:
                                   VSXDVAL4,VSXDVAL5,VSXDVAL6,VSXDVAL7,VSXDVAL8:
                                   VSXDVAL9,VSXDVA10,VSXDCOD1,VSXDCOD2,VSXDCOD3:
                                   VSXDCOD4,VSXDCOD5,VSXDCOD6,VSXDCOD7,VSXDCOD8:
                                   VSXDCOD9,VSXDCO10,VSXDTXT1,VSXDTXT2,VSXDTXT3:
                                   VSXDTXT4,VSXDTXT5,VSXDTXT6,VSXDTXT7,VSXDTXT8:
                                   VSXDTXT9,VSXDTX10,VSXDYN01,VSXDYN02,VSXDYN03:
                                   VSXDYN04,VSXDYN05,VSXDYN06,VSXDYN07,VSXDYN08:
                                   VSXDYN09,VSXDYN10,VSXDDAT1,VSXDTIM1,VSXDDAT2:
                                   VSXDTIM2,VSXDDAT3,VSXDTIM3,VSXDDAT4,VSXDTIM4:
                                   VSXDDAT5,VSXDTIM5,VSXDDAT6,VSXDTIM6,VSXDDAT7:
                                   VSXDTIM7,VSXDDAT8,VSXDTIM8,VSXDDAT9,VSXDTIM9:
                                   VSXDDA10,VSXDTI10,VSXDDELT,VSXDCUSR,VSXDCDAT:
                                   VSXDCTIM,VSXDUUSR,VSXDUDAT,VSXDUTIM,VSXDUCID:
                                   VSXDUCDT,VSXDUCTM,VSXDSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLVSXDC1  MOVE      ZERO,OVRCD                                                  
          READLKS   VISXDCA1;VSXDVISN,VSXDTYDA,VSXDVAL1,VSXDVAL2,VSXDVAL3:      
                             VSXDVAL4,VSXDVAL5,VSXDVAL6,VSXDVAL7,VSXDVAL8:      
                             VSXDVAL9,VSXDVA10,VSXDCOD1,VSXDCOD2,VSXDCOD3:      
                             VSXDCOD4,VSXDCOD5,VSXDCOD6,VSXDCOD7,VSXDCOD8:      
                             VSXDCOD9,VSXDCO10,VSXDTXT1,VSXDTXT2,VSXDTXT3:      
                             VSXDTXT4,VSXDTXT5,VSXDTXT6,VSXDTXT7,VSXDTXT8:      
                             VSXDTXT9,VSXDTX10,VSXDYN01,VSXDYN02,VSXDYN03:      
                             VSXDYN04,VSXDYN05,VSXDYN06,VSXDYN07,VSXDYN08:      
                             VSXDYN09,VSXDYN10,VSXDDAT1,VSXDTIM1,VSXDDAT2:      
                             VSXDTIM2,VSXDDAT3,VSXDTIM3,VSXDDAT4,VSXDTIM4:      
                             VSXDDAT5,VSXDTIM5,VSXDDAT6,VSXDTIM6,VSXDDAT7:      
                             VSXDTIM7,VSXDDAT8,VSXDTIM8,VSXDDAT9,VSXDTIM9:      
                             VSXDDA10,VSXDTI10,VSXDDELT,VSXDCUSR,VSXDCDAT:      
                             VSXDCTIM,VSXDUUSR,VSXDUDAT,VSXDUTIM,VSXDUCID:      
                             VSXDUCDT,VSXDUCTM,VSXDSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLVSXDC1  MOVE      ZERO,OVRCD                                                  
          READLKP   VISXDCA1;VSXDVISN,VSXDTYDA,VSXDVAL1,VSXDVAL2,VSXDVAL3:      
                             VSXDVAL4,VSXDVAL5,VSXDVAL6,VSXDVAL7,VSXDVAL8:      
                             VSXDVAL9,VSXDVA10,VSXDCOD1,VSXDCOD2,VSXDCOD3:      
                             VSXDCOD4,VSXDCOD5,VSXDCOD6,VSXDCOD7,VSXDCOD8:      
                             VSXDCOD9,VSXDCO10,VSXDTXT1,VSXDTXT2,VSXDTXT3:      
                             VSXDTXT4,VSXDTXT5,VSXDTXT6,VSXDTXT7,VSXDTXT8:      
                             VSXDTXT9,VSXDTX10,VSXDYN01,VSXDYN02,VSXDYN03:      
                             VSXDYN04,VSXDYN05,VSXDYN06,VSXDYN07,VSXDYN08:      
                             VSXDYN09,VSXDYN10,VSXDDAT1,VSXDTIM1,VSXDDAT2:      
                             VSXDTIM2,VSXDDAT3,VSXDTIM3,VSXDDAT4,VSXDTIM4:      
                             VSXDDAT5,VSXDTIM5,VSXDDAT6,VSXDTIM6,VSXDDAT7:      
                             VSXDTIM7,VSXDDAT8,VSXDTIM8,VSXDDAT9,VSXDTIM9:      
                             VSXDDA10,VSXDTI10,VSXDDELT,VSXDCUSR,VSXDCDAT:      
                             VSXDCTIM,VSXDUUSR,VSXDUDAT,VSXDUTIM,VSXDUCID:      
                             VSXDUCDT,VSXDUCTM,VSXDSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUVSXDC1  RESET     KEY11                                                       
          UNLOCK    VISXDCA1                                                    
          RETURN
.
