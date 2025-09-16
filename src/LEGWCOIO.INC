.
.         INCLUDE NAME : LEGWCOIO.INC
.
.         FILE I/O REQUESTS FOR WORKERS COMPENSATION CLAIMS
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY8   DIM             8             KEY FOR LEGWCOM1
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
.
RDLGWCO1
         MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      LEGWCOM1,KEY8;DLWCADMN,LWCENAME:
                                 LWCEADD1,LWCEADD2,LWCEADD3:
                                 LWCEPOST,LWCETELE,LWCACDAT,LWCACCPT,LWCICODE:
                                 LWCCLMNO,LWCCOMN1,LWCCOMN2,LWCSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DLWCADMN,LWCADMNO
         RETURN
.
RKLGWCO1
         MOVE      ZERO,OVRCD
         READKS    LEGWCOM1;DLWCADMN,LWCENAME,LWCEADD1,LWCEADD2,LWCEADD3:
                                 LWCEPOST,LWCETELE,LWCACDAT,LWCACCPT,LWCICODE:
                                 LWCCLMNO,LWCCOMN1,LWCCOMN2,LWCSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DLWCADMN,LWCADMNO
         RETURN
.
RSLGWCO1
         RESET     KEY8
         READ      LEGWCOM1,KEY8;;
         RETURN
