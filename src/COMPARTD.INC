. *----------------------------------------------------------------------
. * Include Name  :   COMPARTD.INC
. *
. * Function      :   CGI variables for COMPARFD - comparaf.dat
. *
. * V11.00.00 17/11/2020  Ebon Clements  TSK 0876663
. *                       Created Include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
CMPAR001  DIM       3       Hospital ID (pathspaf)
CMPAR002  DIM       8       Parameter ID
CMPAR003  DIM       256     Parameter Description
CMPAR004  DIM       256     Parameter Value
CMPAR005  DIM       3       Parameter Type
CMPAR006  DIM       1       Status (0=Active 1=Inactive)
.
CMPTY000  INIT      "Text"
CMPTY001  INIT      "Date"
CMPTY002  INIT      "Time"
CMPTY003  INIT      "HCP"
CMPTY004  INIT      "Category Code"
CMPTY005  INIT      "Yes/No"
CMPTY006  INIT      "Numeric"
