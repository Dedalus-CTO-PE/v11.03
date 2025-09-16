.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOCST                              *
. *                                                        *
. *  Function     :  I/O for patcstsf file                 *
. *                                                        *
. *  Keys         :  KEY9                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDCSTS1
         MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      PATCSTS1,KEY9;CCCODE,CCCYYMM,CCADMN,CCABDAY:
                                 CCSAMED,CCSMDAY,CCBOARD,CCBRDAY,CCSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKCSTS1
         MOVE      ZERO,OVRCD
         READKS    PATCSTS1;CCCODE,CCCYYMM,CCADMN,CCABDAY:
                            CCSAMED,CCSMDAY,CCBOARD,CCBRDAY,CCSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRCSTS1
         RESET     KEY9
         WRITE     PATCSTS1,KEY9;KEY9,CCADMN,CCABDAY:
                            CCSAMED,CCSMDAY,CCBOARD,CCBRDAY,CCSPARE
         RETURN  
.
UPCSTS1
         UPDATE    PATCSTS1;CCCODE,CCCYYMM,CCADMN,CCABDAY:
                            CCSAMED,CCSMDAY,CCBOARD,CCBRDAY,CCSPARE
         RETURN  
.
DECSTS1
         RESET     KEY9
         DELETE    PATCSTS1,KEY9
         RETURN
.
RDSCSTS1
         RESET     KEY9
         READ      PATCSTS1,KEY9;;
         RETURN  
.                                                                                                                       
