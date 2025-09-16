.
. OBSCNAIO    
. --------
. Filename     : obscnaaf.dat
.
RSOBCA1   RESET     KEY12                                                       
          READ      OBSCNAA1,KEY12;;                                            
          RETURN
.
RAOBCA1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      OBSCNAA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBCA1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      OBSCNAA1,KEY12;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:     
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBCA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSCNAA1;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:           
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBCA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSCNAA1;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:           
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBCA1                                                                         
          UPDATE    OBSCNAA1;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:           
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBCA1   RESET     KEY12                                                       
          WRITE     OBSCNAA1,KEY12;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:     
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          RETURN
.
DEOBCA1   RESET     KEY12                                                       
          DELETE    OBSCNAA1,KEY12                                              
          RETURN
.
RLOBCA1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     OBSCNAA1,KEY12;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:     
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBCA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSCNAA1;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:           
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBCA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSCNAA1;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:           
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBCA1   RESET     KEY12                                                       
          UNLOCK    OBSCNAA1                                                    
          RETURN
.
RSOBCA2   RESET     KEY28                                                       
          READ      OBSCNAA2,KEY28;;                                            
          RETURN
.
RAOBCA2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OBSCNAA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBCA2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OBSCNAA2,KEY28;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:     
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBCA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSCNAA2;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:           
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBCA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSCNAA2;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:           
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBCA2                                                                         
          UPDATE    OBSCNAA2;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:           
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBCA2   RESET     KEY28                                                       
          WRITE     OBSCNAA2,KEY28;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:     
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA                 
          RETURN
.
DEOBCA2   RESET     KEY28                                                       
          DELETE    OBSCNAA2,KEY28                                              
          RETURN
.
RLOBCA2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     OBSCNAA2,KEY28;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:     
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBCA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSCNAA2;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:           
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBCA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSCNAA2;OBCAVIS,OBCACID,OBCADTE,OBCATME,OBCAUID:           
                        OBCAOCG,OBCATYP,OBCAMDL,OBCAHLV,OBCASLV,OBCAMIN:        
                        OBCAPT1,OBCAP1D,OBCAPT2,OBCAP2D,OBCAPT3,OBCAP3D:        
                        OBCAPT4,OBCAP4D,OBCAUC1,OBCAUC2,OBCAUC3,OBCAUC4:        
                        OBCAUC5,OBCAUC6,OBCAUC7,OBCAUC8,OBCAUD1,OBCAUD2:        
                        OBCAUD3,OBCAUD4,OBCADD1,OBCADD2,OBCADLU,OBCATLU:        
                        OBCALID,OBCAAT1,OBCAAT2,OBCATX1,OBCASPA
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBCA2   RESET     KEY28                                                       
          UNLOCK    OBSCNAA2                                                    
          RETURN
.
