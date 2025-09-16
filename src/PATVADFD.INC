. ************************************************************************
. *      Include Name : PATVADFD.INC                                     *
. *                                                                      *
. *      Function     : File definition include for Patient              *
. *                     Transfer Source Code                             *
. *                                                                      *
. *      File Type    : SQL                                              *
. *                                                                      *
. *      File Name    : patvadaf.dat                                     *
. *      Audit Name   : pataudva.dat  Audit file)                        *
. *                                                                      *
. *      Keys         : KEY5, KEY35                                      *
. *                     KEY19 (Audit file)                               *
. *                                                                      *
. *      Programmer   : Glen Hobby 15/05/90                              *
. *                                                                      *
. *      Modifications:                                                  *
. *                    V11.02.01 05.04.2022  DA Sarkies     tsk 0887346  *
. *                              Added new index PATVADA3 to include     *
. *                              HDP Equivalent, index U36-39            *
. *                    V10.05.01 08/08/2014  Steve Armstrong  CAR 304714 *
. *                              Moved PTVAESTB from SPARE into FD       *
. *                    V10.04.02 17/03/2014  Patrick Adair CAR 297193    *
. *                              Added PTVAESTB to spare variable        *
. *                    V10.04.01 18/12/2013  Ania P       CAR294289      *
. *                              Moved PTVACNME out of SPARE.            *
. *                    V10.03.01 23/08/2012  Don Nguyen   CAR 239154     *
. *                              Added PTVACNME to spare variable        *
. *                     V9.08.01 09/03/2007 Jill Habasque CAR 135519     *
. *                              Added destination type - used in search *
. *                              to match to Source of Referral type     *
. *                     V9.05.01 06/02/2005 J.Tan         CAR 93540      *
. *                              Added Provider postcode and name        *
. *                     V9.04.01 22/02/2005 Peter Vela    CAR 57547      *
. *                              Added Provider Number                   *
. *                     V9.03.00 22/03/2004 Ebon Clemnts  CAR 18703      *
. *                              Added PTVASDAT to PTVAUUID              *
. *                     V5.07.00 20/10/1999 Nicole Harrington            *
. *                              Added PTVAACTV - active indicator       *
. ************************************************************************
. *                     V5.01.00 21/06/90 Glen Hobby                     *
. *                              Upgrade from V5.00 to V5.01             *
. *                     V5.01.01 05/06/92 J.Tan    SRF 115070            *
. *                              Added HDP Equivalent                    *
. *                     V5.02.01 28/03/1995  Helen Crick                 *
. *                              Standardised FD                         *
. ************************************************************************
.
.Audit File -------
.
PATAUDVA  IFILE     SQL, FIXED=208, KEY="D1-8,9-16,17-18,19-19"
.
PTVAAUDD  DIM       8      8        1          Date of change
PTVAAUDT  DIM       8      8        9          Time of change
PTVAAUDP  DIM       2      2        17         Port doing change
PTVAAUDR  DIM       1      1        19         Record type
.                                              A = Added record
.                                              B = Before any changes
.                                              C = After any changes
.                                              D = Deleted record
PTVAAUDS  FORM       1     2        20         Record status
.                                              1 = Not printed
.                                              2 = Printed
PTVAAUDO  DIM       4      4        22         Operator ID that did the change
.
.
.Data File --------
.
PATVADA1  IFILE     SQL, FIXED=183, KEY="U1-5"
PATVADA2  IFILE     SQL, FIXED=183, KEY="U6-35,1-5"
PATVADA3  IFILE     SQL, FIXED=183, KEY="U36-39,1-5"
.
. NAME    TYPE      LENGTH PHYSICAL START LOC. DESCRIPTION
. ----    ----      ------ -------- ---------- -----------
PTVACODE  DIM       5      5        1          Transfer Destination Code
PTVADESC  DIM       30     30       6          Destination Description
PTVANHSC  DIM       4      4        36         HDP Equivalent
PTVAACTV  DIM       1      1        40         Display Ind. A=Active I=Inactive
PTVASDAT  DIM       8      8        41         Start Date
PTVASUPD  DIM       1      1        49         Start Date Auto Update
.                                              0=No 1=Yes
PTVAEDAT  DIM       8      8        50         End Date
PTVAEUPD  DIM       1      1        58         End Date Auto Update
.                                              0=No 1=Yes
PTVACDAT  DIM       8      8        59         Date Record Created (CCYYMMDD)
PTVACTIM  DIM       8      8        67         Time Record Created (HH:MM:SS)
PTVACUID  DIM       10     10       75         WEB User ID Created (websecaf)
PTVAUDAT  DIM       8      8        85         Update Date (CCYYMMDD)
PTVAUTIM  DIM       8      8        93         Update Time (HH:MM:SS)
PTVAUUID  DIM       10     10       101        WEB User ID Updated (websecaf)
PTVAPROV  DIM       8      8        111        Hospital Provider Number
PTVAPNAM  DIM       30     30       119        Provider Name
PTVAPPCD  DIM       8      8        149        Provider Postcode
PTVADTYP  DIM       1      1        157        Destination type
PTVACNME  DIM       4      4        158        Coded Name (4 characters)
PTVAESTB  DIM       10     10       162        Establishment Number
PTVASPAR  DIM       11     11       172        Spare variable
.
.End of record                      183
.
