. V10.10.01 15/03/2017 SA C-0815431 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   OUTRCMFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Outpatient Request Comments        
. *
. * File Type     :   SQL
. *
. * File Name     :   outrcmaf.dat
. *
. * Index Values  :   KEY13                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTRCMA1   IFILE    SQL, FIXED=176, KEY="U1-10,11-13"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTRCUNIQ  DIM       10     10       1     Comment Unique ID                  
OTRCLINE  DIM       3      3        11    Line Number                        
OTRCCOMM  DIM       80     80       14    Comment text                       
OTRCCUID  DIM       10     10       94    User who created record (websecaf) 
OTRCCDAT  DIM       8      8        104   Date Record Created (ccyymmdd)     
OTRCCTIM  DIM       8      8        112   Time Record Created (hh:mm:ss)     
OTRCUUID  DIM       10     10       120   User who last updated record       
.                                         (websecaf)                           
OTRCUDAT  DIM       8      8        130   Date Record Updated (ccyymmdd)     
OTRCUTIM  DIM       8      8        138   Time Record Updated (hh:mm:ss)     
OTRCSPAR  DIM       30     30       146   Spare Variable                     
.
.End of Record                      176  
.
