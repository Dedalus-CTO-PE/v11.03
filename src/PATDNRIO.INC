.
. Include   :  PATDNRIO.INC
.
. File      :  patdnraf.dat, patauddn.dat
. Keys      :  KEY10, KEY19
.
RSPTDNR1  RESET     KEY10
          READ      PATDNRA1,KEY10;;
          RETURN
.
RAPTDNR1  RESET     KEY10
          MOVE      ZERO,OVRCD
          READ      PATDNRA1,KEY10;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTDNR1  RESET     KEY10
          MOVE      ZERO,OVRCD
          READ      PATDNRA1,KEY10;PTDNURNO,DPTDNCNT,PTDNCODE,PTDNLUPD,PTDNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDNCNT,PTDNCNT
          RETURN
.
RKPTDNR1  MOVE      ZERO,OVRCD
          READKS    PATDNRA1;PTDNURNO,DPTDNCNT,PTDNCODE,PTDNLUPD,PTDNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDNCNT,PTDNCNT
          RETURN
.
RPPTDNR1  MOVE      ZERO,OVRCD
          READKP    PATDNRA1;PTDNURNO,DPTDNCNT,PTDNCODE,PTDNLUPD,PTDNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDNCNT,PTDNCNT
          RETURN
.
UPPTDNR1  MOVE      PTDNCNT,DPTDNCNT
          UPDATE    PATDNRA1;PTDNURNO,DPTDNCNT,PTDNCODE,PTDNLUPD,PTDNSPAR
          RETURN
.
WRPTDNR1  RESET     KEY10
          MOVE      PTDNCNT,DPTDNCNT
          WRITE     PATDNRA1,KEY10;PTDNURNO,DPTDNCNT,PTDNCODE,PTDNLUPD,PTDNSPAR
          RETURN
.
DEPTDNR1  RESET     KEY10
          DELETE    PATDNRA1,KEY10
          RETURN
.
. Audits
.
ASPTDNR   RESET     KEY19                                                       
          READ      PATAUDDN,KEY19;;                                            
          RETURN
.
AKPTDNR                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATAUDDN;PTDNAUDD,PTDNAUDT,PTDNAUDP,PTDNAUDR,PTDNAUDS:      
                    PTDNAUDO,PTDNURNO,DPTDNCNT,PTDNCODE,PTDNLUPD,PTDNSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AUPTDNR                                                                         
          UPDATE    PATAUDDN;PTDNAUDD,PTDNAUDT,PTDNAUDP,PTDNAUDR,PTDNAUDS:      
                    PTDNAUDO,PTDNURNO,DPTDNCNT,PTDNCODE,PTDNLUPD,PTDNSPAR
          RETURN
.
AWPTDNR   RESET     KEY19                                                       
          WRITE     PATAUDDN,KEY19;PTDNAUDD,PTDNAUDT,PTDNAUDP,PTDNAUDR,PTDNAUDS:
                    PTDNAUDO,PTDNURNO,DPTDNCNT,PTDNCODE,PTDNLUPD,PTDNSPAR
          RETURN
.
ADPTDNR   RESET     KEY19                                                       
          DELETE    PATAUDDN,KEY19;                                             
          RETURN
