. ************************************************************
. *                                                          *
. * Include Name :  WATWTAFD                                 *
. *                                                          *
. * Function     :  File Definition Include for Waiting List *
. *                 Movement Analysis                        *
. *                 Procedure Status (WMSTAT) = 1, 2 and 3   *
. *                                                          *
. * File Type    :  SQL                                      *
. *                                                          *
. * File Name    :  watwtaaf.dat                             *
. *                                                          *
. * Keys         :  KEY 24, KEY 24, KEY 24                   *
. *                                                          *
. * Modifications:                                           *
. *                                                          *
. ************************************************************
.
WATWTAA1   IFILE SQL, FIXED=90, KEY="U1-6,16-24,7-12,13-15"
WATWTAA2   IFILE SQL, FIXED=90, KEY="U1-6,7-12,16-24,13-15"
WATWTAA3   IFILE SQL, FIXED=90, KEY="U1-6,13-15,16-24,7-12"
.
.NAME      TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----      ----   ------  --------   -----     -----------
WTWTDATE    DIM        6         6       1     Period Date (CCYYMM)
WTWTDOCT    DIM        6         6       7     Doctor Code
WTWTUNIT    DIM        3         3      13     Unit/Clinic Code
WTWTPROC    DIM        9         9      16     Procedure Code     
WTWTMEAN    FORM       4         3      25     Mean Number of Days  
WTWTMAX     FORM       4         3      28     Maximum Number of Days
.
. The following three fields contain the number of patients cancelled and
. put back on the waiting list by respectively the hospital, patient and other
. these are distinguished by indicator 2 for Category BC. 
.                              H - Hospital
.                              P - Patient
.
WTWTHOSP    FORM       8         5      31     Cancelled by Hospital
WTWTPAT     FORM       8         5      36     Cancelled by Patient
WTWTOTH     FORM       8         5      41     Cancelled by Other
.
WTWTOPEN    FORM       8         5      46     No. on W/List at Start of Period
WTWTADD     FORM       8         5      51     No. added W/List During Period
WTWTBOOK    FORM       8         5      56     Number Booked During Period
WTWTADMT    FORM       8         5      61     Number Admitted During Period
WTWTDSCH    FORM       8         5      66     Number Discharged During Period
WTWTCANL    FORM       8         5      71     Number Removed During Period
WTWTTDAY    FORM       8         5      76     Total number of wait days
.
WTWTSPAR    DIM        9         9      81     Spare Variable        
.
.End of Record                          90
