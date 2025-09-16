. Mods:  V10.02.01 27/05/2011 EC Added printed by user id CAR 239554 
. Mods:  26/05/93  ROD     Added BOKA fields so as to give link to boka file
. Mods:  16/06/93  WHIRLPOOL Fixed file for ever changing requirement ie added
.                            outpatient number to the key
. Mods:  28/03/95  Helen Crick  Standardised FD                         
.
. *-------------------------------------------------------------------------
. * Include Name  :   OUTLHIFD.INC
. *
. * Function      :   File Def'n Include for Outpatients
. *                   Letter History 
. *
. * File Type     :   SQL
. *
. * File Name     :   outlhiaf.dat
. *
. *-------------------------------------------------------------------------
.Data File Definition
.--------------------
OUTLHIA1   IFILE    SQL, FIXED=80, KEY="U1-8,9-16,17-19,20-27"
FILLHIA1   INIT     "lhiaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTLHURNO  DIM       8      8        1     Patient U/R Number 
OTLHDATE  DIM       8      8        9     Date Letter Sent
DOTLHLNU  DIM       3      3        17    Letter Number
DOTLHOUT  DIM       8      8        20    Outpatient number
OTLHSITE  DIM       6      6        28    Site Id
OTLHCLIN  DIM       6      6        34    Clinic Id
OTLHCDAT  DIM       8      8        40    Clinic Date
OTLHCTIM  DIM       5      5        48    Clinic Start Time
OTLHSLOT  FORM      3      3        53    Slot Number
OTLHPUID  DIM       10     10       56    Printed by Web User ID (websecaf)
OTLHSPAR  DIM       14     14       66    Spare                              
.
.End of Record                      80
.
OTLHLNUM  FORM      3
OTLHOUTN  FORM      8
.
