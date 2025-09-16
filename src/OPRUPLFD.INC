. *----------------------------------------------------------------------
. * Include Name  :   OPRUPLFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Theatre Upload History             
. *
. * File Type     :   SQL
. *
. * File Name     :   opruplaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRUPLA1   IFILE    SQL, FIXED=142, KEY="U1-8,9-16,17-56,57-71"                 
OPRUPLA2   IFILE    SQL, FIXED=142, KEY="U17-56,57-71,1-8,9-16"                 
OPRUPLA3   IFILE    SQL, FIXED=142, KEY="U72-111,1-8,9-16"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPUPDATE  DIM       8      8        1     Date of theatre upload             
OPUPTIME  DIM       8      8        9     Time of theatre upload             
OPUPPATH  DIM       40     40       17    Path for theatre upload file       
OPUPFILE  DIM       15     15       57    File name for theatre upload       
OPUPMANF  DIM       40     40       72    File name for manual browser       
OPUPTYPE  FORM      1      2        112   Automatic or Manual Upload         
.                                         0 - Manual   1 - Automatic
OPUPSPAR  DIM       28     28       114   Spare variable                     
.
.End of Record                      142  
.
