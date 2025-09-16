.
. **********************************************************
. *                                                        *
. *  Include Name :  PATWSPIO                              *
. *                                                        *
. *  Function     :  I/O for patwspaf file                 *
. *                                                        *
. *  Keys         :  KEY6                                  *
. *                                                        *
. *  Modifications:  V5.00 16/08/89 Graeme Williams (I.B.A)*
. *                        Include written                 *
. *                                                        *
. **********************************************************
.
RDAWSPA1 MOVE      ZERO,OVRCD
         RESET     KEY6
         READ      PATWSPA1,KEY6;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSWSPA1 RESET     KEY6
         READ      PATWSPA1,KEY6;;
         RETURN  
.
RDWSPA1  MOVE      ZERO,OVRCD
         RESET     KEY6
         READ      PATWSPA1,KEY6;WSPWARD,WSPSPEC,WSPNBED,WSPSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RLWSPA1  MOVE      ZERO,OVRCD
         RESET     KEY6
         READ      PATWSPA1,KEY6;WSPWARD,WSPSPEC,WSPNBED,WSPSPAR
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         RETURN  
.
RDKWSPA1 MOVE      ZERO,OVRCD
         READKS    PATWSPA1;WSPWARD,WSPSPEC,WSPNBED,WSPSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDPWSPA1 MOVE      ZERO,OVRCD
         READKP    PATWSPA1;WSPWARD,WSPSPEC,WSPNBED,WSPSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRWSPA1  RESET     KEY6
         WRITE     PATWSPA1,KEY6;KEY6,WSPNBED,WSPSPAR
         RETURN  
.
UPWSPA1  UPDATE    PATWSPA1;WSPWARD,WSPSPEC,WSPNBED,WSPSPAR
         RETURN  
.
ULWSPA1  UNLOCK    PATWSPA1
         RETURN
DEWSPA1  RESET     KEY6
         DELETE    PATWSPA1,KEY6
         RETURN
