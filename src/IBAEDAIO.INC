.
. IBAEDAIO    
. --------
. Filename     : ibaedaaf.dat
.
RSIBEDA1  RESET     KEY16                                                       
          READ      IBAEDAA1,KEY16;;                                            
          RETURN
.
RAIBEDA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      IBAEDAA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBEDA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      IBAEDAA1,KEY16;IBEAURNO,IBEAVISN,IBEACNTR,IBEAFL01,IBEAFL02:
                                IBEAFL03,IBEAFL04,IBEAFL05,IBEAFL06,IBEAFL07:
                                IBEAFL08,IBEAFL09,IBEAFL10,IBEAFL11,IBEAFL12:
                                IBEAFL13,IBEAFL14,IBEAFL15,IBEAFL16,IBEAFL17:
                                IBEAFL18,IBEAFL19,IBEAFL20,IBEAFL21,IBEAFL22:
                                IBEAFL23,IBEAFL24,IBEAFL25,IBEAFL26,IBEAFL27:
                                IBEAFL28,IBEAFL29,IBEAFL30,IBEAFL31,IBEAFL32:
                                IBEAFL33,IBEAFL34,IBEAFL35,IBEAFL36,IBEAFL37:
                                IBEAFL38,IBEAFL39,IBEAFL40,IBEAFL41,IBEAFL42:
                                IBEAFL43,IBEAFL44,IBEAFL45,IBEACD01,IBEACD02:
                                IBEACD03,IBEACD04,IBEACD05,IBEALC01,IBEALC02:
                                IBEALC03,IBEALC04,IBEASD01,IBEASD02,IBEASD03:
                                IBEASD04,IBEASD05,IBEAMD01,IBEAMD02,IBEAMD03:
                                IBEAMD04,IBEAMD05,IBEALD01,IBEALD02,IBEALD03:
                                IBEALD04,IBEALD05,IBEALD06,IBEALD07,IBEALD08:
                                IBEALD09,IBEALD10,IBEAXL01,IBEAXL02,IBEAXL03:
                                IBEAXL04,IBEAXL05,IBEAXL06,IBEAXL07,IBEAXL08:
                                IBEACDAT,IBEACTIM,IBEACUID,IBEAUDAT,IBEAUTIM:
                                IBEAUUID,IBEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBEDA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBAEDAA1;IBEAURNO,IBEAVISN,IBEACNTR,IBEAFL01,IBEAFL02:
                                IBEAFL03,IBEAFL04,IBEAFL05,IBEAFL06,IBEAFL07:
                                IBEAFL08,IBEAFL09,IBEAFL10,IBEAFL11,IBEAFL12:
                                IBEAFL13,IBEAFL14,IBEAFL15,IBEAFL16,IBEAFL17:
                                IBEAFL18,IBEAFL19,IBEAFL20,IBEAFL21,IBEAFL22:
                                IBEAFL23,IBEAFL24,IBEAFL25,IBEAFL26,IBEAFL27:
                                IBEAFL28,IBEAFL29,IBEAFL30,IBEAFL31,IBEAFL32:
                                IBEAFL33,IBEAFL34,IBEAFL35,IBEAFL36,IBEAFL37:
                                IBEAFL38,IBEAFL39,IBEAFL40,IBEAFL41,IBEAFL42:
                                IBEAFL43,IBEAFL44,IBEAFL45,IBEACD01,IBEACD02:
                                IBEACD03,IBEACD04,IBEACD05,IBEALC01,IBEALC02:
                                IBEALC03,IBEALC04,IBEASD01,IBEASD02,IBEASD03:
                                IBEASD04,IBEASD05,IBEAMD01,IBEAMD02,IBEAMD03:
                                IBEAMD04,IBEAMD05,IBEALD01,IBEALD02,IBEALD03:
                                IBEALD04,IBEALD05,IBEALD06,IBEALD07,IBEALD08:
                                IBEALD09,IBEALD10,IBEAXL01,IBEAXL02,IBEAXL03:
                                IBEAXL04,IBEAXL05,IBEAXL06,IBEAXL07,IBEAXL08:
                                IBEACDAT,IBEACTIM,IBEACUID,IBEAUDAT,IBEAUTIM:
                                IBEAUUID,IBEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBEDA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBAEDAA1;IBEAURNO,IBEAVISN,IBEACNTR,IBEAFL01,IBEAFL02:
                                IBEAFL03,IBEAFL04,IBEAFL05,IBEAFL06,IBEAFL07:
                                IBEAFL08,IBEAFL09,IBEAFL10,IBEAFL11,IBEAFL12:
                                IBEAFL13,IBEAFL14,IBEAFL15,IBEAFL16,IBEAFL17:
                                IBEAFL18,IBEAFL19,IBEAFL20,IBEAFL21,IBEAFL22:
                                IBEAFL23,IBEAFL24,IBEAFL25,IBEAFL26,IBEAFL27:
                                IBEAFL28,IBEAFL29,IBEAFL30,IBEAFL31,IBEAFL32:
                                IBEAFL33,IBEAFL34,IBEAFL35,IBEAFL36,IBEAFL37:
                                IBEAFL38,IBEAFL39,IBEAFL40,IBEAFL41,IBEAFL42:
                                IBEAFL43,IBEAFL44,IBEAFL45,IBEACD01,IBEACD02:
                                IBEACD03,IBEACD04,IBEACD05,IBEALC01,IBEALC02:
                                IBEALC03,IBEALC04,IBEASD01,IBEASD02,IBEASD03:
                                IBEASD04,IBEASD05,IBEAMD01,IBEAMD02,IBEAMD03:
                                IBEAMD04,IBEAMD05,IBEALD01,IBEALD02,IBEALD03:
                                IBEALD04,IBEALD05,IBEALD06,IBEALD07,IBEALD08:
                                IBEALD09,IBEALD10,IBEAXL01,IBEAXL02,IBEAXL03:
                                IBEAXL04,IBEAXL05,IBEAXL06,IBEAXL07,IBEAXL08:
                                IBEACDAT,IBEACTIM,IBEACUID,IBEAUDAT,IBEAUTIM:
                                IBEAUUID,IBEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBEDA1                                                                        
          UPDATE    IBAEDAA1;IBEAURNO,IBEAVISN,IBEACNTR,IBEAFL01,IBEAFL02:
                                IBEAFL03,IBEAFL04,IBEAFL05,IBEAFL06,IBEAFL07:
                                IBEAFL08,IBEAFL09,IBEAFL10,IBEAFL11,IBEAFL12:
                                IBEAFL13,IBEAFL14,IBEAFL15,IBEAFL16,IBEAFL17:
                                IBEAFL18,IBEAFL19,IBEAFL20,IBEAFL21,IBEAFL22:
                                IBEAFL23,IBEAFL24,IBEAFL25,IBEAFL26,IBEAFL27:
                                IBEAFL28,IBEAFL29,IBEAFL30,IBEAFL31,IBEAFL32:
                                IBEAFL33,IBEAFL34,IBEAFL35,IBEAFL36,IBEAFL37:
                                IBEAFL38,IBEAFL39,IBEAFL40,IBEAFL41,IBEAFL42:
                                IBEAFL43,IBEAFL44,IBEAFL45,IBEACD01,IBEACD02:
                                IBEACD03,IBEACD04,IBEACD05,IBEALC01,IBEALC02:
                                IBEALC03,IBEALC04,IBEASD01,IBEASD02,IBEASD03:
                                IBEASD04,IBEASD05,IBEAMD01,IBEAMD02,IBEAMD03:
                                IBEAMD04,IBEAMD05,IBEALD01,IBEALD02,IBEALD03:
                                IBEALD04,IBEALD05,IBEALD06,IBEALD07,IBEALD08:
                                IBEALD09,IBEALD10,IBEAXL01,IBEAXL02,IBEAXL03:
                                IBEAXL04,IBEAXL05,IBEAXL06,IBEAXL07,IBEAXL08:
                                IBEACDAT,IBEACTIM,IBEACUID,IBEAUDAT,IBEAUTIM:
                                IBEAUUID,IBEASPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBEDA1  RESET     KEY16                                                       
          WRITE     IBAEDAA1,KEY16;IBEAURNO,IBEAVISN,IBEACNTR,IBEAFL01,IBEAFL02:
                                IBEAFL03,IBEAFL04,IBEAFL05,IBEAFL06,IBEAFL07:
                                IBEAFL08,IBEAFL09,IBEAFL10,IBEAFL11,IBEAFL12:
                                IBEAFL13,IBEAFL14,IBEAFL15,IBEAFL16,IBEAFL17:
                                IBEAFL18,IBEAFL19,IBEAFL20,IBEAFL21,IBEAFL22:
                                IBEAFL23,IBEAFL24,IBEAFL25,IBEAFL26,IBEAFL27:
                                IBEAFL28,IBEAFL29,IBEAFL30,IBEAFL31,IBEAFL32:
                                IBEAFL33,IBEAFL34,IBEAFL35,IBEAFL36,IBEAFL37:
                                IBEAFL38,IBEAFL39,IBEAFL40,IBEAFL41,IBEAFL42:
                                IBEAFL43,IBEAFL44,IBEAFL45,IBEACD01,IBEACD02:
                                IBEACD03,IBEACD04,IBEACD05,IBEALC01,IBEALC02:
                                IBEALC03,IBEALC04,IBEASD01,IBEASD02,IBEASD03:
                                IBEASD04,IBEASD05,IBEAMD01,IBEAMD02,IBEAMD03:
                                IBEAMD04,IBEAMD05,IBEALD01,IBEALD02,IBEALD03:
                                IBEALD04,IBEALD05,IBEALD06,IBEALD07,IBEALD08:
                                IBEALD09,IBEALD10,IBEAXL01,IBEAXL02,IBEAXL03:
                                IBEAXL04,IBEAXL05,IBEAXL06,IBEAXL07,IBEAXL08:
                                IBEACDAT,IBEACTIM,IBEACUID,IBEAUDAT,IBEAUTIM:
                                IBEAUUID,IBEASPAR
          RETURN
.
DEIBEDA1  RESET     KEY16                                                       
          DELETE    IBAEDAA1,KEY16                                              
          RETURN
.
