. V10.03.01 22/10/2012 EC C-266929 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   EMRRESFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Research Projects                  
. *
. * File Type     :   SQL
. *
. * File Name     :   emrresaf.dat
. *
. * Index Values  :   KEY11                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRRESA1   IFILE    SQL, FIXED=149, KEY="U1-3,4-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMRERESP  DIM       3      3        1     Research Code (Cat eu)             
EMRESDAT  DIM       8      8        4     Start Date (CCYYMMDD)              
EMREEDAT  DIM       8      8        12    End Date (CCYYMMDD)                
EMRESTAT  DIM       1      1        20    Active/Inactive                    
.                                         0=Active, 1=Inactive                 
EMREGDAT  DIM       8      8        21    Generation Date (CCYYMMDD)         
EMREGTIM  DIM       8      8        29    Generation Time (CCYYMMDD)         
EMRECUID  DIM       10     10       37    WEB User ID Created (websecaf)     
EMRECDAT  DIM       8      8        47    Date Record Created (CCYYMMDD)     
EMRECTIM  DIM       8      8        55    Time Record Created (HH:MM:SS)     
EMREUUID  DIM       10     10       63    WEB User ID Updated (websecaf)     
EMREUDAT  DIM       8      8        73    Update Date (CCYYMMDD)             
EMREUTIM  DIM       8      8        81    Update Time (HH:MM:SS)             
EMRESPAR  DIM       60     60       89    Spare                              
.
.End of Record                      149  
.
