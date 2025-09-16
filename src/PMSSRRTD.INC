.*----------------------------------------------------------------------
.* Include Name  :   PMSSRRTD.INC
.*
.* Function      :   CGI variables for PMSSRRFD - pmssrraf.dat
.*
.*----------------------------------------------------------------------
. Modifications :
.
. V10.08.00  25/07/2016  Ebon Clements      TSK 0294154
.            Created include
.*----------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
PMSRR001  DIM       16      Unique Message ID
PMSRR002  DIM       2       Count (for multiple responses)
PMSRR003  DIM       20      Mobile Phone Number
PMSRR004  DIM       8       UR Number
PMSRR005  DIM       2       SMS Message Type
PMSRR006  DIM       30      Record Key
PMSRR007  DIM       8       Received Date (ccyymmdd)
PMSRR008  DIM       8       Received Time (hh:mm:ss)
PMSRR009  DIM       160     Response Part A
PMSRR010  DIM       160     Response Part B
PMSRR011  DIM       160     Response Part C
PMSRR012  DIM       160     Response Part D
PMSRR013  DIM       160     Response Part E
PMSRR014  DIM       160     Response Part F
PMSRR015  DIM       2       Response Status
