. V11.00.03 02/10/2020 PVL C-0895969 Added Comment Type Desc
. V11.00.02 22/09/2020 PVL C-0895969 Fixed indexes
. V11.00.01 31/08/2020 PVL C-0895969 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBERCFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW Response Comments 
. *
. * File Type     :   SQL
. *
. * File Name     :   webercaf.dat
. *
. * Index Values  :   KEY29   KEY53   KEY65                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBERCA1   IFILE    SQL, FIXED=1206, KEY="U1-20,21-23,24-26,27-29"
WEBERCA2   IFILE    SQL, FIXED=1206, KEY="U1046-1069,1-20,21-23,24-26,27-29"
WEBERCA3   IFILE    SQL, FIXED=1206, KEY="U1070-1105,1-20,21-23,24-26,27-29"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBECARID  DIM       20     20       1     Account Reference ID               
WBECRPTC  DIM       3      3        21    Report counter (right just.)       
WBECTYPE  DIM       3      3        24    WebServices OECW Comment Type      
.                                         001 - Benefit Limitations
.                                         002 - CoPayment Description
.                                         003 - Excess Amount Description
.                                         004 - Exclusion Description
.                                         005 - Table Description
WBECLINE  DIM       3      3        27    Line No                            
WBECDATA  DIM       1000   1000     30    Line                               
WBECUDAT  DIM       8      8        1030  Date Record Updated (ccyymmdd)     
WBECUTIM  DIM       8      8        1038  Time Record Updated (hh:mm:ss)     
WBECTRID  DIM       24     24       1046  Transaction ID                     
WBECMSID  DIM       36     36       1070  Message ID                         
WBECSPAR  DIM       100    100      1106  Spare Variable                     
.
.End of Record                      1206  
.
