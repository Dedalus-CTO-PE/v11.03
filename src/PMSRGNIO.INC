.
. PMSRGNIO    
. --------
. Filename     : pmsrgnaf.dat
.
RSPMRGN1  RESET     KEY21                                                       
          READ      PMSRGNA1,KEY21;;                                            
          RETURN
.
RAPMRGN1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRGNA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRGN1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRGNA1,KEY21;PMRGURNO,PMRGUNIQ,PMRGCNTR,PMRGGRAV,PMRGTOTL:
                        PMRGTOPL,PMRGTOPB,PMRGCURL,PMRGTOPS,PMRGTPND,PMRGTPAS:  
                        PMRGTPAI,PMRGTPEO,PMRGTPUO,PMRGDATE,PMRGOUTL,PMRGLASM:  
                        PMRGLASC,PMRGTOTS,PMRGPLVB,PMRGISBR,PMRGDATM,PMRGESTD:  
                        PMRGEDDB,PMRGHGHT,PMRGWGHT,PMRGESGA,PMRGEGAS,PMRGNU14:  
                        PMRGNU26,PMRGNU27,PMRGML20,PMRGMG20,PMRGACRC,PMRGDACP:  
                        PMRGANCP,PMRGASBR,PMRGASBF,PMRGCIBS,PMRGCIBR,PMRGUDF1:  
                        PMRGUDF2,PMRGUDF3,PMRGUDF4,PMRGUDF5,PMRGUDF6,PMRGUDF7:  
                        PMRGUDF8,PMRGUDF9,PMRGUDF0,PMRGWEBC,PMRGDATC,PMRGTIMC:  
                        PMRGREAS,PMRGCOMP,PMRGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRGN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSRGNA1;PMRGURNO,PMRGUNIQ,PMRGCNTR,PMRGGRAV,PMRGTOTL:      
                        PMRGTOPL,PMRGTOPB,PMRGCURL,PMRGTOPS,PMRGTPND,PMRGTPAS:  
                        PMRGTPAI,PMRGTPEO,PMRGTPUO,PMRGDATE,PMRGOUTL,PMRGLASM:  
                        PMRGLASC,PMRGTOTS,PMRGPLVB,PMRGISBR,PMRGDATM,PMRGESTD:  
                        PMRGEDDB,PMRGHGHT,PMRGWGHT,PMRGESGA,PMRGEGAS,PMRGNU14:  
                        PMRGNU26,PMRGNU27,PMRGML20,PMRGMG20,PMRGACRC,PMRGDACP:  
                        PMRGANCP,PMRGASBR,PMRGASBF,PMRGCIBS,PMRGCIBR,PMRGUDF1:  
                        PMRGUDF2,PMRGUDF3,PMRGUDF4,PMRGUDF5,PMRGUDF6,PMRGUDF7:  
                        PMRGUDF8,PMRGUDF9,PMRGUDF0,PMRGWEBC,PMRGDATC,PMRGTIMC:  
                        PMRGREAS,PMRGCOMP,PMRGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRGN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSRGNA1;PMRGURNO,PMRGUNIQ,PMRGCNTR,PMRGGRAV,PMRGTOTL:      
                        PMRGTOPL,PMRGTOPB,PMRGCURL,PMRGTOPS,PMRGTPND,PMRGTPAS:  
                        PMRGTPAI,PMRGTPEO,PMRGTPUO,PMRGDATE,PMRGOUTL,PMRGLASM:  
                        PMRGLASC,PMRGTOTS,PMRGPLVB,PMRGISBR,PMRGDATM,PMRGESTD:  
                        PMRGEDDB,PMRGHGHT,PMRGWGHT,PMRGESGA,PMRGEGAS,PMRGNU14:  
                        PMRGNU26,PMRGNU27,PMRGML20,PMRGMG20,PMRGACRC,PMRGDACP:  
                        PMRGANCP,PMRGASBR,PMRGASBF,PMRGCIBS,PMRGCIBR,PMRGUDF1:  
                        PMRGUDF2,PMRGUDF3,PMRGUDF4,PMRGUDF5,PMRGUDF6,PMRGUDF7:  
                        PMRGUDF8,PMRGUDF9,PMRGUDF0,PMRGWEBC,PMRGDATC,PMRGTIMC:  
                        PMRGREAS,PMRGCOMP,PMRGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRGN1                                                                        
          UPDATE    PMSRGNA1;PMRGURNO,PMRGUNIQ,PMRGCNTR,PMRGGRAV,PMRGTOTL:      
                        PMRGTOPL,PMRGTOPB,PMRGCURL,PMRGTOPS,PMRGTPND,PMRGTPAS:  
                        PMRGTPAI,PMRGTPEO,PMRGTPUO,PMRGDATE,PMRGOUTL,PMRGLASM:  
                        PMRGLASC,PMRGTOTS,PMRGPLVB,PMRGISBR,PMRGDATM,PMRGESTD:  
                        PMRGEDDB,PMRGHGHT,PMRGWGHT,PMRGESGA,PMRGEGAS,PMRGNU14:  
                        PMRGNU26,PMRGNU27,PMRGML20,PMRGMG20,PMRGACRC,PMRGDACP:  
                        PMRGANCP,PMRGASBR,PMRGASBF,PMRGCIBS,PMRGCIBR,PMRGUDF1:  
                        PMRGUDF2,PMRGUDF3,PMRGUDF4,PMRGUDF5,PMRGUDF6,PMRGUDF7:  
                        PMRGUDF8,PMRGUDF9,PMRGUDF0,PMRGWEBC,PMRGDATC,PMRGTIMC:  
                        PMRGREAS,PMRGCOMP,PMRGSPAR                              
          RETURN
