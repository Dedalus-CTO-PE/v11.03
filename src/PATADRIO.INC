.
.******************************************************************************
.*        Mods:                                                               *
.*       V10.11.01  20/07/2017  Peter Vela    TSK 0835226                     *
.*                  Added Health Care Provider (Eclipse)                      *
.*       V10.01.01  29/11/2010  Mike Laming   CAR 233046                      *
.*                  Added H/F Table Type & Effective To Date                  *
.*       V10.00.01  06/05/2010  J.Tan     CAR 220887                          *
.*                  Added Eclipse Eq.,type of service and Active/Inactive flag*
.*        V9.09.01  29/01/2008  Peter Vela    CAR 155334                      *
.*                  Added SPTMCPRT                                            *
.*        V9.07.01  12/09/2006  Mike Laming   CAR 103365                      *
.*                  Added SPTMCALF                                            *
.*        V9.03.01  09/09/2003  Lina Vo   CAR 40497                           *
.*                  Added SPTMCCFC,SPTMCKRE,SPTMCCOB,SPTMCTAT,SPTMCTAD &      *
.*                  SPTMCEFD.                                                 *
.*        V5.08.01  15/08/2000  Caleb Sharman                                 *
.*                  Changed Health Fund variables to be 8 chars               *
.*                                                                            *
.******************************************************************************
.
.         INC       PATADRIO.INC
.
.         FILE  I/O REQUESTS FOR ALL MISCELLANEOUS AUDIT FILES
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.
.         NOTE:-
.                  UPAAAX  IS THE WRITE CALL
.                  RDAAAX  IS THE READ CALL
.                  RDSAAAX  IS THE READ SECTOR 0 CALL
.                  WRSAAAX  IS THE WRITE ONE TO SECTOR 0 CALL
.
RDSRAUD   READ      PATRAUD,ZERO;SECTOR
          RETURN
.
CRRAUD    
          CLOSE     PATRAUD
          PREP      PATRAUD,"patraud"
          CLOSE     PATRAUD
          PREP      PATRAUD,"patraud"
          WRITE     PATRAUD,ZERO;SEC1
          WEOF      PATRAUD,SEC1
          RETURN
.
RDRAUD    READ      PATRAUD,SECTOR;ADD,AMM,ACC,AYY,TIMEIS:
                                   ACTION,OPERCODE,SMCLMCOD,SMHFUND,SMHFTAB:
                                   SMCHARGE,SMDESC,SMITMTYP,SMMSCGRP,SMPATPOR:
                                   SMHFPOR,SMNINV,SMINDIC,SPTMCGSA,SPTMCGSC:
                                   SPTMCEDI,SPTMCCFC,SPTMCKRE,SPTMCCOB,SPTMCTAT:
                                   SPTMCTAD,SPTMCEFD,SPTMCALF,SPTMCPRT:
                                   SPTMCECE,SPTMCECT,SPTMCACT,SPTMCHFT:
                                   SPTMCETD,SPTMCEHC
          RETURN
.
WRRAUD    
          CLOCK     TIME,TIMEIS
          READ      PATRAUD,ZERO;SECTOR
          WRITE     PATRAUD,SECTOR;ADD,AMM,ACC,AYY,TIMEIS:
                                   ACTION,OPERCODE,SMCLMCOD,SMHFUND,SMHFTAB:
                                   SMCHARGE,SMDESC,SMITMTYP,SMMSCGRP,SMPATPOR:
                                   SMHFPOR,SMNINV,SMINDIC,SPTMCGSA,SPTMCGSC:
                                   SPTMCEDI,SPTMCCFC,SPTMCKRE,SPTMCCOB,SPTMCTAT:
                                   SPTMCTAD,SPTMCEFD,SPTMCALF,SPTMCPRT:
                                   SPTMCECE,SPTMCECT,SPTMCACT,SPTMCHFT:
                                   SPTMCETD,SPTMCEHC
          ADD       ONE,SECTOR
          WEOF      PATRAUD,SECTOR
          WRITE     PATRAUD,ZERO;SECTOR
          RETURN
+
.

