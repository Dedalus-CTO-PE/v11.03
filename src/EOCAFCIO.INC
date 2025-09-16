.
. **********************************************************
. *                                                        *
. *  Include Name :  EOCAFCIO                              *
. *                                                        *
. *  Function     :  I/O for eocafcaf file                 *
. *                                                        *
. *  Keys         :  KEY8, KEY16                           *
. *                                                        *
. *  Modifications:                                        *
. *                                                        *
. **********************************************************
.
RAECAFC1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      EOCAFCA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSECAFC1  RESET     KEY8
          READ      EOCAFCA1,KEY8;;
          RETURN  
.
RDECAFC1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      EOCAFCA1,KEY8;DECAFADM,ECAFDATE,ECAFSENT,ECAFSPAR  
          GOTO      OVERCOND IF OVER
          MOVE      DECAFADM,ECAFADMN
          RETURN  
.
RKECAFC1  MOVE      ZERO,OVRCD
          READKS    EOCAFCA1;DECAFADM,ECAFDATE,ECAFSENT,ECAFSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DECAFADM,ECAFADMN
          RETURN  
.
RPECAFC1  MOVE      ZERO,OVRCD
          READKP    EOCAFCA1;DECAFADM,ECAFDATE,ECAFSENT,ECAFSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DECAFADM,ECAFADMN
          RETURN  
.
WRECAFC1  RESET     KEY8
          WRITE     EOCAFCA1,KEY8;KEY8,ECAFDATE,ECAFSENT,ECAFSPAR
          RETURN  
.
UPECAFC1  UPDATE    EOCAFCA1;DECAFADM,ECAFDATE,ECAFSENT,ECAFSPAR
          RETURN  
.
DEECAFC1  RESET     KEY8
          DELETE    EOCAFCA1,KEY8
          RETURN
.
.------------------------------------------------------------------------------
.
RAECAFC2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      EOCAFCA2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSECAFC2  RESET     KEY16
          READ      EOCAFCA2,KEY16;;
          RETURN  
.
RDECAFC2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      EOCAFCA2,KEY16;DECAFADM,ECAFDATE,ECAFSENT,ECAFSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DECAFADM,ECAFADMN
          RETURN  
.
RKECAFC2  MOVE      ZERO,OVRCD
          READKS    EOCAFCA2;DECAFADM,ECAFDATE,ECAFSENT,ECAFSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DECAFADM,ECAFADMN
          RETURN  
.
RPECAFC2  MOVE      ZERO,OVRCD
          READKP    EOCAFCA2;DECAFADM,ECAFDATE,ECAFSENT,ECAFSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DECAFADM,ECAFADMN
          RETURN  
.
