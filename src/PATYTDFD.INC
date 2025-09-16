.
.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PATYTDFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Patient                   *
.  *                    PRS/2 Trailer Records - Year to Date Data             *
.  *                    (where YY in file name represents financial year)     *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : patytdYY.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY8  KEY16                                           *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *      V10.04.02 26/03/2014  Steve Armstrong   CAR 294451                  *
.  *                Fixed filename to include YY                              *
.  *      V10.04.01 09/01/2014  Don Nguyen    CAR 294451                      *
.  *                Increased record size for new spare variable size.        *
.  *                Moved PTYDYOPS, PTYDYOPB, PTYDYOPT out of spare variable. *
.  ****************************************************************************
.  *      V10.01.01 05/06/2012  Davin         CAR 260600                      *
.  *                Added PTYDYOPS,PTYDYOPB,PTYDYOPT to spare                 *
.  ****************************************************************************
.  *      V9.05.01  08/04/2006  Jill Habasque CAR 99867                       *
.  *                Added PTYDHOSP - hospital code                            *
.  ****************************************************************************
.  *      V5.07.01  22/11/1999  Greg Horvat                                   *
.  *                Added PTYDDTDL - Date deleted                             *
.  *                   01/08/1995  Whirlpool prs2                             *
.  *                               added PTYDYUEP and PTYDYUBD                *
.  ****************************************************************************
.
PATYTDA1  IFILE     SQL, FIXED=274, KEY="U1-8"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
DPTYDADM  DIM       8        8        1       Admission Number        
.
PTYDYADM  FORM      5        4        9       YTD Admissions (inc statistics)
PTYDYSEP  FORM      5        4       13       YTD Separations (inc statistics)
PTYDYSTS  FORM      5        4       17       YTD Statistical Separations 
PTYDYBED  FORM      6        4       21       YTD Bed Days   
PTYDYHAS  FORM      5        4       25       YTD Public Acute Separations 
PTYDYHAB  FORM      6        4       29       YTD Public Acute Bed Days     
PTYDYHAT  FORM      6        4       33       Public Acute Bed Days-YTD Seps
PTYDYPAS  FORM      5        4       37       YTD Private Acute Separations
PTYDYPAB  FORM      6        4       41       YTD Private Acute Bed Days 
PTYDYPAT  FORM      6        4       45       Privat Acute Bed Days-YTD Seps
PTYDYCOS  FORM      5        4       49       YTD Compensable Separations
PTYDYCOB  FORM      6        4       53       YTD Compensable Bed Days
PTYDYCOT  FORM      6        4       57       Comp. Acute Bed Days-YTD Seps
PTYDYIES  FORM      5        4       61       YTD Ineligible Separations
PTYDYIEB  FORM      6        4       65       YTD Ineligible Bed Days
PTYDYIET  FORM      6        4       69       Inelig. Acute Bed Days-YTD Seps
PTYDYHNS  FORM      5        4       73       YTD Public NHT Separations
PTYDYHNB  FORM      6        4       77       YTD Public NHT Bed Days
PTYDYHNT  FORM      6        4       81       Public NHT Bed Days-YTD Seps
PTYDYPNS  FORM      5        4       85       YTD Private NHT Separations
PTYDYPNB  FORM      6        4       89       YTD Private NHT Bed Days
PTYDYPNT  FORM      6        4       93       Private NHT Bed Days-YTD Seps
PTYDYH5S  FORM      5        4       97       YTD Public NHT/NH5 Separations
PTYDYH5B  FORM      6        4      101       YTD Public NHT/NH5 Bed Days
PTYDYH5T  FORM      6        4      105       Public NHT/NH5 Bed Days-YTD Seps
PTYDYP5S  FORM      5        4      109       YTD Private NHT/NH5 Separations
PTYDYP5B  FORM      6        4      113       YTD Private NHT/NH5 Bed Days
PTYDYP5T  FORM      6        4      117       Private NHT/NH5 Bed Days-YTD Seps
PTYDYHCS  FORM      5        4      121       YTD Public Contract Separations
PTYDYHCB  FORM      6        4      125       YTD Public Contract Bed Days
PTYDYHCT  FORM      6        4      129       Public Contract Bed Days-YTD Seps
PTYDYPCS  FORM      5        4      133       YTD Private Contract Separations
PTYDYPCB  FORM      6        4      137       YTD Private Contract Bed Days
PTYDYPCT  FORM      6        4      141       Private Contract Bed Day-YTD Seps
PTYDYCNS  FORM      5        4      145       YTD Compens. Non-Acute Separations
PTYDYCNB  FORM      6        4      149       YTD Compens. Non-Acute Bed Days
PTYDYCNT  FORM      6        4      153       Comp. Non-Acute Bed Days-YTD Seps
PTYDYINS  FORM      5        4      157       YTD Inelig. Non-Acute Separatiopns
PTYDYINB  FORM      6        4      161       YTD Inelig. Non-Acute Bed Days
PTYDYINT  FORM      6        4      165       Inelig Non-Acute Bed Days-YTD Seps
PTYDYHSD  FORM      5        4      169       YTD Public Same Day
PTYDYPSD  FORM      5        4      173       YTD Private Same Day
PTYDYCSD  FORM      5        4      177       YTD Compensable Same Day
PTYDYISD  FORM      5        4      181       YTD Ineligible Same Day
PTYDYHCD  FORM      5        4      185       YTD Public Contract Same Day
PTYDYPCD  FORM      5        4      189       YTD Private Contract Same Day
.
PTYDFORM  FORM      1        2      193       Unique Key Format for PRS/2
.                                         1 = Base 36
.                                         2 = Episode & Admission number type 1
.                                         3 = Episode & Admission number type 2
.
PTYDYUEP  FORM      4        3      195       Number of entirely unqualified
.                                             episodes
PTYDYUBD  FORM      5        4      198       Number of unqualified bed days
PTYDDTDL  DIM       8        8      202       Date deleted (ccyymmdd)
PTYDHOSP  DIM       3        3      210       Hospital code (pathspaf)
PTYDYOPS  FORM      4        3      213       YTD Posthumous Organ Procurement
.                                             separations
PTYDYOPB  FORM      5        4      216       YTD Posthumous Organ Procurement
.                                             sepn bed days
PTYDYOPT  FORM      5        4      220       Post Org Procure Bed Days-YTD Seps
PTYDSPAR  DIM      50       50      224       Spare Variable
.
.End of Record                      274
.
.
. The following fields are stored in the spare variable:
.
.
. Extras
. ------
PTYDADMN  FORM      8
