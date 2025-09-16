.
.         positional read
.
RSLGDGW1  RESET     KEY7
          READ      LEGDGWA1,KEY7;;
          RETURN
.
.         read to see if record exists
.
RALGDGW1  MOVE      ZERO,OVRCD
          RESET     KEY7
          READ      LEGDGWA1,KEY7;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDLGDGW1  MOVE      ZERO,OVRCD
          RESET     KEY7
          READ      LEGDGWA1,KEY7;LPTDWDRG,LPTDWMDC,LPTDWDES,LPTDWLOW:
                                  LPTDWHIG,LPTDWRWG,LPTDWCLS,LPTDWDGV:
                                  LPTDWSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKLGDGW1  MOVE      ZERO,OVRCD
          READKS    LEGDGWA1;LPTDWDRG,LPTDWMDC,LPTDWDES,LPTDWLOW:
                             LPTDWHIG,LPTDWRWG,LPTDWCLS,LPTDWDGV:
                             LPTDWSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPLGDGW1  MOVE      ZERO,OVRCD
          READKP    LEGDGWA1;LPTDWDRG,LPTDWMDC,LPTDWDES,LPTDWLOW:
                             LPTDWHIG,LPTDWRWG,LPTDWCLS,LPTDWDGV:
                             LPTDWSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         write
.
WRLGDGW1  RESET     KEY7
          WRITE     LEGDGWA1,KEY7;LPTDWDRG,LPTDWMDC,LPTDWDES,LPTDWLOW:
                             LPTDWHIG,LPTDWRWG,LPTDWCLS,LPTDWDGV:
                             LPTDWSPA
          RETURN
.
.
.         positional read
.
RSLGDGW2  RESET     KEY11
          READ      LEGDGWA2,KEY11;;
          RETURN
.
.         read to see if record exists
.
RALGDGW2  MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      LEGDGWA2,KEY11;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDLGDGW2  MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      LEGDGWA2,KEY11;LPTDWDRG,LPTDWMDC,LPTDWDES,LPTDWLOW:
                                  LPTDWHIG,LPTDWRWG,LPTDWCLS,LPTDWDGV:
                                  LPTDWSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKLGDGW2  MOVE      ZERO,OVRCD
          READKS    LEGDGWA2;LPTDWDRG,LPTDWMDC,LPTDWDES,LPTDWLOW:
                             LPTDWHIG,LPTDWRWG,LPTDWCLS,LPTDWDGV:
                             LPTDWSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPLGDGW2  MOVE      ZERO,OVRCD
          READKP    LEGDGWA2;LPTDWDRG,LPTDWMDC,LPTDWDES,LPTDWLOW:
                             LPTDWHIG,LPTDWRWG,LPTDWCLS,LPTDWDGV:
                             LPTDWSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         positional read
.
RSLGDGW3  RESET     KEY67
          READ      LEGDGWA3,KEY67;;
          RETURN
.
.         read to see if record exists
.
RALGDGW3  MOVE      ZERO,OVRCD
          RESET     KEY67
          READ      LEGDGWA3,KEY67;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDLGDGW3  MOVE      ZERO,OVRCD
          RESET     KEY67
          READ      LEGDGWA3,KEY67;LPTDWDRG,LPTDWMDC,LPTDWDES,LPTDWLOW:
                                   LPTDWHIG,LPTDWRWG,LPTDWCLS,LPTDWDGV:
                                   LPTDWSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKLGDGW3  MOVE      ZERO,OVRCD
          READKS    LEGDGWA3;LPTDWDRG,LPTDWMDC,LPTDWDES,LPTDWLOW:
                             LPTDWHIG,LPTDWRWG,LPTDWCLS,LPTDWDGV:
                             LPTDWSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPLGDGW3  MOVE      ZERO,OVRCD
          READKP    LEGDGWA3;LPTDWDRG,LPTDWMDC,LPTDWDES,LPTDWLOW:
                             LPTDWHIG,LPTDWRWG,LPTDWCLS,LPTDWDGV:
                             LPTDWSPA
          GOTO      OVERCOND IF OVER
          RETURN
