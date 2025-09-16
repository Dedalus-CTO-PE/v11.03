.*******************************************************************************
.* Include Name  : PRSADFIO.INC                                                *
.*                                                                             *
.* Description   : File IO include for YTD Advised for previous month figures  *
.*                                                                             *
.* File Name     : prsadfaf.dat                                                *
.*                                                                             *
.* Keys          : KEY10                                                       *
.*                                                                             *
.*******************************************************************************
RAPRADF1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      PRSADFA1,KEY10;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSPRADF1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      PRSADFA1,KEY10;;
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDPRADF1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      PRSADFA1,KEY10;PRAFDATE,PRAFREFR,PRAFSEPS,PRAFBDAY,PRAFSAME
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKPRADF1  MOVE      ZERO,OVRCD
          READKS    PRSADFA1;PRAFDATE,PRAFREFR,PRAFSEPS,PRAFBDAY,PRAFSAME
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPPRADF1  MOVE      ZERO,OVRCD
          READKP    PRSADFA1;PRAFDATE,PRAFREFR,PRAFSEPS,PRAFBDAY,PRAFSAME
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPPRADF1  MOVE      CHADMN,DCHADMN
          UPDATE    PRSADFA1;PRAFDATE,PRAFREFR,PRAFSEPS,PRAFBDAY,PRAFSAME
          RETURN
.
WRPRADF1  RESET     KEY10
          WRITE     PRSADFA1,KEY10;PRAFDATE,PRAFREFR,PRAFSEPS,PRAFBDAY,PRAFSAME
          RETURN  
.
DEPRADF1  RESET     KEY10
          DELETE    PRSADFA1,KEY10
          RETURN
.
