.
. IBASCEIO    
. --------
. Filename     : ibasceaf.dat
.
RSIBSEA1  RESET     KEY16                                                       
          READ      IBASCEA1,KEY16;;                                            
          RETURN
.
RAIBSEA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      IBASCEA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBSEA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      IBASCEA1,KEY16;IBSEURNO,IBSEVISN,IBSECNTR,IBSEFL01,IBSEFL02:
                             IBSEFL03,IBSEFL04,IBSEFL05,IBSEFL06,IBSEFL07:
                             IBSEFL08,IBSEFL09,IBSEFL10,IBSEFL11,IBSEFL12:
                             IBSEFL13,IBSEFL14,IBSEFL15,IBSEFL16,IBSEFL17:
                             IBSEFL18,IBSEFL19,IBSEFL20,IBSECD01,IBSECD02:
                             IBSECD03,IBSECD04,IBSECD05,IBSECD06,IBSECD07:
                             IBSECD08,IBSECD09,IBSECD10,IBSECD11,IBSECD12:
                             IBSECD13,IBSECD14,IBSECD15,IBSESD01,IBSESD02:
                             IBSESD03,IBSESD04,IBSESD05,IBSESD06,IBSEMD01:
                             IBSEMD02,IBSEMD03,IBSEMD04,IBSEMD05,IBSEMD06:
                             IBSEMD07,IBSEMD08,IBSEMD09,IBSEMD10,IBSEMD11:
                             IBSEMD12,IBSEXL01,IBSEXL02,IBSEXL03,IBSEXL04:
                             IBSEXL05,IBSECDAT,IBSECTIM,IBSECUID,IBSEUDAT:
                             IBSEUTIM,IBSEUUID,IBSESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBSEA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBASCEA1;IBSEURNO,IBSEVISN,IBSECNTR,IBSEFL01,IBSEFL02:
                             IBSEFL03,IBSEFL04,IBSEFL05,IBSEFL06,IBSEFL07:
                             IBSEFL08,IBSEFL09,IBSEFL10,IBSEFL11,IBSEFL12:
                             IBSEFL13,IBSEFL14,IBSEFL15,IBSEFL16,IBSEFL17:
                             IBSEFL18,IBSEFL19,IBSEFL20,IBSECD01,IBSECD02:
                             IBSECD03,IBSECD04,IBSECD05,IBSECD06,IBSECD07:
                             IBSECD08,IBSECD09,IBSECD10,IBSECD11,IBSECD12:
                             IBSECD13,IBSECD14,IBSECD15,IBSESD01,IBSESD02:
                             IBSESD03,IBSESD04,IBSESD05,IBSESD06,IBSEMD01:
                             IBSEMD02,IBSEMD03,IBSEMD04,IBSEMD05,IBSEMD06:
                             IBSEMD07,IBSEMD08,IBSEMD09,IBSEMD10,IBSEMD11:
                             IBSEMD12,IBSEXL01,IBSEXL02,IBSEXL03,IBSEXL04:
                             IBSEXL05,IBSECDAT,IBSECTIM,IBSECUID,IBSEUDAT:
                             IBSEUTIM,IBSEUUID,IBSESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBSEA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBASCEA1;IBSEURNO,IBSEVISN,IBSECNTR,IBSEFL01,IBSEFL02:
                             IBSEFL03,IBSEFL04,IBSEFL05,IBSEFL06,IBSEFL07:
                             IBSEFL08,IBSEFL09,IBSEFL10,IBSEFL11,IBSEFL12:
                             IBSEFL13,IBSEFL14,IBSEFL15,IBSEFL16,IBSEFL17:
                             IBSEFL18,IBSEFL19,IBSEFL20,IBSECD01,IBSECD02:
                             IBSECD03,IBSECD04,IBSECD05,IBSECD06,IBSECD07:
                             IBSECD08,IBSECD09,IBSECD10,IBSECD11,IBSECD12:
                             IBSECD13,IBSECD14,IBSECD15,IBSESD01,IBSESD02:
                             IBSESD03,IBSESD04,IBSESD05,IBSESD06,IBSEMD01:
                             IBSEMD02,IBSEMD03,IBSEMD04,IBSEMD05,IBSEMD06:
                             IBSEMD07,IBSEMD08,IBSEMD09,IBSEMD10,IBSEMD11:
                             IBSEMD12,IBSEXL01,IBSEXL02,IBSEXL03,IBSEXL04:
                             IBSEXL05,IBSECDAT,IBSECTIM,IBSECUID,IBSEUDAT:
                             IBSEUTIM,IBSEUUID,IBSESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBSEA1                                                                        
          UPDATE    IBASCEA1;IBSEURNO,IBSEVISN,IBSECNTR,IBSEFL01,IBSEFL02:
                             IBSEFL03,IBSEFL04,IBSEFL05,IBSEFL06,IBSEFL07:
                             IBSEFL08,IBSEFL09,IBSEFL10,IBSEFL11,IBSEFL12:
                             IBSEFL13,IBSEFL14,IBSEFL15,IBSEFL16,IBSEFL17:
                             IBSEFL18,IBSEFL19,IBSEFL20,IBSECD01,IBSECD02:
                             IBSECD03,IBSECD04,IBSECD05,IBSECD06,IBSECD07:
                             IBSECD08,IBSECD09,IBSECD10,IBSECD11,IBSECD12:
                             IBSECD13,IBSECD14,IBSECD15,IBSESD01,IBSESD02:
                             IBSESD03,IBSESD04,IBSESD05,IBSESD06,IBSEMD01:
                             IBSEMD02,IBSEMD03,IBSEMD04,IBSEMD05,IBSEMD06:
                             IBSEMD07,IBSEMD08,IBSEMD09,IBSEMD10,IBSEMD11:
                             IBSEMD12,IBSEXL01,IBSEXL02,IBSEXL03,IBSEXL04:
                             IBSEXL05,IBSECDAT,IBSECTIM,IBSECUID,IBSEUDAT:
                             IBSEUTIM,IBSEUUID,IBSESPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBSEA1  RESET     KEY16                                                       
          WRITE     IBASCEA1,KEY16;IBSEURNO,IBSEVISN,IBSECNTR,IBSEFL01,IBSEFL02:
                             IBSEFL03,IBSEFL04,IBSEFL05,IBSEFL06,IBSEFL07:
                             IBSEFL08,IBSEFL09,IBSEFL10,IBSEFL11,IBSEFL12:
                             IBSEFL13,IBSEFL14,IBSEFL15,IBSEFL16,IBSEFL17:
                             IBSEFL18,IBSEFL19,IBSEFL20,IBSECD01,IBSECD02:
                             IBSECD03,IBSECD04,IBSECD05,IBSECD06,IBSECD07:
                             IBSECD08,IBSECD09,IBSECD10,IBSECD11,IBSECD12:
                             IBSECD13,IBSECD14,IBSECD15,IBSESD01,IBSESD02:
                             IBSESD03,IBSESD04,IBSESD05,IBSESD06,IBSEMD01:
                             IBSEMD02,IBSEMD03,IBSEMD04,IBSEMD05,IBSEMD06:
                             IBSEMD07,IBSEMD08,IBSEMD09,IBSEMD10,IBSEMD11:
                             IBSEMD12,IBSEXL01,IBSEXL02,IBSEXL03,IBSEXL04:
                             IBSEXL05,IBSECDAT,IBSECTIM,IBSECUID,IBSEUDAT:
                             IBSEUTIM,IBSEUUID,IBSESPAR

          RETURN
.
DEIBSEA1  RESET     KEY16                                                       
          DELETE    IBASCEA1,KEY16                                              
          RETURN
.
