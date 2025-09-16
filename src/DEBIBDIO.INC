.
. DEBIBDIO
. --------
. Filename     : xxxxxxxx.txt   (xxxxxxxx = user defined file name)
.
RKDBIB1   MOVE      ZERO,OVRCD
          READ      DEBIBDA1,SECTOR;DBIBDEBT,DBIBITEM,DBIBSERD,DBIBDREF:
                                    DBIBOREF,DBIBQTY,DBIBPRIC,DBIBEXTP:
                                    DBIBGST,DBIBCMT1,DBIBCMT2,DBIBCMT3:
                                    DBIBCMT4
          GOTO      OVERCOND IF OVER
          RETURN
.
WRDBIB1   WRITAB    DEBIBDA1,SECTOR;DBIBDEBT,DBIBITEM,DBIBSERD,DBIBDREF:
                                    DBIBOREF,DBIBQTY,DBIBPRIC,DBIBEXTP:
                                    DBIBGST,DBIBCMT1,DBIBCMT2,DBIBCMT3:
                                    DBIBCMT4
          RETURN
.
