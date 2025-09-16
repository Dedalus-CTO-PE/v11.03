.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : WATCONTD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for                           *
.  *                    Waiting List    Control File cgi variables            *
.  *                                                                          *
.  *     Sector used  : 37,111                                                *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *     V10.11.01 16/08/2017  Davin          TSK 0837617                     *
.  *               Added HL7 Triggers WATCN014,WATCN015,WATCN016 (S.111/P.32) *
.  *     V10.09.01 01/12/2014  Ken Bell       TSK 0813230                     *
.  *               Added WATCN012 - WTCNBRSR UDF for Booking Referral Source  *
.  *               Added WATCN013 - WTCNCSID Destination for CPAC Scoring Id  *
.  *     V10.05.01 30/09/2014  Don Nguyen     CAR 303882                      *
.  *               Added WATCN011 - Next NBRS Extract Batch Number            *
.  *     V10.02.01 05/10/2011  Mike Laming    CAR 246036                      *
.  *               Add cgi variables for HL7 W/L Triggers -                   *
.  *               WATCN007(A05) WATCN008(A08) WATCN009(A38)                  *
.  *     V10.00.01 11/10/2010  Ebon Clements  CAR 169450                      *
.  *               Added WATCN005 and WATCN006                                *
.  *     V9.09.01  27/02/2008  Jill Habasque  CAR 142726                      *
.  *               Added WATCN004                                             *
.  *     V9.04.02  27/09/2005  Ebon Clements  CAR 75351                       *
.  *               Added WATCN003                                             *
.  *     V9.04.01  25/01/2005  Davin          CAR 54869                       *
.  *               Added watcn002                                             *
.  *     V9.03.00  09/11/2004  Jill Habasqye  CAR 54731                       *
.  *               Created include                                            *
.  ****************************************************************************
.
.  ****************************************************************************
.  Sector 37
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
WATCN002  DIM    3          137   Source of Referral when admitting
WATCN012  DIM    1          236   UDF for Booking Referral Source
WATCN013  DIM    1          244   Destination for CPAC Scoring Id
.
.  ****************************************************************************
.  Sector 111
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
WATCN001  DIM    9            1   Next unique number
WATCN003  DIM    1           10   Procedure code/HDP for NBRS extract
WATCN004  DIM    1           11   Using ESIS RFC calculation 1=Yes
WATCN005  DIM    6           12   Default OP Clinic type for PAC Appointments
WATCN006  DIM    6           18   Default OP Clinic type for PAS Appointments
WATCN007  DIM    1           24   HL7 W/L Trigger A05 - send after Booking
WATCN008  DIM    1           25   HL7 W/L Trigger A08 - send after Booking Updat
WATCN009  DIM    1           26   HL7 W/L Trigger A38 - send after Booking Cancl
WATCN010  DIM    5           27   Number of records to show before next button
WATCN014  DIM    1           32   HL7 W/L Trigger - Send I12 for Add W/L
WATCN015  DIM    1           33   HL7 W/L Trigger - Send I13 for Update W/L
WATCN016  DIM    1           34   HL7 W/L Trigger - Send I14 for Remove W/L
.
.  ****************************************************************************
.  Sector 120
.  ****************************************************************************
WATCN011  DIM    5          166   Next NBRS Extract Batch Number
.                                    (Right jusitified, zero-padded)
