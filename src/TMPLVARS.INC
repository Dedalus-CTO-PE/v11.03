.*****************************************************************************
.*                            TMPLVARS.INC                                   *
.*                 Template variables for PATWEB89/DGADTACH                  *
.*                                                                           *
.*---------------------------------------------------------------------------*
.* V11.01.02 19/01/2022  Ebon Clements     TSK 0888071                       *
.*           Added PTVIS136, PTVIS137 and PTVIS138                           *
.* V11.01.01 26/08/2021  Ebon Clements     TSK 0910526                       *
.*           Changed PTMAS046 to a DIM                                       *
.* V11.00.03 10/12/2020  Thanh T           TSK 868699                        *
.*           Added PTMSX052 - NDIS Number                                    *
.*           Removed PTMAS088, PTMAS089                                      *
.* V11.00.02 10/12/2020  Thanh T           TSK 868699                        *
.*           Added PTMAS088 - NDIS Patient                                   *
.*           Added PTMAS089 - NDIS Number                                    *
.* V11.00.01 29/10/2020  Thanh T           TSK 878747                        *
.*           Added PTMAS086 - Multiple birth type                            *
.*           Added PTMAS087 - Birth order                                    *
.*---------------------------------------------------------------------------*
.* V10.13.01 20/08/2018  Ebon Clements     TSK 0861535                       *
.*           Changed PTMIS036 to a DIM                                       *
.* V10.11.01 19/12/2017  Ebon Clements     TSK 0843363                       *
.*           Added PTVIS135 - Interpreter required                           *
.* V10.10.01 29/03/2017  Ebon Clements     TSK 0833052                       *
.*           Added PTMSX051 - Episode Special Purpose Flag                   *
.* V10.07.01 18/12/2015  Ebon Clements     CAR 294154                        *
.*           Added PTMSX049 - Deaf (Category DK)                             *
.*           Added PTMSX050 - Opt Out of SMS                                 *
.* V10.05.02 04/03/2015  Ania P            CAR 311205                        *
.*           Added PTVIS134                                                  *
.* V10.05.01 17/08/2014  J.Tan             CAR 279251                        *
.*           Added PTMAS085 - Death Certificate number                       *
.* V10.04.01 13/03/2013  Patrick Adair     CAR 292935                        *
.*           Added Additional HCP1 thru HCP5 for patma1fd                    *
.* V10.03.02 20/07/2012  Ebon Clements     CAR 217579                        *
.*           Added ptvis133 - Patient BMI                                    *
.* V10.03.01 24/04/2012  Davin             CAR 260600 VAED-2012              *
.*           Changed ptmas029 from FORM1 to DIM1 for PCEASE                  *
.* V10.01.05 03/03/2011  Jill Parkinson    CAR 233154                        *
.*           Added ptmis081,ptmis082 and ptmis083                            *
.* V10.01.04 19/01/2011  Jill Parkinson    CAR 234014                        *
.*           Increased size of ptmas020 and ptmas021                         *
.* V10.01.03 10/01/2011  Jill Parkinson    CAR 236279                        *
.*           Increased size of ptmas005                                      *
.* V10.01.02 29/11/2010  Jill Parkinson    CAR 227455                        *
.*           Added PTMAS069                                                  *
.* V10.01.01 17/11/2010  Jill Parkinson    CAR 233088                        *
.*           Increased PTMAS038 from 10 to 19                                *
.* V9.11.14 13/08/2009 Jill Habasque CAR 201265                              *
.*          Added PTMXSX048                                                  *
.* V9.11.13 Peter Vela    CAR 183976                                         *
.*          Added PTVIS111                                                   *
.* V9.11.12 Peter Vela    CAR 183976                                         *
.*          Added PTVIS109                                                   *
.* V9.11.01 Jill Habasque CAR 165218                                         *
.*          Added PTMAS068                                                   *
.* V9.09.02 Jill Habasque CAR 150915                                         *
.*          Changed PTMAS045 and PTMAS047 to dims                            *
.* V9.09.01 Ebon Clements CAR 150561                                         *
.*          Added PMVXPSOS,PMVXASUT and PMVXPPPT                             *
.* V9.08.03 Jill Habasque CAR 120461                                         *
.*          Changed ptmas048 from a form to a dim                            *
.* V9.08.02 Ebon Clements CAR 120011                                         *
.*          Added PTMIS080                                                   *
.* V9.08.01 Jill Habasque CAR 120004                                         *
.*          Added PTMIS079                                                   *
.* V9.07.01 Ebon Clements CAR 117379                                         *
.*          Added PMVXEOCL, PMVXSLOC, PMVXSCLI, PMVXSTRA & PMVXEMPL          *
.* V9.04.03 Mike Laming   CAR 86040                                          *
.*          Added PMVXPRGM (Program Code) as PTVIS099                        *
.* V9.04.02 Jill Habasque CAR 56347                                          *
.*          Added ptvis096,ptvis097 and ptvis098                             *
.* V9.04.01 Peter Vela    CAR 53371                                          *
.*          Added ptvis094                                                   *
.*          Added ptvis095                                                   *
.* V9.03.02 Jill Habasque SRF 51060                                          *
.*          Added ptmis078                                                   *
.* V9.03.01 Jill Habasque SRF 43296                                          *
.*          Added ptmis077                                                   *
.* V9.02.01 Jill Habasque SRF 41139                                          *
.*          Changed ptmis071 and ptmis072 to dim fields                      *
.*****************************************************************************
.
.         CGI Template Variables
.
. Template Variables for Patient Visit Extension Table pmsvx1af
.
PTVIS015  DIM       10          * Attending Doctor (pmvxdoca)
PTVIS016  DIM       10          * Treating Doctor (pmvxdoct)
PTVIS017  DIM       1           * Consent Release Info (pmvxcsnr)
PTVIS018  DIM       8           * Post Code (pmvxpost)
PTVIS019  DIM       3           * Privacy Indicator (pmvxpind)
PTVIS020  DIM       40          * Valuables Location (pmvxvloc)
PTVIS021  DIM       1           * Claim Formed Signed (pmvxcfsg)
PTVIS022  DIM       1           * Inform Registered GP (pmvxingp)
PTVIS023  DIM       3           * Critical Pathway (pmvxcpth)
PTVIS024  DIM       1           * Notify HCP 1 (pmvxhcp1)
PTVIS025  DIM       1           * Notify HCP 2 (pmvxhcp2)
PTVIS026  DIM       1           * Notify HCP 3 (pmvxhcp3)
PTVIS027  DIM       1           * Notify HCP 4 (pmvxhcp4)
PTVIS028  DIM       10          * Referring HCP 1 (pmvxrhc1)
PTVIS029  DIM       10          * Referring HCP 1 Group (pmvxrh1g)
PTVIS030  DIM       2           * Referring HCP 1 Group Count (pmvxrh1c)
PTVIS031  DIM       10          * Referring HCP 2 (pmvxrhc2)
PTVIS032  DIM       10          * Referring HCP 2 Group (pmvxrh2g)
PTVIS033  DIM       2           * Referring HCP 2 Group Count (pmvxrh2c)
PTVIS034  DIM       10          * Referring HCP 3 (pmvxrhc3)
PTVIS035  DIM       10          * Referring HCP 3 Group (pmvxrh3g)
PTVIS036  DIM       2           * Referring HCP 3 Group Count (pmvxrh3c)
PTVIS037  DIM       10          * Referring HCP 4 (pmvxrhc4)
PTVIS038  DIM       10          * Referring HCP 4 Group (pmvxrh4g)
PTVIS039  DIM       2           * Referring HCP 4 Group Count (pmvxrh4c)
PTVIS040  DIM       3           * Aboriginality (pmvxabrg)
PTVIS041  DIM       3           * Admission Criterion (pmvxcadm)
PTVIS042  DIM       3           * Intent to Readmit (pmvxirad)
PTVIS043  DIM       3           * Intend Stay of Duration (pmvxidus)
PTVIS044  DIM       3           * Carer Availability (pmvxcrav)
PTVIS045  DIM       3           * Crit. Care Xfer Reason (pmvxrcct)
PTVIS046  DIM       3           * Admitting Point Ward (pmvxapwd)
PTVIS047  DIM       3           * Admitting Point Bed (pmvxapbd)
PTVIS048  DIM       3           * Post-Op Ward (pmvxpowd)
PTVIS049  DIM       3           * Post-Op Bed (pmvxpobd)
PTVIS050  DIM       1           * Parent Staying (pmvxpsty)
PTVIS051  DIM       1           * Visitor Allowed (pmvxvalw)
PTVIS052  DIM       1           * Phone Calls Allowed (pmvxpalw)
PTVIS053  DIM       1           * Intended Day Case (pmvxindc)
PTVIS054  DIM       3           * Mode of Arrival (pmvxmdav)
PTVIS055  DIM       3           * Forms (pmvxfrms)
PTVIS056  DIM       3           * Coder Snags (pmvxcsng)
PTVIS057  DIM       6           * Patient Weight (pmvxpwgt)
PTVIS058  DIM       6           * Patient Height (pmvxphgt)
PTVIS059  DIM       8           * Date Height/Weight Record. (pmvxdhwr)
PTVIS060  DIM       10          * Extra Doctor Code 1 (pmvxedc1)
PTVIS061  DIM       10          * Extra Doctor Code 2 (pmvxedc2)
PTVIS062  DIM       10          * Extra Doctor Code 3 (pmvxedc3)
PTVIS063  DIM       1           * Homeless Person (pmvxhome)
PTVIS064  DIM       50          * User Defined Free Format 1 (pmvxudf1)
PTVIS065  DIM       50          * User Defined Free Format 2 (pmvxudf2)
PTVIS066  DIM       50          * User Defined Free Format 3 (pmvxudf3)
PTVIS067  DIM       50          * User Defined Free Format 4 (pmvxudf4)
PTVIS068  DIM       13          * User Def. Date/Time 1 (pmvxudt1)
PTVIS069  DIM       13          * User Def. Date/Time 2 (pmvxudt2)
PTVIS070  DIM       13          * User Def. Date/Time 3 (pmvxudt3)
PTVIS071  DIM       13          * User Def. Date/Time 4 (pmvxudt4)
PTVIS072  DIM       13          * User Def. Date/Time 5 (pmvxudt5)
PTVIS073  DIM       13          * User Def. Date/Time 6 (pmvxudt6)
PTVIS074  DIM       3           * Mental Health Legal Status (pmvxmhls)
PTVIS075  DIM       9           * Provisional ICD10 Code (pmvxpicd)
PTVIS076  DIM       3           * Discharge Intention Cat KN (pmvxudin)
PTVIS077  DIM       3           * Involvement in Palliat Care Cat KG (pmvxpalc)
PTVIS078  DIM       3           * Unplanned Readmission Cat KO (pmvxurea)
PTVIS079  DIM       3           * Unplanned Visit to Theatre Cat KB (pmvxuvth)
PTVIS080  DIM       3           * Prev Non-Admitt Palliat Care Cat KH (pmvxppal)
PTVIS081  DIM       3           * Elective Patient Status Cat KC (pmvxelps)
PTVIS082  DIM       1           * Participate/Receive Marketing 0=No 1=Yes 
PTVIS083  DIM       1           * Participate/Receive Advertising 0=No 1=Yes 
PTVIS084  DIM       1           * Participate in Research Projects 0=No 1=Yes 
PTVIS085  DIM       1           * Use information for training 0=No 1=Yes 
PTVIS086  DIM       1           * Release to Enduring POA 0=No 1=Yes 
PTVIS087  DIM       1           * Release to Contact 1 0=No 1=Yes 
PTVIS088  DIM       1           * Release to Contact 2 0=No 1=Yes 
PTVIS089  DIM       1           * Release to Health Fund 0=No 1=Yes 
PTVIS090  DIM       1           * Release to DVA 0=No 1=Yes 
PTVIS091  DIM       1           * RSL Visit OK 0=No 1=Yes 
PTVIS092  DIM       3           * Medical Record Location (Cat MV)
PTVIS093  DIM       3           * Preferred Accomodation (Cat BP)
PTVIS094  DIM       3           * Readmission in 28 days (pmvxread)    *I-53371
PTVIS095  DIM       3           * Usual Accomodation (pmvxusac)        *I-53371
PTVIS096  DIM       3           * Extra doctor Unit 1(pmvxedu1 - Cat AC)
PTVIS097  DIM       3           * Extra doctor Unit 2(pmvxedu2 - Cat AC)
PTVIS098  DIM       3           * Extra doctor Unit 3(pmvxedu3 - Cat AC)
PTVIS099  DIM       8           * Program Code ("pmsprgaf")            *I-86040
PTVIS100  DIM       8           * EOC Link admission no.
PTVIS101  DIM       3           * Location SOR (Cat SG)
PTVIS102  DIM       3           * Clinical SOR (Cat SH)
PTVIS103  DIM       3           * Transport SOR (Cat.SI)
PTVIS104  DIM       3           * Employment Status Cat KD
PTVIS105  DIM       12          * QAS Number
PTVIS106  DIM       3           * Pension Status on Separation Cat KJ
PTVIS107  DIM       3           * Admission Service Unit Type Cat KA
PTVIS108  DIM       3           * Public/Private Patients Cat KI
PTVIS109  DIM       1           * Consent for Online Eligibility Check
PTVIS110  DIM       3           * Program Identifier Cat PK
PTVIS111  DIM       3           * Presenting Illness Code Cat il
PTVIS112  DIM       3           * Family Violence (Cat fv)
PTVIS113  DIM       3           * UDF 5
PTVIS114  DIM       3           * UDF 6
PTVIS115  DIM       3           * UDF 7
PTVIS116  DIM       3           * UDF 8
PTVIS117  DIM       3           * UDF 9
PTVIS118  DIM       3           * UDF 10
PTVIS119  DIM       3           * UDF 11
PTVIS120  DIM       3           * UDF 12
PTVIS121  DIM       3           * UDF 13
PTVIS122  DIM       3           * UDF 14
PTVIS123  DIM       3           * UDF 15
PTVIS124  DIM       5           * Team
PTVIS125  DIM       3           * Non WA Hospital Contact
PTVIS126  DIM       8           * Expected Delivery Date
PTVIS127  DIM       3           * Property Held
PTVIS128  DIM       3           * Property Location
PTVIS129  DIM       8           * Date Returned
PTVIS130  DIM       9           * Disaster Flag
PTVIS131  DIM       3           * Funding Source
PTVIS132  DIM       40          * Contributor Name
PTVIS133  DIM       5           * Patient Body Mass Index
PTVIS134  DIM       3           * Previous Specialized Treatment
PTVIS135  DIM       1           * Interpreter Required
PTVIS136  DIM       1           * Adm Paperwork Received
PTVIS137  DIM       1           * Consent Obtained
PTVIS138  DIM       1           * Medical History Received
.
. Template Variables for Patient Master Table patma1af
.
PTMAS001  DIM       4           * Title (ptitl)
PTMAS002  FORM      1           * Hospital Last 12 Months (phosp)
PTMAS003  FORM      3           * No of Days Last in Hospital (pldays)
PTMAS004  DIM       1           * Bad Debt Indicator (pbdebt)
PTMAS005  DIM       40          * Surname (psname and ptmasnam)
PTMAS006  DIM       25          * Given Name (pgname)
PTMAS007  DIM       19          * Previous Surname (ppsname)
PTMAS008  DIM       35          * Address Line 1 (padd1)
PTMAS009  DIM       35          * Address Line 2 (padd2)
PTMAS010  DIM       35          * Address Line 3 (psubrb)
PTMAS011  DIM       35          * Address Line 4 (padd4)
PTMAS012  DIM       8           * Postcode (ppost)
PTMAS013  DIM       20          * Private Telephone (ptelep)
PTMAS014  DIM       20          * Business Telephone (pteleb)
PTMAS015  DIM       1           * Sex (psex)
PTMAS016  DIM       3           * Marital Status (Cat M) (pmstat)
PTMAS017  DIM       8           * Date of Birth (pbdate)
PTMAS018  FORM      3           * Age (psage)
PTMAS019  DIM       3           * Country of Birth (Cat C) (pcont)
PTMAS020  DIM       3           * Religion (Cat R) (preg)
PTMAS021  DIM       3           * Patient Type (Cat T) (ptype)
PTMAS022  DIM       14          * Occupation (poccup)
PTMAS023  DIM       10          * Medicare Number (pmedi)
PTMAS024  DIM       15          * Pension Number (dppenno)
PTMAS025  DIM       6           * Pension No. Expiry date (ppndte)
PTMAS026  DIM       10          * Repatriation Number (prepat)
PTMAS027  FORM      1           * Smoker (psmok)
PTMAS028  DIM       20          * Microfilm Address (pmicro)
PTMAS029  DIM       1           * Deceased Indicator (pcease)
PTMAS030  FORM      1           * Case Notes Indicator (pcase)
PTMAS031  FORM      1           * Autopsy Indicator (pautopy)
PTMAS032  DIM       3           * Highlight Code 1 (phigh1)
PTMAS033  DIM       3           * Highlight Code 2 (phigh2)
PTMAS034  DIM       3           * Highlight Code 3 (phigh3)
PTMAS035  DIM       30          * Local Doctor (plocdoc)
PTMAS036  DIM       6           * Health Fund (pfundh)
PTMAS037  DIM       8           * Health Fund table (pfndtb)
PTMAS038  DIM       19          * Health Fund Membership No. (pfndmm)
PTMAS039  DIM       3           * User Defined Field 1 (Cat P1) (pusr1)
PTMAS040  DIM       3           * User Defined Field 2 (Cat P2) (pusr2)
PTMAS041  DIM       3           * User Defined Field 3 (Cat P3) (pusr3)
PTMAS042  DIM       3           * User Defined Field 4 (Cat P4) (pusr4)
PTMAS043  DIM       3           * User Defined Field 5 (Cat P5) (pusr5)
PTMAS044  DIM       3           * User Defined Field 6 (Cat P6) (pusr6)
PTMAS045  DIM       1           * User Defined Y/N Field 1 (puyn1)
PTMAS046  DIM       1           * User Defined Y/N Field 2 (puyn2)
PTMAS047  DIM       1           * User Defined Y/N Field 3 (puyn3)
PTMAS048  DIM       2           * Years Resident (pyrres)
PTMAS049  DIM       20          * NOK Name (pnkname)
PTMAS050  DIM       35          * NOK Address Line 1 (pnkadd1)
PTMAS051  DIM       35          * NOK Address Line 2 (pnkadd2)
PTMAS052  DIM       35          * NOK Address Line 3 (pnksubr)
PTMAS053  DIM       35          * NOK Address Line 4 (pnkadd4)
PTMAS054  DIM       8           * NOK Postcode (pnkpost)
PTMAS055  DIM       20          * NOK Private Telephone No. (pnktelp)
PTMAS056  DIM       20          * NOK Business Telephone No. (pnktelb)
PTMAS057  DIM       10          * NOK relationship (pnkrelp)
PTMAS058  FORM      3           * No. of Previous X-Rays (pnxray)
PTMAS059  DIM       2           * Years of Health Fund Membership (pfndyy)
PTMAS060  DIM       6           * Health Fund Cover Change (pfndcg)
PTMAS061  DIM       8           * Date of Death (pdecdte)
PTMAS062  DIM       3           * Diet Code (Cat DC) (pdiet)
PTMAS063  DIM       2           * Hospital U/R Initiated From (pinithos)
PTMAS064  DIM       6           * Employer Code (ptmaempc)
PTMAS065  DIM       14          * NOK Occupation (ptmanoko)
PTMAS066  DIM       6           * NOK Employer Code (ptmanoke)
PTMAS067  DIM       1           * Unknown Date of Death (ptmaukdd)
PTMAS068  DIM       3           * Employment status (ptcnempl udf)
PTMAS069  DIM       8           * Demographics Confirmed date (ccyymmdd)
PTMAS070  DIM       10          * HCP 1 (pmshcpaf)
PTMAS071  DIM       10          * HCP 1 Practice (pmshclaf)
PTMAS072  DIM       2           * HCP 1 Grp Count (pmshcgaf)
PTMAS073  DIM       10          * HCP 2 (pmshcpaf)
PTMAS074  DIM       10          * HCP 2 Practice (pmshclaf)
PTMAS075  DIM       2           * HCP 2 Grp Count (pmshcgaf)
PTMAS076  DIM       10          * HCP 3 (pmshcpaf)
PTMAS077  DIM       10          * HCP 3 Practice (pmshclaf)
PTMAS078  DIM       2           * HCP 3 Grp Count (pmshcgaf)
PTMAS079  DIM       10          * HCP 4 (pmshcpaf)
PTMAS080  DIM       10          * HCP 4 Practice (pmshclaf)
PTMAS081  DIM       2           * HCP 4 Grp Count (pmshcgaf)
PTMAS082  DIM       10          * HCP 5 (pmshcpaf)
PTMAS083  DIM       10          * HCP 5 Practice (pmshclaf)
PTMAS084  DIM       2           * HCP 5 Grp Count (pmshcgaf)
PTMAS085  DIM       10          * Death Certificate Number
PTMAS086  DIM       3           * Multiple Birth Type
PTMAS087  DIM       1           * Birth Order
.
. Template Variables for Patient Master Extension Table patmx1af
.
PTMSX001  DIM       8        * Registration Date (ptmxrdat)
PTMSX002  DIM       30       * Special Meal Requirements (ptmxmeal)
PTMSX003  DIM       4        * LGA Code (ptmxlga)
PTMSX004  DIM       3        * Current Legal Status (Cat LS) (ptmxls)
PTMSX005  DIM       8        * Date of Legal Status (ptmxlsdt)
PTMSX006  DIM       1        * Familial History of mental disorder? (ptmxfhmd)
PTMSX007  DIM       3        * M.H. User Defined Field (Cat V6) (ptmxmhu1)
PTMSX008  DIM       3        * M.H. User Defined Field (Cat V7) (ptmxmhu2)
PTMSX009  DIM       3        * M.H. User Defined Field (Cat V8) (ptmxmhu3)
PTMSX010  DIM       20       * Emergency Contact Name (ptmxecnm)
PTMSX011  DIM       35       * Emergency Contact Address Line 1 (ptmxeca1)
PTMSX012  DIM       35       * Emergency Contact Address Line 2 (ptmxeca2)
PTMSX013  DIM       35       * Emergency Contact Address Line 3 (ptmxeca3)
PTMSX014  DIM       35       * Emergency Contact Address Line 4 (ptmxeca4)
PTMSX015  DIM       8        * Emergency Contact Postcode (ptmxecpc)
PTMSX016  DIM       20       * Emergency Contact Private Phone (ptmxecpp)
PTMSX017  DIM       20       * Emergency Contact Business Phone (ptmxecbp)
PTMSX018  DIM       10       * Emergency Contact Relationship (ptmxecre)
PTMSX019  DIM       20       * Nearest Relative Name (ptmxnrnm)
PTMSX020  DIM       35       * Nearest Relative Address Line 1 (ptmxnra1)
PTMSX021  DIM       35       * Nearest Relative Address Line 2 (ptmxnra2)
PTMSX022  DIM       35       * Nearest Relative Address Line 3 (ptmxnra3)
PTMSX023  DIM       35       * Nearest Relative Address Line 4 (ptmxnra4)
PTMSX024  DIM       8        * Nearest Relative Post Code (ptmxnrpc)
PTMSX025  DIM       20       * Nearest Relative Private Phone (ptmxnrpp)
PTMSX026  DIM       20       * Nearest Relative Business Phone (ptmxnrbp)
PTMSX027  DIM       10       * Nearest Relative Relationship (ptmxnrre)
PTMSX028  DIM       8        * 3B certificate Expiry Date (ptmx3bex)
PTMSX029  DIM       20       * Card number (NZ billing) (ptmxcard)
PTMSX030  DIM       8        * Card expiry date (NZ billing) (ptmxcexp)
PTMSX031  DIM       3        * Card exemption type (Cat XM) (ptmxcxmp)
PTMSX032  DIM       12       * Family ID (ptmxfmly)
PTMSX033  DIM       3        * Disctrict of Residence (Cat DA) (ptmxdofr)
PTMSX034  DIM       8        * Registered GP (ptmxregp)
PTMSX035  DIM       6        * GP Practice Code (ptmxgppc)
PTMSX036  DIM       20       * Supplementary ID (ptmxspid)
PTMSX037  DIM       2        * GP Practice Count (ptmxgppt)
PTMSX038  DIM       1        * Date Arrived From Overseas (ptmxukdo)
PTMSX039  DIM       20       * Cellular Phone Number (ptmxcell)
PTMSX040  DIM       35       * Postal Address Line 1 (ptmxadd1)
PTMSX041  DIM       35       * Postal Address Line 2 (ptmxadd2)
PTMSX042  DIM       35       * Postal Address Line 3 (ptmxadd3)
PTMSX043  DIM       35       * Postal Address Line 4 (ptmxadd4)
PTMSX044  DIM       8        * Postal Address Post Code (ptmxpost)
PTMSX045  DIM       2        * Medicare Code (ptmxmccd)
PTMSX046  DIM       49       * Filler Number 1 (ptmxspar)
PTMSX047  DIM       3        * Deaf (ptmxdeaf)
PTMSX048  DIM       8        * Year of first adm to psych
PTMSX049  DIM       3        * Deaf
PTMSX050  DIM       1        * Opt Out of SMS
PTMSX051  DIM       2        * Episode Special Purpose Flag/NDIS Patient
PTMSX052  DIM       20       * NDIS Number
.
. Template Variables for Patient Admission Table patmi1af
.
PTMIS001  DIM       8           * Patient Admission Date (adate)
PTMIS002  DIM       8           * Patient Admission Time (atime)
PTMIS003  DIM       3           * Reason Pre-Admiss Cancelation (acancel)
PTMIS004  DIM       3           * Patient Ward Number (award)
PTMIS005  DIM       3           * Patient Bed Number (abed)
PTMIS006  DIM       6           * Referring Doctor (adoctr)
PTMIS007  DIM       6           * Attending Doctor (adocta)
PTMIS008  DIM       30          * Local Doctor (adoctl)
PTMIS009  DIM       3           * Referral Source (Cat. S) (asrce)
PTMIS010  DIM       3           * Admission Type (Cat. A ) (atype)
PTMIS011  DIM       3           * Admission Class (Cat. P) (aclss)
PTMIS012  DIM       3           * Care Class (Cat. CC) (acare)
PTMIS013  DIM       6           * Admission health fund (afundh)
PTMIS014  DIM       8           * Admission health fund table (afndtb)
PTMIS015  DIM       19          * Admission health fund Membership No (afndmm)
PTMIS016  DIM       1           * Eligible for Govt. Rebate (1=y 2=n) (aelig)
PTMIS017  FORM      1           * Religious Visit (1=yes 2=no) (avisit)
PTMIS018  FORM      1           * Allergies (1=yes 2=no) (aalerg)
PTMIS019  FORM      1           * Pre-existing illness (1=y 2=n) (ailln)
PTMIS020  DIM       80          * Admitting Diagnoses line 1 (adiag1)
PTMIS021  DIM       80          * Admitting Diagnoses line 2 (adiag2)
PTMIS022  FORM      3.2         * Patient Discount Percentage (adisc)
PTMIS023  DIM       6           * Treating Doctor (adoctt)
PTMIS024  DIM       3           * Department Code (Cat AC) (aclssft)
PTMIS025  DIM       2           * Allowance Code (aallow)
PTMIS026  DIM       9           * Admitting MBS Code (ambs)
PTMIS027  DIM       3           * Claim Code (Cat CL) (aclaim)
PTMIS028  DIM       3           * Diet Code (Cat DC) (adiet)
PTMIS029  DIM       3           * Place of Occurrence (Cat PO) (aploccr)
PTMIS030  DIM       3           * Expected length of Stay (astay)
PTMIS031  DIM       3           * No. of Days of Hospitalisation (adyhosp)
PTMIS032  FORM      1           * Diamond Valley Membership (amemb)
PTMIS033  FORM      6           * Membership Number (amembno)
PTMIS034  DIM       40          * Comments 1 (acomm1)
PTMIS035  DIM       30          * Comments 2 (acomm2)
PTMIS036  DIM       1           * Plurality of Baby (aplur)
PTMIS037  DIM       3           * User Defined Field 1 (Cat U1) (ausr1)
PTMIS038  DIM       3           * User Defined Field 2 (Cat U2) (ausr2)
PTMIS039  DIM       3           * User Defined Field 3 (Cat U3) (ausr3)
PTMIS040  DIM       3           * User Defined Field 4 (Cat U4) (ausr4)
PTMIS041  DIM       3           * User Defined Field 5 (Cat U5) (ausr5)
PTMIS042  DIM       3           * User Defined Field 6 (Cat U6) (ausr6)
PTMIS043  DIM       3           * User Defined Field 7 (Cat U7) (ausr7)
PTMIS044  DIM       22          * Free Format Referring Doctor (ardrnam)
PTMIS045  DIM       2           * Years Health Fund Membership (afndyy)
PTMIS046  DIM       6           * Health Fund Cover Change (afndcg)
PTMIS047  DIM       8           * Date of Occurrence (aoccdte)
PTMIS048  DIM       8           * Date Coding Completed (acoddte)
PTMIS049  DIM       8           * Expected Return Date from Leave (aretdte)
PTMIS050  FORM      8           * Mother's Admission Number (amumadm)
PTMIS051  DIM       6           * Baby's Admission Weight (abwght)
PTMIS052  DIM       8           * Referring GP (ptmsrfgp)
PTMIS053  DIM       6           * GP Practice Code (ptmsgppc)
PTMIS054  DIM       20          * GPFH Approval Number (ptmsfhan)
PTMIS055  DIM       20          * ECR Approval Number (ptmsecra)
PTMIS056  DIM       3           * Management Intent (Cat MI) (ptmsmgin)
PTMIS057  DIM       3           * District of Residence (Cat DA) (ptmsdofr)
PTMIS058  DIM       8           * Date of Referral (ptmsrefd)
PTMIS059  DIM       8           * Date of 1st Consultation (ptmsdfcn)
PTMIS060  DIM       3           * Principle Health Service Purchaser (ptmphpu)
PTMIS061  DIM       3           * Health Agency (Cat HA) (ptmsagnc)
PTMIS062  DIM       1           * Event Summary Supress Flag (ptmsessf)
PTMIS063  DIM       3           * User Defined Field 8 (Cat U8) (ptmsusr8)
PTMIS064  DIM       3           * User Defined Field 9 (Cat U9) (ptmsusr9)
PTMIS065  DIM       3           * User Defined Field 10 (Cat U0) (ptmsusr0)
PTMIS066  DIM       4           * Provisional DRG (ptmspdrg)
PTMIS067  DIM       4           * Operator at Pre-admission (ptmsoper)
PTMIS068  DIM       3           * Expected Pre-admission Ward (ptmsxwrd)
PTMIS069  DIM       6           * Associated Doctor (ptmsadoc)
PTMIS070  DIM       6           * Registrar (ptmsregs)
PTMIS071  DIM       1           * User Defined Y/N Field 1 (ptmsuyn1)
PTMIS072  DIM       1           * User Defined Y/N Field 2 (ptmsuyn2)
PTMIS073  DIM       9           * Casemix Code (ptmxpcmx)
PTMIS074  DIM       1           * GST Applicable (ptmsgsta)
PTMIS075  DIM       1           * Case Payment (ptmscmxp)
PTMIS076  DIM       3           * Expected Bed (ptmsebed)
PTMIS077  DIM       3           * Cat U0-U9 based on PTCNGEST
PTMIS078  DIM       8           * Date first aware of symptoms (ptmidfas)
PTMIS079  DIM       1           * Credit card detail on file   (ptmicrcd)
PTMIS080  DIM       1           * Follow-up for implant invoicing
PTMIS081  DIM       1           * Continuous Billing Event Y/N
PTMIS082  DIM       3           * 3B Certificate Days of hospitalisation
PTMIS083  DIM       8           * 3B Certificate Admission Date
.
          INC       PMSPX2TD/INC                 * pmspx2af template variables
