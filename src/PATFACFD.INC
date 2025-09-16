. V11.00.01 27/02/2020 EC - TSK 0816715 - Added created and update by fields
. V10.00.01 29/03/2010 JT - CAR 174079- Added PTFCINVN
. V9.12.001 01/10/2009 JP - CAR 174079- Added PTFCSTAT
. V9.09.001 24/10/2007 EC -CAR 151941 - Added PTFCOCGR and PTFCHFND            
. V9.05.001 09/06/2004 ML -CAR 79281 - Add FACODE to Indexes, increase PTFCSPAR
. V9.03.001 09/06/2004 Sylvek Litewka CAR 50371 - Added new field PTFCURNO 
. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATFACFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Future Actions                                  *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patfactf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 19, KEY 19, KEY 27                          *
.  *                                                                    *
.  **********************************************************************
.
PATFACT1   IFILE SQL, FIXED=216, KEY="U9-16,1-8,17-19"
PATFACT2   IFILE SQL, FIXED=216, KEY="U1-8,9-16,17-19"
PATFACT3   IFILE SQL, FIXED=216, KEY="U80-87,1-8,9-16,17-19"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
FADATE      DIM      8           8          1      FUTURE ACTION DATE (CCYYMMDD)
DFADMNO     DIM      8           8          9      ADMISSION NUMBER
FACODE      DIM      3           3         17      FUTURE ACTION CODE
FACOMM      DIM     60          60         20      COMMENTS
PTFCURNO    DIM      8           8         80      PATIENT UR NUMBER
PTFCDTCP    DIM      8           8         88      DATE COMPLETED
PTFCOCGR    DIM      3           3         96      OCCUPATIONAL GROUP (Cat w0)
PTFCHFND    DIM      6           6         99      HEALTH FUND 
PTFCSTAT    DIM      1           1         105     Status S=Suspended 
PTFCINVN    DIM      8           8         106     Invoice No (for Action Plan)
PTFCCDAT    DIM      8           8         114     Date Record Created CCYYMMDD
PTFCCTIM    DIM      8           8         122     Time Record Created HH:MM:SS
PTFCCUID    DIM     10          10         130     WEB User ID Created websecaf
PTFCUDAT    DIM      8           8         140     Date Record Updated CCYYMMDD
PTFCUTIM    DIM      8           8         148     Time Record Updated HH:MM:SS
PTFCUUID    DIM     10          10         156     WEB User ID Updated websecaf
PTFCSPAR    DIM     50          50         166     SPARE
.
.End of Record                             216
.
.  redefine form fields for key
.  ----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
FADMNO     FORM         8             9      ADMISSION NUMBER
