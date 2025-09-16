. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSRPTFD.INC                                  *
. *                                                                      *
. *  Function          :   Received Patient Details Message File         *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsrptaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY20, KEY28                                  *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. *      V9.11.01 23/04/2009  Steve Armstrong  CAR 184640                *
. *               Added fields PMRPMEXP, PMRPPAD1, PMRPPAD2, PMRPPAD3,   *
. *               PMRPPAD4 & PMRPPPCD                                    *
. ************************************************************************
. *      V9.09.01 16/01/2008  Steve Armstrong  CAR                       *
. *               Mods to PMRPCONS & PMRPRFGP descriptions to be         *
. *               provider numbers instead of HCP codes.                 *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSRPTA1  IFILE SQL, FIXED=550, KEY="U1-20"
PMSRPTA2  IFILE SQL, FIXED=550, KEY="U21-28,1-20"
.
.Name     Type    Length Physical Start   Description
.----     ----    ------ -------- -----   -----------
DPMRPMES  DIM     20        20        1   Message Id
PMRPURNO  DIM      8         8       21   U/R Number
PMRPTITL  DIM      4         4       29   Title
PMRPSNAM  DIM     20        20       33   Surname
PMRPGNAM  DIM     25        25       53   Given Names
PMRPADD1  DIM     35        35       78   Address Line 1
PMRPADD2  DIM     35        35      113   Address Line 2
PMRPADD3  DIM     35        35      148   Address Line 3
PMRPADD4  DIM     35        35      183   Address Line 4
PMRPPOST  DIM      8         8      218   Postcode
PMRPTELP  DIM     20        20      226   Telephone - Private
PMRPTELB  DIM     20        20      246   Telephone - Business
PMRPPSEX  DIM      1         1      266   Sex
.                                           M - Male
.                                           F - Female
.                                           U - Unknown
.                                           I - Indeterminate
.                                           R - Intersex
PMRPPDOB  DIM      8         8      267   Date of Birth (ccyymmdd)
PMRPMEDI  DIM     11        11      275   Medicare Number
PMRPCEAS  DIM      1         1      286   Deceased Indicator
.                                           N = No
.                                           Y = Yes
PMRPDOFD  DIM      8         8      287   Date of Death (ccyymmdd)
PMRPALID  DIM     20        20      295   Alternate ID (right justified)
PMRPMOBL  DIM     20        20      315   Mobile Phone Number
PMRPUSID  DIM     10        10      335   Web User ID
PMRPEXPD  DIM      8         8      345   Referral Expiry Date (ccyymmdd)
PMRPCONS  DIM     10        10      353   Consultant Provider Number
PMRPRFGP  DIM     10        10      363   Referring GP Provider Number
PMRPMEXP  DIM      6         6      373   Medicare Expiry Date (ccyymm)
PMRPPAD1  DIM     35        35      379   Postal Address Line 1
PMRPPAD2  DIM     35        35      414   Postal Address Line 2
PMRPPAD3  DIM     35        35      449   Postal Address Line 3
PMRPPAD4  DIM     35        35      484   Postal Address Line 4
PMRPPPCD  DIM      8         8      519   Postal Address Postcode
PMRPSPAR  DIM     23        23      527   Spare Variable
.
.End of Record                      550
.
.
. Redefine form fields from key
. -----------------------------
PMRPMESI  FORM      20
