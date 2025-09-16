. *----------------------------------------------------------------------
. * Include Name  :   PATATRTD.INC
. *
. * Function      :   CGI variables for PATATRTD - Patient Attributes Table
. *----------------------------------------------------------------------
.  Modifications Done :
. *----------------------------------------------------------------------
.  V11.00.02  02/11/2020  Thanh T        TSK 0878747
.             Added ATYPE022
.  V11.00.01  24/03/2020  Tracey Nguyen  Task 0887397
.             Added ATYPE021
. *----------------------------------------------------------------------
.  V10.15.01  18/12/2019  Ebon Clements  Task 0879283
.             Added ATYPE020
.  V10.14.02  03/06/2019  Jill Parkinson Task 0873054
.             Added PTATR025,26 and 27 and ATYPE019
.  V10.14.01  03/04/2019  Tracey Nguyen  TSK 0871443 
.             Added work variables: ATYPE017, ATYPE018
.  V10.10.01  24/03/2017  Tracey Nguyen  TSK 0833454 
.             Added work variables: ATYPE014, ATYPE015, ATYPE016
.  V10.08.02  23/05/2016  Peter Vela    TSK 0321157
.             Added work variables: ATVALIND, ATVALVAL
.  V10.08.01  28/04/2016  Don Nguyen    TSK 0316489
.             Added work variables: ATTTYPE, ATTCODE, ATYP001-ATYP013
.  V10.03.01  03/12/2013  Peter Vela    CAR 286158
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
PTATR001  DIM       8       U/R Number
PTATR002  DIM       8       Visit Number
PTATR003  DIM       8       Date of Attribute
PTATR004  DIM       8       Time of Attribute
PTATR005  DIM       3       Type of Attribute 001 - Hght/Wght
PTATR006  DIM       6       Value 1
PTATR007  DIM       6       Value 2
PTATR008  DIM       6       Value 3
PTATR009  DIM       6       Value 4
PTATR010  DIM       3       Coded Field 1
PTATR011  DIM       3       Coded Field 2
PTATR012  DIM       3       Coded Field 3
PTATR013  DIM       3       Coded Field 4
PTATR014  DIM       80      Text 1
PTATR015  DIM       80      Text 2
PTATR016  DIM       80      Text 3
PTATR017  DIM       80      Text 4
PTATR018  DIM       1       Deleted Rec 0=No 1=Strikethrough
PTATR019  DIM       10      User who created record
PTATR020  DIM       8       Date record created
PTATR021  DIM       8       Time record created
PTATR022  DIM       10      User who updated record
PTATR023  DIM       8       Date record updated
PTATR024  DIM       8       Time record updated
PTATR025  DIM       8       Date record finished
PTATR026  DIM       8       Time record finished
PTATR027  DIM       10      User who finished record
.
ATTYPIND  FORM      3       Type index (1-19)
ATCODIND  FORM      1       Code Field index (1-4)
ATCODVAL  DIM       3       Coded Field value
ATTXTIND  FORM      1       Text Field index (1-4)
ATTXTVAL  DIM      80       Text Field value
ATVALIND  FORM      1       Value Field index (1-4)
ATVALVAL  DIM       6       Value Field value
.
ATYPE001  INIT      "001"   Attribute Type 1
ATYPE002  INIT      "002"   Attribute Type 2
ATYPE003  INIT      "003"   Attribute Type 3
ATYPE004  INIT      "004"   Attribute Type 4
ATYPE005  INIT      "005"   Attribute Type 5
ATYPE006  INIT      "006"   Attribute Type 6
ATYPE007  INIT      "007"   Attribute Type 7
ATYPE008  INIT      "008"   Attribute Type 8
ATYPE009  INIT      "009"   Attribute Type 9
ATYPE010  INIT      "010"   Attribute Type 10
ATYPE011  INIT      "011"   Attribute Type 11
ATYPE012  INIT      "012"   Attribute Type 12
ATYPE013  INIT      "013"   Attribute Type 13
ATYPE014  INIT      "014"   Attribute Type 14
ATYPE015  INIT      "015"   Attribute Type 15
ATYPE016  INIT      "016"   Attribute Type 16
ATYPE017  INIT      "017"   Attribute Type 17
ATYPE018  INIT      "018"   Attribute Type 18
ATYPE019  INIT      "019"   Attribute Type 19
ATYPE020  INIT      "020"   Attribute Type 20
ATYPE021  INIT      "021"   Attribute Type 21
ATYPE022  INIT      "022"   Attribute Type 22