.
WRPMRGN1  RESET     KEY21                                                       
          WRITE     PMSRGNA1,KEY21;PMRGURNO,PMRGUNIQ,PMRGCNTR,PMRGGRAV,PMRGTOTL:
                        PMRGTOPL,PMRGTOPB,PMRGCURL,PMRGTOPS,PMRGTPND,PMRGTPAS:  
                        PMRGTPAI,PMRGTPEO,PMRGTPUO,PMRGDATE,PMRGOUTL,PMRGLASM:  
                        PMRGLASC,PMRGTOTS,PMRGPLVB,PMRGISBR,PMRGDATM,PMRGESTD:  
                        PMRGEDDB,PMRGHGHT,PMRGWGHT,PMRGESGA,PMRGEGAS,PMRGNU14:  
                        PMRGNU26,PMRGNU27,PMRGML20,PMRGMG20,PMRGACRC,PMRGDACP:  
                        PMRGANCP,PMRGASBR,PMRGASBF,PMRGCIBS,PMRGCIBR,PMRGUDF1:  
                        PMRGUDF2,PMRGUDF3,PMRGUDF4,PMRGUDF5,PMRGUDF6,PMRGUDF7:  
                        PMRGUDF8,PMRGUDF9,PMRGUDF0,PMRGWEBC,PMRGDATC,PMRGTIMC:  
                        PMRGREAS,PMRGCOMP,PMRGSPAR                              
          RETURN
.
DEPMRGN1  RESET     KEY21                                                       
          DELETE    PMSRGNA1,KEY21                                              
          RETURN
.
RSPMRGN2  RESET     KEY13                                                       
          READ      PMSRGNA2,KEY13;;                                            
          RETURN
