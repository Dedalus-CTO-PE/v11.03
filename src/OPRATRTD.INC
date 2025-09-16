. *----------------------------------------------------------------------
. * Include Name  :   OPRATRFD.INC
. *
. * Function      :   CGI variables for OPRATRTD - Theatre Attributes
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.10.02  30/05/3017  Peter Vela    TSK 0837660
.             Added new fields - Jessie Mac Theatre Enhancement
.  V10.10.01  15/03/2017  Peter Vela    TSK 0824042
.             Created include
. *----------------------------------------------------------------------

.
.
.Name     Type      Length  Description
.----     ----      ------  -----------
OTATR001  DIM       10      Theatre Unique ID
OTATR002  DIM       3       Type of Attribute
OTATR003  DIM       6       Value 1
OTATR004  DIM       6       Value 2
OTATR005  DIM       6       Value 3
OTATR006  DIM       6       Value 4
OTATR007  DIM       3       Coded Field 1
OTATR008  DIM       3       Coded Field 2
OTATR009  DIM       3       Coded Field 3
OTATR010  DIM       3       Coded Field 4
OTATR011  DIM       80      Text Field 1
OTATR012  DIM       80      Text Field 2
OTATR013  DIM       80      Text Field 3
OTATR014  DIM       80      Text Field 4
OTATR015  DIM       1       Y/N Field 1
OTATR016  DIM       1       Y/N Field 2
OTATR017  DIM       1       Y/N Field 3
OTATR018  DIM       1       Y/N Field 4
OTATR019  DIM       1       Deleted Record
OTATR020  DIM       10      User ID who created record
OTATR021  DIM       8       Date Record Created (ccyymmdd)
OTATR022  DIM       8       Time Record Created (hh:mm:ss)
OTATR023  DIM       10      User ID who last updated record
OTATR024  DIM       8       Date Record Updated (ccyymmdd)
OTATR025  DIM       8       Time Record Updated (hh:mm:ss)
OTATR026  DIM       10      User ID who finished attribute
OTATR027  DIM       8       Date Attribute Finished (ccyymmdd)
OTATR028  DIM       8       Time Attribute Finished (hh:mm:ss)
OTATR029  DIM       3       Coded Field 5
OTATR030  DIM       3       Coded Field 6
OTATR031  DIM       1       Y/N Field 5
OTATR032  DIM       1       Y/N Field 6
OTATR033  DIM       1       Y/N Field 7
OTATR034  DIM       1       Y/N Field 8
OTATR035  DIM       1       Y/N Field 9
OTATR036  DIM       1       Y/N Field 10
OTATR037  DIM       8       User Defined Date Field 1 (ccyymmdd)
OTATR038  DIM       8       User Defined Time Field 1 (hh:mm:ss)
.
OTTYPIND  FORM      3       Type index (1-13)
OTCODIND  FORM      1       Code Field index (1-6)
OTCODVAL  DIM       3       Coded Field value
OTTXTIND  FORM      1       Text Field index (1-4)
OTTXTVAL  DIM      80       Text Field value
OTVALIND  FORM      1       Value Field index (1-4)
OTVALVAL  DIM       6       Value Field value
OTYENIND  FORM      1       Yes No Field index (1-10)
OTYENVAL  DIM       1       Yes No Field value
OTDATIND  FORM      1       User Defined Date Field index (1)
OTDATVAL  DIM       8       User Defined Date Field value
OTTIMIND  FORM      1       User Defined Time Field index (1)
OTTIMVAL  DIM       8       User Defined Time Field value
.
OTYPE001  INIT      "001"   Attribute Type 1
OTYPE002  INIT      "002"   Attribute Type 2
OTYPE003  INIT      "003"   Attribute Type 3
OTYPE004  INIT      "004"   Attribute Type 4
OTYPE005  INIT      "005"   Attribute Type 5
OTYPE006  INIT      "006"   Attribute Type 6
OTYPE007  INIT      "007"   Attribute Type 7
OTYPE008  INIT      "008"   Attribute Type 8
OTYPE009  INIT      "009"   Attribute Type 9
OTYPE010  INIT      "010"   Attribute Type 10
OTYPE011  INIT      "011"   Attribute Type 11
OTYPE012  INIT      "012"   Attribute Type 12
OTYPE013  INIT      "013"   Attribute Type 13
OTYPE014  INIT      "014"   Attribute Type 14
OTYPE015  INIT      "015"   Attribute Type 15
OTYPE016  INIT      "016"   Attribute Type 16
OTYPE017  INIT      "017"   Attribute Type 17
OTYPE018  INIT      "018"   Attribute Type 18
OTYPE019  INIT      "019"   Attribute Type 19
OTYPE020  INIT      "020"   Attribute Type 20
OTYPE021  INIT      "021"   Attribute Type 21
OTYPE022  INIT      "022"   Attribute Type 22
OTYPE023  INIT      "023"   Attribute Type 23
OTYPE024  INIT      "024"   Attribute Type 24
OTYPE025  INIT      "025"   Attribute Type 25
OTYPE026  INIT      "026"   Attribute Type 26  
.
