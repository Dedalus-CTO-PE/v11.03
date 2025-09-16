.
. OUTUATIO.INC
. ------------
. Filename       :  outuataf.dat
. Description    :  Outpatients Unattendance File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY19     DIM       19
. Modifications  :  V5.01.01  09/01/90  Eric Phan  SRF 103335
.                             Include Written.
.
RAOPUAT1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OUTUATA1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSOPUAT1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OUTUATA1,KEY19;;
          RETURN
.
RDOPUAT1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OUTUATA1,KEY19;DOPUAOUT,OPUAURNO,DOPUAUNI,OPUASITE,OPUACLIN:
                                   OPUADATE,OPUASTRT,OPUASLOT,OPUATIME,OPUACTYP:
                                   OPUASRCR,OPUACOMP,OPUACLAS,OPUAINSR,OPUAATTN:
                                   OPUADOCT,OPUAPCAT,OPUAPRTY,OPUAUSR1,OPUAUSR2:
                                   OPUAUSR3,OPUAUSR4,OPUAUDAT,OPUAUTIM,OPUATYPE:
                                   OPUASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPUAOUT,OPUAOUTN
          MOVE      DOPUAUNI,OPUAUNIQ
          RETURN
.
RKOPUAT1  MOVE      ZERO,OVRCD
          READKS    OUTUATA1;DOPUAOUT,OPUAURNO,DOPUAUNI,OPUASITE,OPUACLIN:
                             OPUADATE,OPUASTRT,OPUASLOT,OPUATIME,OPUACTYP:
                             OPUASRCR,OPUACOMP,OPUACLAS,OPUAINSR,OPUAATTN:
                             OPUADOCT,OPUAPCAT,OPUAPRTY,OPUAUSR1,OPUAUSR2:
                             OPUAUSR3,OPUAUSR4,OPUAUDAT,OPUAUTIM,OPUATYPE:
                             OPUASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPUAOUT,OPUAOUTN
          MOVE      DOPUAUNI,OPUAUNIQ
          RETURN
.
RPOPUAT1  MOVE      ZERO,OVRCD
          READKP    OUTUATA1;DOPUAOUT,OPUAURNO,DOPUAUNI,OPUASITE,OPUACLIN:
                             OPUADATE,OPUASTRT,OPUASLOT,OPUATIME,OPUACTYP:
                             OPUASRCR,OPUACOMP,OPUACLAS,OPUAINSR,OPUAATTN:
                             OPUADOCT,OPUAPCAT,OPUAPRTY,OPUAUSR1,OPUAUSR2:
                             OPUAUSR3,OPUAUSR4,OPUAUDAT,OPUAUTIM,OPUATYPE:
                             OPUASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPUAOUT,OPUAOUTN
          MOVE      DOPUAUNI,OPUAUNIQ
          RETURN
.
UPOPUAT1  MOVE      ZERO,OVRCD
          MOVE      OPUAOUTN,DOPUAOUT
          MOVE      OPUAUNIQ,DOPUAUNI
          UPDATE    OUTUATA1;DOPUAOUT,OPUAURNO,DOPUAUNI,OPUASITE,OPUACLIN:
                             OPUADATE,OPUASTRT,OPUASLOT,OPUATIME,OPUACTYP:
                             OPUASRCR,OPUACOMP,OPUACLAS,OPUAINSR,OPUAATTN:
                             OPUADOCT,OPUAPCAT,OPUAPRTY,OPUAUSR1,OPUAUSR2:
                             OPUAUSR3,OPUAUSR4,OPUAUDAT,OPUAUTIM,OPUATYPE:
                             OPUASPAR
          RETURN
.
WROPUAT1  RESET     KEY19
          MOVE      OPUAOUTN,DOPUAOUT
          MOVE      OPUAUNIQ,DOPUAUNI
          WRITE     OUTUATA1,KEY19;KEY19,OPUASITE,OPUACLIN:
                                   OPUADATE,OPUASTRT,OPUASLOT,OPUATIME,OPUACTYP:
                                   OPUASRCR,OPUACOMP,OPUACLAS,OPUAINSR,OPUAATTN:
                                   OPUADOCT,OPUAPCAT,OPUAPRTY,OPUAUSR1,OPUAUSR2:
                                   OPUAUSR3,OPUAUSR4,OPUAUDAT,OPUAUTIM,OPUATYPE:
                                   OPUASPAR
          RETURN
.
DEOPUAT1  RESET     KEY19
          DELETE    OUTUATA1,KEY19
          RETURN
.
