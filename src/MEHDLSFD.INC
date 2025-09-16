. *----------------------------------------------------------------------
. * Include Name  :   MEHDLSFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   Legal Status Detail Record         
. *
. * File Type     :   SQL
. *
. * File Name     :   mehdlsaf.dat
. * Audit File    :   mehaudda.dat
. *
. * Index Values  :   KEY32   KEY40                
. *
. * Mods          :
. *      V10.03.01  07/11/2011  Mike Laming   CAR 242151
. *                 Move 4 fields from Spare, lengthen record to 500
. *      V10.02.01  08/09/2010  J.Tan         CAR 242151
. *                 Added new Fields for WA (in Spare)
. *      V10.00.01  25/03/2010  Mike Laming   CAR 195158
. *                 Add new Fields as per NZ Mental Health Specs.
. *       V9.10.01  07/05/2008  J.Tan         CAR 166690
. *                 Added End Date and Time
. *       V9.09.01  03/04/2008  Ebon Clements CAR 164563
. *                 Fixed description of MHDLRCOD
. *       V9.08.01  20/04/2007  Mike Laming   CAR 138935
. *                 Add field MHDLSENT (Mental Health data sent)
. *       V9.06.01  21/04/06 J.Tan  CAR 91327
. *                 Added second audit file
. *----------------------------------------------------------------------
. * Layout for "mehdlsaf" created by Program Generator
. *----------------------------------------------------------------------
.
.Audit File Definition
.---------------------
MEHAUDDA   IFILE    SQL, FIXED=527, KEY="D28-35,36-43,1-8,9-16"
MEHAUDDB   IFILE    SQL, FIXED=527, KEY="D1-8,9-16,28-35,36-43"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHDLMDAT  DIM       8      8        1     Date of Change
MHDLMTIM  DIM       8      8        9     Time of Change
MHDLRTYP  DIM       1      1        17    Record Type
.                                              A = Added
.                                              B = Before image
.                                              C = After Image
.                                              R = Reactive (Supervisor)
.                                              D = Delete (Inactive)
MHDLMUID  DIM      10     10        18    WEB User ID Changed (websecaf)
.MHDLURNO DIM       8      8        28    U/R Number
.MHDLUNIQ DIM       8      8        36    Unique Number
.
.Data File Definition                     ( created by File Generator )
.--------------------
MEHDLSA1   IFILE    SQL, FIXED=500, KEY="U1-8,9-16,17-24,25-32"
MEHDLSA2   IFILE    SQL, FIXED=500, KEY="U79-86,1-8,9-16,17-24,25-32"        
.
.Name     Type      Length Physical Start Description 
.----     ----      ------ -------- ----- ----------- 
MHDLURNO  DIM       8      8        1     U/R Number
MHDLUNIQ  DIM       8      8        9     Unique Number
MHDLSDAT  DIM       8      8        17    Date Event Opened (ccyymmdd)
MHDLSTIM  DIM       8      8        25    Time Event Opened (hh:mm:ss)
MHDLACTV  DIM       1      1        33    Status 0-Active 1-Inactive
MHDLSCOD  DIM       3      3        34    Section Code (category LS)
MHDLSTAT  DIM       3      3        37    Review Status (category LR)
MHDLRDAT  DIM       8      8        40    Review Date (ccyymmdd)
MHDLRTIM  DIM       8      8        48    Review Time (hh:mm:ss)
MHDLHCPC  DIM       10     10       56    Review HCP Code
MHDLCASE  DIM       10     10       66    HCP Case Team
MHDLPOCC  DIM       3      3        76    Place of Occurrence (category PO)
MHDLREMD  DIM       8      8        79    Reminder Date (ccyymmdd)
MHDLDRIV  DIM       1      1        87    Is the patient allowed to drive?
.                                         0-No, 1-Yes
MHDLRESD  DIM       1      1        88    Residential Admission?
.                                         0-No 1-Yes
MHDLRCOD  DIM       6      6        89    Resident Code (pateoraf.ptertype=D)
MHDLCUID  DIM       10     10       95    WEB User ID created (websecaf)
MHDLCDAT  DIM       8      8        105   Date Record created (ccyymmdd)
MHDLCTIM  DIM       8      8        113   Time Record created (hh:mm:ss)
MHDLUUID  DIM       10     10       121   WEB User ID updated (websecaf)
MHDLUDAT  DIM       8      8        131   Date record updated
MHDLUTIM  DIM       8      8        139   Time record update
MHDLCMNT  DIM       100    100      147   Comments
MHDLSENT  DIM       1      1        247   Mental Health data sent
.                                         Y-Yes, N or blank-No
MHDLEDAT  DIM       8      8        248   End Date (ccyymmdd)
MHDLETIM  DIM       8      8        256   End Time (hh:mm:ss)
MHDLSULS  DIM       3      3        264   Supp. Legal Status - Cat."LS"
MHDLSLSD  DIM       8      8        267   Supp. Legal Status Effective Date
MHDLRPDT  DIM       8      8        275   Date Review performed
MHDLCNSD  DIM       8      8        283   Court Notices Sent Date
MHDLTRDT  DIM       8      8        291   Tribunal Date
MHDLLWCD  DIM       8      8        299   Lodged with Court Date
MHDLCTCD  DIM       3      3        307   Court Time Code - Cat."xy"
MHDLCMN2  DIM       100    100      310   Comments 2
MHDLDOCG  DIM       3      3        410   Pt Documentation Given (Cat "to")
MHDLSPSY  DIM       10     10       413   Supervising Psychiatrist
MHDLRESP  DIM       10     10       423   Responsible Practitioner
MHDLLDOC  DIM       10     10       433   Locum Doctor
MHDLSPRE  DIM       57     57       443   Spare
.
.End of Record                      500       ( end of File Generator data )
.
