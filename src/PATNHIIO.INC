.
. Include   :  PATNHIIO.INC
.
. File      :  patnhiaf.dat, pataudnh.dat
. Keys      :  KEY6, KEY19
.
RSPTNHI1  RESET     KEY6
          READ      PATNHIA1,KEY6;;
          RETURN
.
RAPTNHI1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATNHIA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTNHI1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATNHIA1,KEY6;PTNHCAT,PTNHNHI,PTNHCODE,PTNHIPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTNHI1  MOVE      ZERO,OVRCD
          READKS    PATNHIA1;PTNHCAT,PTNHNHI,PTNHCODE,PTNHIPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTNHI1  MOVE      ZERO,OVRCD
          READKP    PATNHIA1;PTNHCAT,PTNHNHI,PTNHCODE,PTNHIPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTNHI1  UPDATE    PATNHIA1;PTNHCAT,PTNHNHI,PTNHCODE,PTNHIPAR
          RETURN
.
WRPTNHI1  RESET     KEY6
          WRITE     PATNHIA1,KEY6;PTNHCAT,PTNHNHI,PTNHCODE,PTNHIPAR
          RETURN
.
DEPTNHI1  RESET     KEY6
          DELETE    PATNHIA1,KEY6
          RETURN
.
. Audits
.
ASPTNHI   RESET     KEY19                                                       
          READ      PATAUDNH,KEY19;;                                            
          RETURN
.
AKPTNHI                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATAUDNH;PTNHAUDD,PTNHAUDT,PTNHAUDP,PTNHAUDR,PTNHAUDS:      
                    PTNHAUDO,PTNHCAT,PTNHNHI,PTNHCODE,PTNHIPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AUPTNHI                                                                         
          UPDATE    PATAUDNH;PTNHAUDD,PTNHAUDT,PTNHAUDP,PTNHAUDR,PTNHAUDS:      
                    PTNHAUDO,PTNHCAT,PTNHNHI,PTNHCODE,PTNHIPAR
          RETURN
.
AWPTNHI   RESET     KEY19                                                       
          WRITE     PATAUDNH,KEY19;PTNHAUDD,PTNHAUDT,PTNHAUDP,PTNHAUDR,PTNHAUDS:
                    PTNHAUDO,PTNHCAT,PTNHNHI,PTNHCODE,PTNHIPAR
          RETURN
.
ADPTNHI   RESET     KEY19                                                       
          DELETE    PATAUDNH,KEY19;                                             
          RETURN
