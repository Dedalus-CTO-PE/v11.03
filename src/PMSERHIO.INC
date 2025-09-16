.*****************************************************************************
.*        PMSERDIO.INC                                                       *
.*****************************************************************************
.
.         Index 1
.
RSPMERH1  RESET     KEY61
          READ      PMSERHA1,KEY61;;
          RETURN
.
RAPMERH1  RESET     KEY61
          MOVE      ZERO,OVRCD
          READ      PMSERHA1,KEY61;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMERH1  RESET     KEY61
          MOVE      ZERO,OVRCD
          READ      PMSERHA1,KEY61;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMERH1  MOVE      ZERO,OVRCD
          READKS    PMSERHA1;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMERH1  MOVE      ZERO,OVRCD
          READKP    PMSERHA1;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMERH1  UPDATE    PMSERHA1;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          RETURN
.
WRPMERH1  RESET     KEY61
          WRITE     PMSERHA1,KEY61;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          RETURN
.
DEPMERH1  RESET     KEY61
          DELETE    PMSERHA1,KEY61
          RETURN
.
.         Index 2
.
RSPMERH2  RESET     KEY69
          READ      PMSERHA2,KEY69;;
          RETURN
.
RAPMERH2  RESET     KEY69
          MOVE      ZERO,OVRCD
          READ      PMSERHA2,KEY69;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMERH2  RESET     KEY69
          MOVE      ZERO,OVRCD
          READ      PMSERHA2,KEY69;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMERH2  MOVE      ZERO,OVRCD
          READKS    PMSERHA2;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMERH2  MOVE      ZERO,OVRCD
          READKP    PMSERHA2;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMERH2  UPDATE    PMSERHA2;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          RETURN
.
WRPMERH2  RESET     KEY69
          WRITE     PMSERHA2,KEY69;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          RETURN
.
DEPMERH2  RESET     KEY69
          DELETE    PMSERHA2,KEY69
          RETURN
.
.
.         Index 3
.
RSPMERH3  RESET     KEY70
          READ      PMSERHA3,KEY70;;
          RETURN
.
RAPMERH3  RESET     KEY70
          MOVE      ZERO,OVRCD
          READ      PMSERHA3,KEY70;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMERH3  RESET     KEY70
          MOVE      ZERO,OVRCD
          READ      PMSERHA3,KEY70;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMERH3  MOVE      ZERO,OVRCD
          READKS    PMSERHA3;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMERH3  MOVE      ZERO,OVRCD
          READKP    PMSERHA3;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMERH3  UPDATE    PMSERHA3;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          RETURN
.
WRPMERH3  RESET     KEY70
          WRITE     PMSERHA3,KEY70;PMEHHOSP,PMEHFTID,PMEHRADV,PMEHPNUM:
                                  PMEHPTOT,PMEHDATE,PMEHNAME,PMEHPLID,PMEHBNUM:
                                  PMEHBNAM,PMEHBBSB,PMEHPREF,PMEHDAMT,PMEHSTAT:
                                  PMEHSPAR
          RETURN
.
DEPMERH3  RESET     KEY70
          DELETE    PMSERHA3,KEY70
          RETURN
.

