. V10.03.00 22/03/2012 PHA C-257776 Modified Elderly Mobility Scale
. *----------------------------------------------------------------------
. * Include Name  :   PMSEMSFD.INC
. *
. * Function      :   File Def'n Include for Patient System
. *                   Modified Elderly Mobility Scale
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsemsaf.dat
. *
. * Index Values  :   KEY24
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSEMSA1   IFILE    SQL, FIXED=169, KEY="U1-8,9-16,17-24"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEMVISN  DIM       8      8        1     Visit Number
PMEMADAT  DIM       8      8        9     Assessment Date
PMEMATIM  DIM       8      8        17    Assessment Time
PMEMLYSI  DIM       1      1        25    Lying to Sitting
PMEMSILY  DIM       1      1        26    Sitting to lying
PMEMSIST  DIM       1      1        27    Sit to Stand
PMEMSTAN  DIM       1      1        28    Stand
PMEMGAIT  DIM       1      1        29    Gait
PMEMTWLK  DIM       1      1        30    Timed Walk
PMEMFUNR  DIM       1      1        31    Functional Reach
PMEMSTPS  DIM       1      1        32    Steps
PMEMGUGO  DIM       4      4        33    Get Up and Go (seconds)
PMEMCDAT  DIM       8      8        37    Date record created
PMEMCTIM  DIM       8      8        45    Time record created
PMEMCUID  DIM       10     10       53    User who created record
PMEMUDAT  DIM       8      8        63    Date record updated
PMEMUTIM  DIM       8      8        71    Time record updated
PMEMUUID  DIM       10     10       79    User who updated record
PMEMSPAR  DIM       80     80       89    Spare
.
.End of Record                      169
.
