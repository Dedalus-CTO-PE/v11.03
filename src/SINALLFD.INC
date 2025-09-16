. V7.00.001 29.10.1999 SB  Year 2000
. *----------------------------------------------------------------------
. * Include Name  :   SINALLFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Temporary Usage Calculation Table  
. *
. * File Type     :   SQL
. *
. * File Name     :   sinallpp.dat
. *        pp     :   Port Number
. *----------------------------------------------------------------------
SINALLA1  IFILE     SQL, FIXED=45, KEY="U6-10,16-22,1-5,11-15,23-28"
SINALLA2  IFILE     SQL, FIXED=45, KEY="U1-5,6-10,23-28,11-15,16-22"
SINALLA3  IFILE     SQL, FIXED=45, KEY="U1-5,16-22,23-28,11-15,6-10"
SINALLA4  IFILE     SQL, FIXED=45, KEY="D16-22,23-28"
SINALLA5  IFILE     SQL, FIXED=45, KEY="D16-22,1-5,23-28"
.
SIALCST   DIM       5      5        1     Cost Centre
SIALSUB   DIM       5      5        6     Product Group
SIALWAR   DIM       5      5       11     Warehouse
SIALCAT   DIM       7      7       16     Catalog
SIALDAT   DIM       6      6       23     Date CCYYMM
SIALUQT   FORM      12.2   8       29     Usage Quantity
SIALUAM   FORM      12.2   8       37     Usage Cost
.                               --------
.                                  45
. Extra Variables --------------------------------------------------
.
SINALLNM  DIM       8
SINALLAA  INIT      "sinall"
