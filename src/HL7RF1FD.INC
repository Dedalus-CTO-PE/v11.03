. V10.04.00 03/06/2014
.*------------------------------------------------------------
.* Include Name  :    HL7RF1FD.INC
.*
.* Function      :    File Definition include for WEB
.*                    HL7 RF1 SEGMENT
.*
.*------------------------------------------------------------
.
.NAME     TYPE      Length Description
.----     ----      ------ -----------
RF1001    DIM       200    Referral Status
RF100101  DIM       1      Referral Status Code (A,P,R,E)
RF100102  DIM       30     Referral Status Name (Accepted,Pending,Rejected,Expired)
RF100103  DIM       12     Referral Status Coding System
RF1002    DIM       200    Referral Priority
RF100201  DIM       1      Referral Priority Code (S,A,R)
RF100202  DIM       30     Referral Priority Name (Stat,ASAP,Routime)
RF100203  DIM       12     Referral Priority Coding System
RF1003    DIM       200    Referral Type
RF100301  DIM       3      Referral Type Code (LAB,RAD,MED)
RF100302  DIM       60     Referral Type Name (Laboratory,Radiology,Medical)
RF100303  DIM       12     Referral Type Coding System
RF1004    DIM       200    Referral Disposition
RF100401  DIM       2      Referral Disposition Code (WR)
RF100402  DIM       60     Referral Disposition Name (Send Written Report)
RF100403  DIM       12     Referral Disposition Coding System
RF1005    DIM       1      Referral Category
RF1006    DIM       30     Originating Referral Identifier
RF100601  DIM       15     Originating Referral Identifier
RF100602  DIM       15     Originating Referral Identifier Name Space
RF1007    DIM       26     Effective Date
RF1008    DIM       26     Expiration Date
RF1009    DIM       26     Process Date
RF1010    DIM       200    Referral Reason
RF101001  DIM       2      Referral Reason Code (E)
RF101002  DIM       60     Referral Reason Name (Event Summary)
RF101003  DIM       12     Referral Reason Coding System
RF1011    DIM       30     External Referral ID
