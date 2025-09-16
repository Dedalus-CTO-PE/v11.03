.
. OPROPRIO.INC
. ------------
. Filename       :  opropraf.dat
. Description    :  Operation Room - File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY6      DIM       6
.                   KEY46     DIM       46
.                   KEY19     DIm       19  ( audits )
.
. Modifications  : 28/12/89 Bill Dew : Make correction to KEY66 > KEY46
.                  09/10/90 J. Ceniza. Changed according to new specs.
.
RAOPOPR1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      OPROPRA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPOPR1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      OPROPRA1,KEY6;;
          RETURN  
.
RDOPOPR1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      OPROPRA1,KEY6;OPRMROOM,OPRMDESC,OPRMLOC,OPRMUSR1:
                                  OPRMUSR2,OPRMUSR3,OPRMUSR4,OPRMUSR5:
                                  OPRMSTAT,OPRMSUN,OPRMMON,OPRMTUE,OPRMWED:
                                  OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                                  OPRMSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPOPR1  MOVE      ZERO,OVRCD
          READKS    OPROPRA1;OPRMROOM,OPRMDESC,OPRMLOC,OPRMUSR1:
                                  OPRMUSR2,OPRMUSR3,OPRMUSR4,OPRMUSR5:
                                  OPRMSTAT,OPRMSUN,OPRMMON,OPRMTUE,OPRMWED:
                                  OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                                  OPRMSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPOPR1  MOVE      ZERO,OVRCD
          READKP    OPROPRA1;OPRMROOM,OPRMDESC,OPRMLOC,OPRMUSR1:
                                  OPRMUSR2,OPRMUSR3,OPRMUSR4,OPRMUSR5:
                                  OPRMSTAT,OPRMSUN,OPRMMON,OPRMTUE,OPRMWED:
                                  OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                                  OPRMSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPOPR1  
          UPDATE    OPROPRA1;OPRMROOM,OPRMDESC,OPRMLOC,OPRMUSR1:
                                  OPRMUSR2,OPRMUSR3,OPRMUSR4,OPRMUSR5:
                                  OPRMSTAT,OPRMSUN,OPRMMON,OPRMTUE,OPRMWED:
                                  OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                                  OPRMSPAR
          RETURN
.
WROPOPR1  RESET     KEY6
          WRITE     OPROPRA1,KEY6;KEY6,OPRMDESC,OPRMLOC,OPRMUSR1:
                                  OPRMUSR2,OPRMUSR3,OPRMUSR4,OPRMUSR5:
                                  OPRMSTAT,OPRMSUN,OPRMMON,OPRMTUE,OPRMWED:
                                  OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                                  OPRMSPAR
          RETURN  
.
DEOPOPR1  RESET     KEY6
          DELETE    OPROPRA1,KEY6
          RETURN
.
RAOPOPR2  MOVE      ZERO,OVRCD
          RESET     KEY46
          READ      OPROPRA2,KEY46;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPOPR2  MOVE      ZERO,OVRCD
          RESET     KEY46
          READ      OPROPRA2,KEY46;;
          RETURN  
.
RDOPOPR2  MOVE      ZERO,OVRCD
          RESET     KEY46
          READ      OPROPRA2,KEY46;OPRMROOM,OPRMDESC,OPRMLOC,OPRMUSR1:
                                  OPRMUSR2,OPRMUSR3,OPRMUSR4,OPRMUSR5:
                                  OPRMSTAT,OPRMSUN,OPRMMON,OPRMTUE,OPRMWED:
                                  OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                                  OPRMSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPOPR2  MOVE      ZERO,OVRCD
          READKS    OPROPRA2;OPRMROOM,OPRMDESC,OPRMLOC,OPRMUSR1:
                                  OPRMUSR2,OPRMUSR3,OPRMUSR4,OPRMUSR5:
                                  OPRMSTAT,OPRMSUN,OPRMMON,OPRMTUE,OPRMWED:
                                  OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                                  OPRMSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPOPR2  MOVE      ZERO,OVRCD
          READKP    OPROPRA2;OPRMROOM,OPRMDESC,OPRMLOC,OPRMUSR1:
                                  OPRMUSR2,OPRMUSR3,OPRMUSR4,OPRMUSR5:
                                  OPRMSTAT,OPRMSUN,OPRMMON,OPRMTUE,OPRMWED: 
                                  OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                                  OPRMSPAR
          GOTO      OVERCOND IF OVER

.******************************************************************************
.
.    Audit IO routines
.
ASOPOPR   MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRAUDRM,KEY19;;
          RETURN  
.
AKOPOPR   MOVE      ZERO,OVRCD
          READKS    OPRAUDRM;OPRMAUDD,OPRMAUDT,OPRMAUDP,OPRMAUDR,OPRMAUDS:
                    OPRMAUDO,OPRMROOM,OPRMDESC,OPRMLOC,OPRMUSR1,OPRMUSR2:
                    OPRMUSR3,OPRMUSR4,OPRMUSR5,OPRMSTAT,OPRMSUN,OPRMMON:
                    OPRMTUE,OPRMWED,OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                    OPRMSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
AWOPOPR   RESET     KEY19
          WRITE     OPRAUDRM,KEY19;KEY19,OPRMAUDS:
                    OPRMAUDO,OPRMROOM,OPRMDESC,OPRMLOC,OPRMUSR1,OPRMUSR2:
                    OPRMUSR3,OPRMUSR4,OPRMUSR5,OPRMSTAT,OPRMSUN,OPRMMON:
                    OPRMTUE,OPRMWED,OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                    OPRMSPAR
          RETURN  
.
AUOPOPR   UPDATE    OPRAUDRM;OPRMAUDD,OPRMAUDT,OPRMAUDP,OPRMAUDR,OPRMAUDS:
                    OPRMAUDO,OPRMROOM,OPRMDESC,OPRMLOC,OPRMUSR1,OPRMUSR2:
                    OPRMUSR3,OPRMUSR4,OPRMUSR5,OPRMSTAT,OPRMSUN,OPRMMON:
                    OPRMTUE,OPRMWED,OPRMTHU,OPRMFRI,OPRMSAT,OPRMGLDG,OPRMHOSP:
                    OPRMSPAR
          RETURN  
.
ADOPOPR   RESET     KEY19
          DELETE    OPRAUDRM,KEY19
          RETURN
.******************************************************************************
