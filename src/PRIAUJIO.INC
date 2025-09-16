.  
.         INCLUDE NAME : PRIAUJIO.INC 
.
.         Copied and modified from PPPIOAUJ.INC    23/07/91
.  
.         FILE  I/O REQUESTS FOR ALL JOURNAL AUDIT FILES 
.  
.OVRCD  FORM            1             0=NOT OVER 
.                                     1= OVER 
.  
.         NOTE:-
.                  UPAAAX  IS THE WRITE CALL
.                  RDAAAX  IS THE READ CALL
.                  RDSAAAX  IS THE READ SECTOR 0 CALL
.                  WRSAAAX  IS THE WRITE ONE TO SECTOR 0 CALL
.
RDAUDJ  READ       PRIAUJXX,SECTOR;AJRECCD,AJBATCH,AJBATOT,AJDESC:    
                                  AJOPER,AJDEBT,AJNAME,AJDATE:
                                  AJTIME,AJINVNO,AJAMT,AJTYPE,AJTDESC,AJSCAN
        RETURN
.
RDSAUDJ READ       PRIAUJXX,ZERO;SECTOR,AJSTAT
        RETURN
.
WRSAUDJ WRITE      PRIAUJXX,ZERO;SEC1,AJSTAT
        WEOF       PRIAUJXX,SEC1
        RETURN
.
WRSAUDJX WRITAB    PRIAUJXX,ZERO;*6,AJSTAT
         RETURN
.
UPAUDJ  READ       PRIAUJXX,ZERO;SECTOR,AJSTAT
        WRITE      PRIAUJXX,SECTOR;AJRECCD,AJBATCH,AJBATOT,AJDESC:
                                  AJOPER,AJDEBT,AJNAME:
                                  AJDATE,AJTIME,AJINVNO,AJAMT:
                                  AJTYPE,AJTDESC,AJSCAN
        ADD        ONE,SECTOR
        WEOF       PRIAUJXX,SECTOR
        WRITE      PRIAUJXX,ZERO;SECTOR,AJSTAT
        RETURN