.
RAPMRGN2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRGNA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRGN2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRGNA2,KEY13;PMRGURNO,PMRGUNIQ,PMRGCNTR,PMRGGRAV,PMRGTOTL:
                        PMRGTOPL,PMRGTOPB,PMRGCURL,PMRGTOPS,PMRGTPND,PMRGTPAS:  
                        PMRGTPAI,PMRGTPEO,PMRGTPUO,PMRGDATE,PMRGOUTL,PMRGLASM:  
                        PMRGLASC,PMRGTOTS,PMRGPLVB,PMRGISBR,PMRGDATM,PMRGESTD:  
                        PMRGEDDB,PMRGHGHT,PMRGWGHT,PMRGESGA,PMRGEGAS,PMRGNU14:  
                        PMRGNU26,PMRGNU27,PMRGML20,PMRGMG20,PMRGACRC,PMRGDACP:  
                        PMRGANCP,PMRGASBR,PMRGASBF,PMRGCIBS,PMRGCIBR,PMRGUDF1:  
                        PMRGUDF2,PMRGUDF3,PMRGUDF4,PMRGUDF5,PMRGUDF6,PMRGUDF7:  
                        PMRGUDF8,PMRGUDF9,PMRGUDF0,PMRGWEBC,PMRGDATC,PMRGTIMC:  
                        PMRGREAS,PMRGCOMP,PMRGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRGN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSRGNA2;PMRGURNO,PMRGUNIQ,PMRGCNTR,PMRGGRAV,PMRGTOTL:      
                        PMRGTOPL,PMRGTOPB,PMRGCURL,PMRGTOPS,PMRGTPND,PMRGTPAS:  
                        PMRGTPAI,PMRGTPEO,PMRGTPUO,PMRGDATE,PMRGOUTL,PMRGLASM:  
                        PMRGLASC,PMRGTOTS,PMRGPLVB,PMRGISBR,PMRGDATM,PMRGESTD:  
                        PMRGEDDB,PMRGHGHT,PMRGWGHT,PMRGESGA,PMRGEGAS,PMRGNU14:  
                        PMRGNU26,PMRGNU27,PMRGML20,PMRGMG20,PMRGACRC,PMRGDACP:  
                        PMRGANCP,PMRGASBR,PMRGASBF,PMRGCIBS,PMRGCIBR,PMRGUDF1:  
                        PMRGUDF2,PMRGUDF3,PMRGUDF4,PMRGUDF5,PMRGUDF6,PMRGUDF7:  
                        PMRGUDF8,PMRGUDF9,PMRGUDF0,PMRGWEBC,PMRGDATC,PMRGTIMC:  
                        PMRGREAS,PMRGCOMP,PMRGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRGN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSRGNA2;PMRGURNO,PMRGUNIQ,PMRGCNTR,PMRGGRAV,PMRGTOTL:      
                        PMRGTOPL,PMRGTOPB,PMRGCURL,PMRGTOPS,PMRGTPND,PMRGTPAS:  
                        PMRGTPAI,PMRGTPEO,PMRGTPUO,PMRGDATE,PMRGOUTL,PMRGLASM:  
                        PMRGLASC,PMRGTOTS,PMRGPLVB,PMRGISBR,PMRGDATM,PMRGESTD:  
                        PMRGEDDB,PMRGHGHT,PMRGWGHT,PMRGESGA,PMRGEGAS,PMRGNU14:  
                        PMRGNU26,PMRGNU27,PMRGML20,PMRGMG20,PMRGACRC,PMRGDACP:  
                        PMRGANCP,PMRGASBR,PMRGASBF,PMRGCIBS,PMRGCIBR,PMRGUDF1:  
                        PMRGUDF2,PMRGUDF3,PMRGUDF4,PMRGUDF5,PMRGUDF6,PMRGUDF7:  
                        PMRGUDF8,PMRGUDF9,PMRGUDF0,PMRGWEBC,PMRGDATC,PMRGTIMC:  
                        PMRGREAS,PMRGCOMP,PMRGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRGN2                                                                        
          UPDATE    PMSRGNA2;PMRGURNO,PMRGUNIQ,PMRGCNTR,PMRGGRAV,PMRGTOTL:      
                        PMRGTOPL,PMRGTOPB,PMRGCURL,PMRGTOPS,PMRGTPND,PMRGTPAS:  
                        PMRGTPAI,PMRGTPEO,PMRGTPUO,PMRGDATE,PMRGOUTL,PMRGLASM:  
                        PMRGLASC,PMRGTOTS,PMRGPLVB,PMRGISBR,PMRGDATM,PMRGESTD:  
                        PMRGEDDB,PMRGHGHT,PMRGWGHT,PMRGESGA,PMRGEGAS,PMRGNU14:  
                        PMRGNU26,PMRGNU27,PMRGML20,PMRGMG20,PMRGACRC,PMRGDACP:  
                        PMRGANCP,PMRGASBR,PMRGASBF,PMRGCIBS,PMRGCIBR,PMRGUDF1:  
                        PMRGUDF2,PMRGUDF3,PMRGUDF4,PMRGUDF5,PMRGUDF6,PMRGUDF7:  
                        PMRGUDF8,PMRGUDF9,PMRGUDF0,PMRGWEBC,PMRGDATC,PMRGTIMC:  
                        PMRGREAS,PMRGCOMP,PMRGSPAR                              
          RETURN
.
WRPMRGN2  RESET     KEY13                                                       
          WRITE     PMSRGNA2,KEY13;PMRGURNO,PMRGUNIQ,PMRGCNTR,PMRGGRAV,PMRGTOTL:
                        PMRGTOPL,PMRGTOPB,PMRGCURL,PMRGTOPS,PMRGTPND,PMRGTPAS:  
                        PMRGTPAI,PMRGTPEO,PMRGTPUO,PMRGDATE,PMRGOUTL,PMRGLASM:  
                        PMRGLASC,PMRGTOTS,PMRGPLVB,PMRGISBR,PMRGDATM,PMRGESTD:  
                        PMRGEDDB,PMRGHGHT,PMRGWGHT,PMRGESGA,PMRGEGAS,PMRGNU14:  
                        PMRGNU26,PMRGNU27,PMRGML20,PMRGMG20,PMRGACRC,PMRGDACP:  
                        PMRGANCP,PMRGASBR,PMRGASBF,PMRGCIBS,PMRGCIBR,PMRGUDF1:  
                        PMRGUDF2,PMRGUDF3,PMRGUDF4,PMRGUDF5,PMRGUDF6,PMRGUDF7:  
                        PMRGUDF8,PMRGUDF9,PMRGUDF0,PMRGWEBC,PMRGDATC,PMRGTIMC:  
                        PMRGREAS,PMRGCOMP,PMRGSPAR                              
          RETURN
.
DEPMRGN2  RESET     KEY13                                                       
          DELETE    PMSRGNA2,KEY13                                              
          RETURN
.
