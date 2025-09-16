.
. OPRPRFIO.INC
. ------------
. Filename       :  oprprfaf.dat
. Description    :  Operating Team Preference - File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY32     DIM       32 
.                   KEY19     DIM       19  ( audits )
. Modifications  :                               
.         V9.04.01  24/02/2005 Lina Vo     CAR 56404                
.                   Increase size of Preference from DIM9 to DIM15  
.                   Added Quantity field. Increase key size.        
.                   V5.01.01  20/12/89  E.Phan
.                   Changed key & length.
.                   22/01/90  Bill Dew : addition of audit IO routines
.                   09/10/90  J. Ceniza. Changed according to new specs.
.                   09/09/1994 Max White    Hawkes Bay Mods
.                   Added new Doctor Code field OPPRDCOD to key, to
.                   allow for Surgeon & Anaesthetist Preferences
.                   to be recorded for the same Team.
.
RAOPPRF1  MOVE      ZERO,OVRCD
          RESET     KEY32
          READ      OPRPRFA1,KEY32;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPPRF1  MOVE      ZERO,OVRCD
          RESET     KEY32
          READ      OPRPRFA1,KEY32;;
          RETURN  
.
RDOPPRF1  MOVE      ZERO,OVRCD
          RESET     KEY32
          READ      OPRPRFA1,KEY32;OPPRUNIQ,OPPRTEAM,OPPRPREF,OPPRDCOD:
                                   OPPRPQTY,OPPRSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPPRF1  MOVE      ZERO,OVRCD
          READKS    OPRPRFA1;OPPRUNIQ,OPPRTEAM,OPPRPREF,OPPRDCOD:
                             OPPRPQTY,OPPRSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPPRF1  MOVE      ZERO,OVRCD
          READKP    OPRPRFA1;OPPRUNIQ,OPPRTEAM,OPPRPREF,OPPRDCOD:
                             OPPRPQTY,OPPRSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPPRF1  UPDATE    OPRPRFA1;OPPRUNIQ,OPPRTEAM,OPPRPREF,OPPRDCOD:
                             OPPRPQTY,OPPRSPAR
          RETURN
.
WROPPRF1  RESET     KEY32
          WRITE     OPRPRFA1,KEY32;OPPRUNIQ,OPPRTEAM,OPPRPREF,OPPRDCOD:
                                   OPPRPQTY,OPPRSPAR
          RETURN  
.
DEOPPRF1  RESET     KEY32
          DELETE    OPRPRFA1,KEY32
          RETURN
.
.******************************************************************************
.
.    Audit IO routines
.
ASOPPRF   MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRAUDPR,KEY19;;
          RETURN  
.
AKOPPRF   MOVE      ZERO,OVRCD
          READKS    OPRAUDPR;OPPRAUDD,OPPRAUDT,OPPRAUDP,OPPRAUDR,OPPRAUDS:
                             OPPRAUDO,OPPRUNIQ,OPPRTEAM,OPPRPREF,OPPRDCOD:
                             OPPRPQTY,OPPRSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
AWOPPRF   RESET     KEY19
          WRITE     OPRAUDPR,KEY19;KEY19,OPPRAUDS,OPPRAUDO:
                             OPPRUNIQ,OPPRTEAM,OPPRPREF,OPPRDCOD:
                             OPPRPQTY,OPPRSPAR
          RETURN  
.
AUOPPRF   UPDATE    OPRAUDPR;OPPRAUDD,OPPRAUDT,OPPRAUDP,OPPRAUDR,OPPRAUDS:
                             OPPRAUDO,OPPRUNIQ,OPPRTEAM,OPPRPREF,OPPRDCOD:
                             OPPRPQTY,OPPRSPAR
          RETURN  
.
ADOPPRF   RESET     KEY19
          DELETE    OPRAUDPR,KEY19
          RETURN
.******************************************************************************
