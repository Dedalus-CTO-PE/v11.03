. V10.03.00 15/03/2012 PHA C-257776 Motor Assessment Scale Table
. *----------------------------------------------------------------------
. * Include Name  :   PMSMOTFD.INC
. *
. * Function      :   File Def'n Include for Patient System
. *                   Motor Assessment Scale
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmotaf.dat
. *
. * Index Values  :   KEY24
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMOTA1   IFILE    SQL, FIXED=165, KEY="U1-8,9-16,17-24"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMAVISN  DIM       8      8        1     Visit Number
PMMAADAT  DIM       8      8        9     Assessment Date
PMMAATIM  DIM       8      8        17    Assessment Time
PMMASUSL  DIM       1      1        25    Supine to side lying
PMMASUSI  DIM       1      1        26    Supine to sitting on bed
PMMABASI  DIM       1      1        27    Balanced sitting
PMMASIST  DIM       1      1        28    Sitting to standing
PMMAWALK  DIM       1      1        29    Walking
PMMAUARM  DIM       1      1        30    Upper arm function
PMMAHMOV  DIM       1      1        31    Hand movements
PMMAAHAN  DIM       1      1        32    Advanced hand movements
PMMACDAT  DIM       8      8        33    Date record created
PMMACTIM  DIM       8      8        41    Time record created
PMMACUID  DIM       10     10       49    User who created record
PMMAUDAT  DIM       8      8        59    Date record updated
PMMAUTIM  DIM       8      8        67    Time record updated
PMMAUUID  DIM       10     10       75    User who updated record
PMMASPAR  DIM       80     80       85    Spare
.
.End of Record                      165
.
