.
. OUTSIPIO.INC
. ------------
. Filenames       : outsipaf
. Description     : Outpatients 'Site Specific Parameters File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY6    DIM    6        KEY FOR OUTSIPA1
.
. -----------------------------------------
. ------- I/O routines for OUTSIPA1 -------
. -----------------------------------------
.
RSOTSIP1  RESET     KEY6
          READ      OUTSIPA1,KEY6;;
          RETURN
.
RAOTSIP1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      OUTSIPA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTSIP1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      OUTSIPA1,KEY6;OTSPSITE,OTSPXC01,OTSPXC02,OTSPXC03:
                                  OTSPXC04,OTSPXC05,OTSPXC06,OTSPXC07,OTSPXC08:
                                  OTSPXC09,OTSPXC10,OTSPXC11,OTSPXC12,OTSPXC13:
                                  OTSPXC14,OTSPXC15,OTSPXC16,OTSPXC17,OTSPXC18:
                                  OTSPXC19,OTSPXC20,OTSPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTSIP1  MOVE      ZERO,OVRCD
          READKS    OUTSIPA1;OTSPSITE,OTSPXC01,OTSPXC02,OTSPXC03:
                             OTSPXC04,OTSPXC05,OTSPXC06,OTSPXC07,OTSPXC08:
                             OTSPXC09,OTSPXC10,OTSPXC11,OTSPXC12,OTSPXC13:
                             OTSPXC14,OTSPXC15,OTSPXC16,OTSPXC17,OTSPXC18:
                             OTSPXC19,OTSPXC20,OTSPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTSIP1  MOVE      ZERO,OVRCD
          READKP    OUTSIPA1;OTSPSITE,OTSPXC01,OTSPXC02,OTSPXC03:
                             OTSPXC04,OTSPXC05,OTSPXC06,OTSPXC07,OTSPXC08:
                             OTSPXC09,OTSPXC10,OTSPXC11,OTSPXC12,OTSPXC13:
                             OTSPXC14,OTSPXC15,OTSPXC16,OTSPXC17,OTSPXC18:
                             OTSPXC19,OTSPXC20,OTSPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTSIP1  UPDATE    OUTSIPA1;OTSPSITE,OTSPXC01,OTSPXC02,OTSPXC03:
                             OTSPXC04,OTSPXC05,OTSPXC06,OTSPXC07,OTSPXC08:
                             OTSPXC09,OTSPXC10,OTSPXC11,OTSPXC12,OTSPXC13:
                             OTSPXC14,OTSPXC15,OTSPXC16,OTSPXC17,OTSPXC18:
                             OTSPXC19,OTSPXC20,OTSPSPAR
          RETURN
.
WROTSIP1  RESET     KEY6
          WRITE     OUTSIPA1,KEY6;OTSPSITE,OTSPXC01,OTSPXC02,OTSPXC03:
                                  OTSPXC04,OTSPXC05,OTSPXC06,OTSPXC07,OTSPXC08:
                                  OTSPXC09,OTSPXC10,OTSPXC11,OTSPXC12,OTSPXC13:
                                  OTSPXC14,OTSPXC15,OTSPXC16,OTSPXC17,OTSPXC18:
                                  OTSPXC19,OTSPXC20,OTSPSPAR
          RETURN
.
DEOTSIP1  RESET     KEY6
          DELETE    OUTSIPA1,KEY6
          RETURN
...............................................................................
