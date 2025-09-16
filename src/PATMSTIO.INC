.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOMST                              *
. *                                                        *
. *  Function     :  I/O for patmstsf file                 *
. *                                                        *
. *  Keys         :  KEY15                                 *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDMSTS1  MOVE      ZERO,OVRCD
         RESET     KEY15
         READ      PATMSTS1,KEY15;MSWARD,MSDCLS,MSWCLS,MSDATE:
                                  MSNPRAD,MSNPBAD,MSTRIN,MSTROUT,MSDSCH:
                                  MSNBDAY,MSBBDAY,MSDEATH:
                                  MSBPRAD,MSBPBAD,MSLVBD,MSAEADM:
                                  MSOBSTH,MSOUTTH,MSDYMTH,MSNOPAT:
                                  MSSEPBD,DMSACBDY,MSSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DMSACBDY,MSACBDAY
         RETURN  
.
RDKMSTS1 MOVE      ZERO,OVRCD
         READKS    PATMSTS1;MSWARD,MSDCLS,MSWCLS,MSDATE:
                            MSNPRAD,MSNPBAD,MSTRIN,MSTROUT,MSDSCH:
                            MSNBDAY,MSBBDAY,MSDEATH:
                            MSBPRAD,MSBPBAD,MSLVBD,MSAEADM:
                            MSOBSTH,MSOUTTH,MSDYMTH,MSNOPAT:
                            MSSEPBD,DMSACBDY,MSSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DMSACBDY,MSACBDAY
         RETURN  
.
WRMSTS1  RESET     KEY15
         MOVE      MSACBDAY,DMSACBDY
         WRITE     PATMSTS1,KEY15;KEY15:
                            MSNPRAD,MSNPBAD,MSTRIN,MSTROUT,MSDSCH:
                            MSNBDAY,MSBBDAY,MSDEATH:
                            MSBPRAD,MSBPBAD,MSLVBD,MSAEADM:
                            MSOBSTH,MSOUTTH,MSDYMTH,MSNOPAT:
                            MSSEPBD,DMSACBDY,MSSPARE
         RETURN  
.
UPMSTS1  MOVE      MSACBDAY,DMSACBDY
         UPDATE    PATMSTS1;MSWARD,MSDCLS,MSWCLS,MSDATE:
                            MSNPRAD,MSNPBAD,MSTRIN,MSTROUT,MSDSCH:
                            MSNBDAY,MSBBDAY,MSDEATH:
                            MSBPRAD,MSBPBAD,MSLVBD,MSAEADM:
                            MSOBSTH,MSOUTTH,MSDYMTH,MSNOPAT:
                            MSSEPBD,DMSACBDY,MSSPARE
         RETURN  
.
DEMSTS1  RESET     KEY15
         DELETE    PATMSTS1,KEY15
         RETURN
.
RDSMSTS1 RESET     KEY15
         READ      PATMSTS1,KEY15;;
         RETURN  
.
