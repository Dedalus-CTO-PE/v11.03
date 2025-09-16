.
. **********************************************************
. *                                                        *
. *  Include Name :  PATWSSIO                              *
. *                                                        *
. *  Function     :  I/O for patwssaf file                 *
. *                                                        *
. *  Keys         :  KEY12                                 *
. *                                                        *
. *  Modifications:  V5.00 19/08/89 Graeme Williams (I.B.A)*
. *                        Include written                 *
. *                                                        *
. **********************************************************
.
RDAWSSA1 MOVE      ZERO,OVRCD
         RESET     KEY12
         READ      PATWSSA1,KEY12;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSWSSA1 RESET     KEY12
         READ      PATWSSA1,KEY12;;
         RETURN  
.
RDWSSA1  MOVE      ZERO,OVRCD
         RESET     KEY12
         READ      PATWSSA1,KEY12;WSSDATE,WSSWARD,WSSSPEC:
                            WSSADMN,WSSTRIN,WSSDOCS,WSSBDAY,WSSDSCH,WSSTOUT:
                            WSSSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKWSSA1 MOVE      ZERO,OVRCD
         READKS    PATWSSA1;WSSDATE,WSSWARD,WSSSPEC:
                            WSSADMN,WSSTRIN,WSSDOCS,WSSBDAY,WSSDSCH,WSSTOUT:
                            WSSSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDPWSSA1 MOVE      ZERO,OVRCD
         READKP    PATWSSA1;WSSDATE,WSSWARD,WSSSPEC:
                            WSSADMN,WSSTRIN,WSSDOCS,WSSBDAY,WSSDSCH,WSSTOUT:
                            WSSSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRWSSA1  RESET     KEY12
         WRITE     PATWSSA1,KEY12;KEY12:
                            WSSADMN,WSSTRIN,WSSDOCS,WSSBDAY,WSSDSCH,WSSTOUT:
                            WSSSPAR
         RETURN  
.
UPWSSA1  UPDATE    PATWSSA1;WSSDATE,WSSWARD,WSSSPEC:
                            WSSADMN,WSSTRIN,WSSDOCS,WSSBDAY,WSSDSCH,WSSTOUT:
                            WSSSPAR
         RETURN  
.
DEWSSA1  RESET     KEY12
         DELETE    PATWSSA1,KEY12
         RETURN
