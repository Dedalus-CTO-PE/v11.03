.
.         INC       BOKSTAIO.INC
.
.         FILE  I/O REQUESTS FOR BOOKING STATISTICS
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY9   DIM             9             KEY FOR BOKBSTA1
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
RDSBSTA1 RESET     KEY9
         READ      BOKBSTA1,KEY9;;
         RETURN  
.
RDBSTA1  MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      BOKBSTA1,KEY9;BSTYPE,BSDATE,BSBOOKS,BSADMTS:
                                 BSDELVY,BSUNDLV,BSCANCB,BSCANCP:
                                 BSDSCHS,BSLOCK,BSDEPOS,BSSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RLBKBST1 MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      BOKBSTA1,KEY9;BSTYPE,BSDATE,BSBOOKS,BSADMTS:
                                 BSDELVY,BSUNDLV,BSCANCB,BSCANCP:
                                 BSDSCHS,BSLOCK,BSDEPOS,BSSPARE
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         RETURN  
.
UUBKBST1 UNLOCK    BOKBSTA1
         RETURN  
.
RDKBSTA1 MOVE      ZERO,OVRCD
         READKS    BOKBSTA1;BSTYPE,BSDATE,BSBOOKS,BSADMTS:
                            BSDELVY,BSUNDLV,BSCANCB,BSCANCP:
                            BSDSCHS,BSLOCK,BSDEPOS,BSSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
.
WRBSTA1  RESET     KEY9
         MOVE      SP2,BSLOCK
.
         WRITE     BOKBSTA1,KEY9;KEY9,BSBOOKS,BSADMTS:
                                 BSDELVY,BSUNDLV,BSCANCB,BSCANCP:
                                 BSDSCHS,BSLOCK,BSDEPOS,BSSPARE
         RETURN  
.
UPBSTA1  MOVE      SP2,BSLOCK
         UPDATE    BOKBSTA1;BSTYPE,BSDATE,BSBOOKS,BSADMTS:
                            BSDELVY,BSUNDLV,BSCANCB,BSCANCP:
                            BSDSCHS,BSLOCK,BSDEPOS,BSSPARE
         RETURN  
.
DEBSTA1  RESET     KEY9
         DELETE    BOKBSTA1,KEY9
         RETURN
.
