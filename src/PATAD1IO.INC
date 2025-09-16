.
.         FILE  I/O REQUESTS FOR ALL DOCTOR AUDIT FILES
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
RDSDAUD   READ      PATAD1A1,ZERO;SECTOR
          RETURN
.
CRDAUD    CLOSE     PATAD1A1
          PREP      PATAD1A1,"patad1af"
          CLOSE     PATAD1A1
          PREP      PATAD1A1,"patad1af"
          WRITE     PATAD1A1,ZERO;SEC1
          WEOF      PATAD1A1,SEC1
          RETURN
.
RDDAUD    READ      PATAD1A1,SECTOR;CDD,CMM,CCC,CYY,TIMEIS,ACTION,PASSCODE:
                                    SDCODE,SDTITL,SDGNAME,SDSNAME,SDRTYPE:
                                    SDRNAME,SDSADD1,SDSADD2,SDSADD3,SDSADD4
.
          ADD       ONE,SECTOR
          READ      PATAD1A1,SECTOR;SDSPOST,SDOSEML,SDTELES,SDTELEP,SDPAGER:
                                    SDASSOC1,SDASSOC2,SDASSOC3,SDASSOC4
.
          ADD       ONE,SECTOR
          READ      PATAD1A1,SECTOR;SDASSOC5,SDPROV,SDTELEH,SDHADD1,SDHADD2:
                                    SDHADD3,SDHADD4,SDHPOST
.
          ADD       ONE,SECTOR
          READ      PATAD1A1,SECTOR;SDOHEML,SDAFIRST,SDALAST,SDAYEARS,SDACCRED:
                                    SDRTYPE2,SDRTYPE3,SDRTYPE4,SDRTYPE5,SDBIRTH:
                                    SDHCSCOD,SDALEVEL,SDRSTAT,SDOFAXN,SDOHFAX:
                                    SDOMOBL,SDOGLCC,SDOWHDP,SDOMREG,SDONHSN:
                                    SUPDDTE,SUPDTME,SDOUDF1,SDOUDF2,SDOUDF3:
                                    SDOUDF4,SDOUDF5,SDOINSC
.
          ADD       ONE,SECTOR
          READ      PATAD1A1,SECTOR;SDOINSN,SDOINSF,SDOINST,SDOREGN,SDOREGF:
                                    SDOREGT,SDOVISA,SDOCOMT,SDOPREF,SDOABNN:
                                    SDODINA,SDODACT,SDODACO,SDOPRO2,SDOPRO3:
                                    SDOPRO4,SDOPRO5
.
          RETURN
.
WRDAUD    CLOCK     TIME,TIMEIS
          READ      PATAD1A1,ZERO;SECTOR
          WRITE     PATAD1A1,SECTOR;CDD,CMM,CCC,CYY,TIMEIS,ACTION,PASSCODE:
                                    SDCODE,SDTITL,SDGNAME,SDSNAME,SDRTYPE:
                                    SDRNAME,SDSADD1,SDSADD2,SDSADD3,SDSADD4
.
          ADD       ONE,SECTOR
          WRITE     PATAD1A1,SECTOR;SDSPOST,SDOSEML,SDTELES,SDTELEP,SDPAGER:
                                    SDASSOC1,SDASSOC2,SDASSOC3,SDASSOC4
.
          ADD       ONE,SECTOR
          WRITE     PATAD1A1,SECTOR;SDASSOC5,SDPROV,SDTELEH,SDHADD1,SDHADD2:
                                    SDHADD3,SDHADD4,SDHPOST
.
          ADD       ONE,SECTOR
          WRITE     PATAD1A1,SECTOR;SDOHEML,SDAFIRST,SDALAST,SDAYEARS,SDACCRED:
                                    SDRTYPE2,SDRTYPE3,SDRTYPE4,SDRTYPE5,SDBIRTH:
                                    SDHCSCOD,SDALEVEL,SDRSTAT,SDOFAXN,SDOHFAX:
                                    SDOMOBL,SDOGLCC,SDOWHDP,SDOMREG,SDONHSN:
                                    SUPDDTE,SUPDTME,SDOUDF1,SDOUDF2,SDOUDF3:
                                    SDOUDF4,SDOUDF5,SDOINSC
.
          ADD       ONE,SECTOR
          WRITE     PATAD1A1,SECTOR;SDOINSN,SDOINSF,SDOINST,SDOREGN,SDOREGF:
                                    SDOREGT,SDOVISA,SDOCOMT,SDOPREF,SDOABNN:
                                    SDODINA,SDODACT,SDODACO,SDOPRO2,SDOPRO3:
                                    SDOPRO4,SDOPRO5
.
          ADD       ONE,SECTOR
          WEOF      PATAD1A1,SECTOR
          WRITE     PATAD1A1,ZERO;SECTOR
          RETURN
+
