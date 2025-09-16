.
.         INC       OUTCLAIO.INC
.
.         FILE  I/O REQUESTS FOR CLINIC ID FILE.
.
.         MODIFICATIONS : V10.06.01 12/03/2015 Ebon Clements CAR 268970
.                                   Added index 6    
.                         V5.08.00  25/05/2000 Pat Dirito
.                                   Added READKP to INDEX 3 & 4        
.                         V5.07.00  28/07/1999 Pat Dirito
.                                   Added OTCLIACT - Clinic Inactive  
.                         V5.03.01  04/01/95  Max White    SRF 440959
.                                   Added OCACCONS
.
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY20   DIM             20             KEY FOR OUTCLIA1
.
.         NOTE:-
.                  RDAAAX  IS OUT READ CALL ON FILE OUTAAAX
.                  RDKAAAX  IS OUT READKS CALL
.                  WRAAAX  IS OUT WRITE CALL
.                  UPAAAX  IS OUT UPDATE CALL
.                  DEAAAX  IS OUT DELETE CALL
. 
.         NOTE  OVRCD=1   RECORD DOSENT EXIST
.                     2   RECORD IS LOCKED
.
RDACLIA1 RESET     KEY20
         MOVE      ZERO,OVRCD
         READ      OUTCLIA1,KEY20;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSCLIA1 RESET     KEY20
         READ      OUTCLIA1,KEY20;;
         RETURN  
.
RDCLIA1  MOVE      ZERO,OVRCD
         RESET     KEY20
         READ      OUTCLIA1,KEY20;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC:
                                  OCACCONS,OTCLIACT,OCASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKCLIA1 MOVE      ZERO,OVRCD
         READKS    OUTCLIA1;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC,OCACCONS:
                            OTCLIACT,OCASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDPCLIA1 MOVE      ZERO,OVRCD
         READKP    OUTCLIA1;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC,OCACCONS:
                            OTCLIACT,OCASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRCLIA1  RESET     KEY20
         WRITE     OUTCLIA1,KEY20;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC:
                                  OCACCONS,OTCLIACT,OCASPARE
         RETURN  
.
UPCLIA1  UPDATE    OUTCLIA1;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC,OCACCONS:
                            OTCLIACT,OCASPARE
         RETURN  
.
DECLIA1  RESET     KEY20
         DELETE    OUTCLIA1,KEY20
         RETURN
.
RDACLIA5 RESET     KEY50
         MOVE      ZERO,OVRCD
         READ      OUTCLIA5,KEY50;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSCLIA5 RESET     KEY50
         READ      OUTCLIA5,KEY50;;
         RETURN
.
RDPCLIA5 MOVE      ZERO,OVRCD
         READKP    OUTCLIA5;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC,OCACCONS:
                            OTCLIACT,OCASPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDKCLIA5 MOVE      ZERO,OVRCD
         READKS    OUTCLIA5;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC,OCACCONS:
                            OTCLIACT,OCASPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDCLIA5  MOVE      ZERO,OVRCD
         RESET     KEY50
         READ      OUTCLIA5,KEY50;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC:
                                  OCACCONS,OTCLIACT,OCASPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDACLIA6 RESET     KEY26
         MOVE      ZERO,OVRCD
         READ      OUTCLIA6,KEY26;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSCLIA6 RESET     KEY26
         READ      OUTCLIA6,KEY26;;
         RETURN
.
RDPCLIA6 MOVE      ZERO,OVRCD
         READKP    OUTCLIA6;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC,OCACCONS:
                            OTCLIACT,OCASPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDKCLIA6 MOVE      ZERO,OVRCD
         READKS    OUTCLIA6;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC,OCACCONS:
                            OTCLIACT,OCASPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDCLIA6  MOVE      ZERO,OVRCD
         RESET     KEY26
         READ      OUTCLIA6,KEY26;OCASITE,OCACLIN,OCADATE,OCADOCT,OCADESC:
                                  OCACCONS,OTCLIACT,OCASPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
.        Audit Routines
.
AWOTCLI  RESET     KEY19
         WRITE     OUTAUDCL,KEY19;OTCLAUDD,OTCLAUDT,OTCLAUDP,OTCLAUDR,OTCLAUDS:
                                  OTCLAUDO,OCASITE,OCACLIN,OCADATE,OCADOCT:
                                  OCADESC,OCACCONS,OTCLIACT,OCASPARE
         RETURN  
+
