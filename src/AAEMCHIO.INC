.
. AAEMCHIO.INC
. ------------
. Filename       :  aaemchgf.dat
. Description    :  A&E Miscellaneous Charges File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY12     DIM       12
.                   KEY13     DIM       13
.                   KEY25     DIM       25
.                   KEY29     DIM       29
. Modifications  :
.                   V9.02.00 06/01/2003  J.Tan        
.                            Fixed amount variables for the I/O audit rountines
.                   V5.08.01 15/08/2000  Caleb Sharman
.                            Changed Health Fund variables to be 8 chars       
.                   V5.01.01  07/05/90  E.Phan
.                             Created file.
.
RAAEMCH1  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      AAEMCHG1,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSAEMCH1  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      AAEMCHG1,KEY29;;
          RETURN
.
RDAEMCH1  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      AAEMCHG1,KEY29;AEMCCLM,AEMCFUND,AEMCTAB,AEMCCLSS:
                                   AEMCMBS,AEMCPATP,AEMCREBP,AEMCGSTA:
                                   AEMCGSTC,AEMCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      AEMCPATP,AEMCPAT
          MOVE      AEMCREBP,AEMCREB
          RETURN
.
RKAEMCH1  MOVE      ZERO,OVRCD
          READKS    AAEMCHG1;AEMCCLM,AEMCFUND,AEMCTAB,AEMCCLSS:
                             AEMCMBS,AEMCPATP,AEMCREBP,AEMCGSTA:
                                   AEMCGSTC,AEMCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      AEMCPATP,AEMCPAT
          MOVE      AEMCREBP,AEMCREB
          RETURN
.
RPAEMCH1  MOVE      ZERO,OVRCD
          READKP    AAEMCHG1;AEMCCLM,AEMCFUND,AEMCTAB,AEMCCLSS:
                             AEMCMBS,AEMCPATP,AEMCREBP,AEMCGSTA:
                                   AEMCGSTC,AEMCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      AEMCPATP,AEMCPAT
          MOVE      AEMCREBP,AEMCREB
          RETURN
.
UPAEMCH1  MOVE      ZERO,OVRCD
          MOVE      AEMCPAT,AEMCPATP
          MOVE      AEMCREB,AEMCREBP
          UPDATE    AAEMCHG1;AEMCCLM,AEMCFUND,AEMCTAB,AEMCCLSS:
                             AEMCMBS,AEMCPATP,AEMCREBP,AEMCGSTA:
                                   AEMCGSTC,AEMCSPAR
          RETURN
.
WRAEMCH1  RESET     KEY29
          MOVE      AEMCPAT,AEMCPATP
          MOVE      AEMCREB,AEMCREBP
          WRITE     AAEMCHG1,KEY29;KEY29,AEMCPATP,AEMCREBP,AEMCGSTA:
                                   AEMCGSTC,AEMCSPAR
          RETURN
.
DEAEMCH1  RESET     KEY29
          DELETE    AAEMCHG1,KEY29
          RETURN
.
. ------- Audits -------
.
ASAEMCH   MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      AAEAUDMC,KEY19;;
          RETURN  
.
AKAEMCH   MOVE      ZERO,OVRCD
          READKS    AAEAUDMC;AEMCAUDD,AEMCAUDT,AEMCAUDP,AEMCAUDR,AEMCAUDS:
                             AEMCAUDO,AEMCCLM,AEMCFUND,AEMCTAB,AEMCCLSS:
                             AEMCMBS,AEMCPATP,AEMCREBP,AEMCGSTA:
                                   AEMCGSTC,AEMCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      AEMCPATP,AEMCPAT
          MOVE      AEMCREBP,AEMCREB
          RETURN  
.
AWAEMCH   RESET     KEY19
          MOVE      AEMCPAT,AEMCPATP
          MOVE      AEMCREB,AEMCREBP
          WRITE     AAEAUDMC,KEY19;KEY19,AEMCAUDS,AEMCAUDO:
                                   AEMCCLM,AEMCFUND,AEMCTAB,AEMCCLSS:
                                   AEMCMBS,AEMCPATP,AEMCREBP,AEMCGSTA:
                                   AEMCGSTC,AEMCSPAR
          RETURN  
.
AUAEMCH   MOVE      AEMCPAT,AEMCPATP
          MOVE      AEMCREB,AEMCREBP
          UPDATE    AAEAUDMC;AEMCAUDD,AEMCAUDT,AEMCAUDP,AEMCAUDR,AEMCAUDS:
                             AEMCAUDO,AEMCCLM,AEMCFUND,AEMCTAB,AEMCCLSS:
                             AEMCMBS,AEMCPATP,AEMCREBP,AEMCGSTA:
                                   AEMCGSTC,AEMCSPAR
          RETURN  
.
ADAEMCH   RESET     KEY19
          DELETE    AAEAUDMC,KEY19
          RETURN
.
