.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   MRTQUEFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Queuing Medical Records Message File          *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   mrtqueaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY20                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *      V10.02.01 30/05/2011  Mike Laming   CAR 240724                  *
.  *                Added MRMAHHOS "MR Home Hospital Id."                 *
.  *      V9.02.00  05/10/2001  Steve Armstrong                           *
.  *                FD Created                                            *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
MRTQUEA1   IFILE SQL, FIXED=200, KEY="U1-20"
.
.Name      Type  Length Physical Start Description
.----      ----  ------ -------- ----- -----------
DMRQUMES   DIM     20        20     1   Message Id
.
.          MRTMASFD variables
.
.MRMAURNO  DIM      8         8    21   Patient's U/R Number
.MRMADOTY  DIM      3         3    29   Type of Document
.MRMAHLOC  DIM      4         4    32   Home Location
.MRMAVOLN  FORM     2         2    36   Volume Number
.
.          MRTHISFD variables
.
.MRHIDATE  DIM      8         8    38   Date of Movement (CCYYMMDD)
.MRHITIME  DIM      8         8    46   Time of Movement (HH:MM:SS)
.MRHILOC   DIM      4         4    54   Desination Location of Rec.
.MRHIRECV  DIM      6         6    58   Receiver of the Record
.MRHIREAS  DIM      4         4    64   Reason for Movement
.MRHIOPER  DIM      6         6    68   Operator
.MRHIDDUE  DIM      8         8    74   Due Date         (CCYYMMDD)
.MRHISTAT  DIM      1         1    82   Status (1 - Out, 2 - In)
.MRHIREQB  DIM     35        35    83   Requested by Free Text Field
.MRHIUSID  DIM     10        10   118   Web User ID
.MRHIEXTN  DIM     20        20   128   Extension Number
.MRHIPAGE  DIM     20        20   148   Pager Number
.MRHAHHOS  DIM      3         3   168   MR Home Hospital Id.
MRQUSPAR   DIM     29        29   171   Spare Variable
.
. End of Record                   200
.
. Redefine form fields from key
. -----------------------------
MRQUMESI   FORM    20
