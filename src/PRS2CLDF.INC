. **********************************************************
. *              I N C L U D E  S U M M A R Y              *
. *              -------------  -------------              *
. *                                                        *
. *     INCLUDE NAME:     PRS2CLDF.INC                     *
. *                                                        *
. *     FUNCTION:         Variables for PRS2CLAS.PBL       *
. *                                                        *
. *     DATE WRITTEN:     15/07/1993                       *
. *                                                        *
. *     AUTHOR:           Robert Sumsion                   *
. *                                                        *
. *     MODIFICATIONS:                                     *
. *       V10.03.01 05/06/2012  Davin         CAR 260600   *
. *                 Added KK                               *
. *       V9.10.01  08/07/2008  Jill Habasque CAR 172586   *
. *                 Added MF                               *
. *       V9.04.01  19/05/2005  Peter Vela                 *
. *                 2005 PRS/2 Stat Changes                *
. *                 Added PW,PX and PY                     *
. *       V9.02.00  11/09/2002  Jill Habasque 02/03 Mods   *
. *                 Added JP,JN & NT                       *
. *       V5.07.02  15/12/1999  Greg Horvat      SRF 636354*
. *                 Added MA                               *
. *     V5.07.01     J.Tan                                 *
. *                  Added new variables for 1999          *
. *     V5.01.01     Gabrielle    SRF 133191               *
. *                  Added HR and Removed PC & VC          *
. *     V5.03.01     Howellsy     1995                     *
. *                  Added UQ.                             *
. **********************************************************
.  
. Vars.   Type          PTCNHOSP  Category   Description
.------   ----   ----   --------  --------   ----------------------------------
PRS2$MP   INIT   "MP "     1         1       * Contracted Patient (prv hosp&day)
PRS2$HP   INIT   "HP "     1         1       * Contracted Patient (prior 1/7/99)
.
PRS2$ME   INIT   "ME "     1         4       * Ineligible - exempt (No Charge)
PRS2$MF   INIT   "MF "     1         4       * Ineligible - Asylum seeker
PRS2$HE   INIT   "HE "     1         4       * Ineligible - exempt (No Charge)
.
PRS2$HC   INIT   "HC "     0         5       * Contracted Patient(prv hosp&day)
.
PRS2$MR   INIT   "MR "     1         2       * Planned geriatric respite care 
PRS2$HR   INIT   "HR "     1         2       * Planned geriatric respite care 
.
PRS2$MN   INIT   "MN "     1         6       * Public NHT - without NH5
PRS2$HPN  INIT   "HPN"     1         6       * Public NHT - without NH5
.
PRS2$M5   INIT   "M5 "     1         5       * Public NHT - with NH5
PRS2$HP5  INIT   "HP5"     1         5       * Public NHT - with NH5
.
PRS2$MA   INIT   "MA "     1         2       * Reciprocal health care agreement
.
PRS2$PA   INIT   "PA "     0         1       * Advanced Surgery 1 (1-14 days)
PRS2$PA1  INIT   "PA1"     0         1       * Advanced Surgery 1 (1-14 days)
.
PRS2$PB   INIT   "PB "     0         1       * Advanced Surgery 2 (15+  days)
PRS2$PA2  INIT   "PA2"     0         1       * Advanced Surgery 2 (15+  days)
.
PRS2$PC   INIT   "PC "     0         1       * Surgery 1 (1-14 days)
PRS2$PJ1  INIT   "PJ1"     0         1       * Surgery 1 (1-14 days)
.
PRS2$PD   INIT   "PD "     0         1       * Surgery 2 (15+  days)
PRS2$PJ2  INIT   "PJ2"     0         1       * Surgery 2 (15+  days)
.
PRS2$PE   INIT   "PE "     0         1       * Medical 1 (1-14 days)
PRS2$PM1  INIT   "PM1"     0         1       * Medical 1 (1-14 days)
.
PRS2$PF   INIT   "PF "     0         1       * Medical 2 (15+  days)
PRS2$PM2  INIT   "PM2"     0         1       * Medical 2 (15+  days)
.
PRS2$PG   INIT   "PG "     0         1       * Obstetric 1 (1-14 days)
PRS2$PO1  INIT   "PO1"     0         1       * Obstetric 1 (1-14 days)
.
PRS2$PH   INIT   "PH "     0         1       * Obstetric 2 (15+  days)
PRS2$PO2  INIT   "PO2"     0         1       * Obstetric 2 (15+  days)
.
PRS2$PI   INIT   "PI "     0         1       * Rehabilitation (01-49 days)
PRS2$PR1  INIT   "PR1"     0         1       * Rehabilitation (01-49 days)
.
PRS2$PJ   INIT   "PJ "     0         1       * Rehabilitation (50-65 days)
PRS2$PR2  INIT   "PR2"     0         1       * Rehabilitation (50-65 days)
.
PRS2$PK   INIT   "PK "     0         1       * Rehabilitation (66+   days)
PRS2$PR3  INIT   "PR3"     0         1       * Rehabilitation (66+   days)
.
PRS2$PL   INIT   "PL "     0         1       * Psychiatric 1 (01-42 days)
PRS2$PY1  INIT   "PY1"     0         1       * Psychiatric 1 (01-42 days)
.
PRS2$PM   INIT   "PM "     0         1       * Psychiatric 2 (43-65 days)
PRS2$PY2  INIT   "PY2"     0         1       * Psychiatric 2 (43-65 days)
.
PRS2$PN   INIT   "PN "     0         1       * Psychiatric 3 (66+   days)
PRS2$PY3  INIT   "PY3"     0         1       * Psychiatric 3 (66+   days)
.
PRS2$PO   INIT   "PO "     0         1       * Same Day (Band 1)        
PRS2$PD1  INIT   "PD1"     0         1       * Same Day (Band 1)        
.
PRS2$PP   INIT   "PP "     0         1       * Same Day (Band 2)        
PRS2$PD2  INIT   "PD2"     0         1       * Same Day (Band 2)        
.
PRS2$PQ   INIT   "PQ "     0         1       * Same Day (Band 3)        
PRS2$PD3  INIT   "PD3"     0         1       * Same Day (Band 3)        
.
PRS2$PR   INIT   "PR "     0         1       * Same Day (Band 4)        
PRS2$PD4  INIT   "PD4"     0         1       * Same Day (Band 4)        
.
PRS2$PS   INIT   "PS "     0         2       * Private NHT-Gen care no NH5
PRS2$PBN  INIT   "PBN"     0         2       * Private NHT-Gen care no NH5
.
PRS2$PT   INIT   "PT "     0         2       * Private NHT-Gen care with NH5
PRS2$PB5  INIT   "PB5"     0         2       * Private NHT-Gen care with NH5
.
PRS2$PU   INIT   "PU "     0         2       * Private NHT-Ext care no NH5
PRS2$PEN  INIT   "PEN"     0         2       * Private NHT-Ext care no NH5
.
PRS2$PV   INIT   "PV "     0         2       * Private NHT-Ext care with NH5
PRS2$PE5  INIT   "PE5"     0         2       * Private NHT-Ext care with NH5
.
PRS2$PW   INIT   "PW "     0,1       1,1     * Intensive Care Unit     *I-60167
PRS2$PX   INIT   "PX "     0,1       1,1     * Coronary Care Unit      *I-60167
PRS2$PY   INIT   "PY "     0,1       1,1     * High Dependency Unit    *I-60167
.
PRS2$VX   INIT   "VX "     0         1       * DVA - after 01/07/99
PRS2$VA1  INIT   "VA1"     0         1       * Advanced Surgery 1 (1-14 days)
PRS2$VA2  INIT   "VA2"     0         2       * Advanced Surgery 2 (15+  days)
PRS2$VJ1  INIT   "VJ1"     0         2       * Surgery 1 (1-14 days)
PRS2$VJ2  INIT   "VJ2"     0         2       * Surgery 2 (15+  days)
PRS2$VM1  INIT   "VM1"     0         2       * Medical 1 (1-14 days)
PRS2$VM2  INIT   "VM2"     0         2       * Medical 2 (15+  days)
PRS2$VO1  INIT   "VO1"     0         2       * Obstetric 1 (1-14 days)
PRS2$VO2  INIT   "VO2"     0         2       * Obstetric 2 (15+  days)
PRS2$VR1  INIT   "VR1"     0         2       * Rehabilitation (01-49 days)
PRS2$VR2  INIT   "VR2"     0         2       * Rehabilitation (50-65 days)
PRS2$VR3  INIT   "VR3"     0         2       * Rehabilitation (66+   days)
PRS2$VY1  INIT   "VY1"     0         2       * Psychiatric 1 (01-42 days)
PRS2$VY2  INIT   "VY2"     0         2       * Psychiatric 2 (43-65 days)
PRS2$VY3  INIT   "VY3"     0         2       * Psychiatric 3 (66+   days)
PRS2$VD1  INIT   "VD1"     0         2       * Same Day
.
PRS2$VN   INIT   "VN "     0         8       * Dept. of Veteran Afs-Gen no NH5
PRS2$VBN  INIT   "VBN"     0         8       * Dept. of Veteran Afs-Gen no NH5
PRS2$VEN  INIT   "VEN"     0         8       * Dept. of Veteran Afs-Ext no NH5
.
PRS2$V5   INIT   "V5 "     0         7       * Dept. of Veteran Afs-Gen with NH5
PRS2$VB5  INIT   "VB5"     0         7       * Dept. of Veteran Afs-Gen with NH5
PRS2$VE5  INIT   "VE5"     0         7       * Dept. of Veteran Afs-Ext with NH5
.
. Compensable
PRS2$WC   INIT   "WC "     0,1       3,3     * Victorian WorkCover Authoirty    
PRS2$SA   INIT   "SA "     0,1       3,3     * Victorian WorkCover Authoirty    
.
PRS2$SAI  INIT   "SAI"     0,1       3,3     *   Intensive Care                
PRS2$SAC  INIT   "SAC"     0,1       3,3     *   Coronary Care                  
.
PRS2$WN   INIT   "WN "     0,1       3,9     *   Non-Acute                      
PRS2$SAN  INIT   "SAN"     0,1       3,9     *   Non-Acute                      
.
PRS2$TA   INIT   "TA "     0,1       3,3     * Transport Accident Commission    
PRS2$ST   INIT   "ST "     0,1       3,3     * Transport Accident Commission    
.
PRS2$STI  INIT   "STI"     0,1       3,3     *   Intensive Care                
PRS2$STC  INIT   "STC"     0,1       3,3     *   Coronary Care                  
.
PRS2$TN   INIT   "TN "     0,1       3,9     *   Non-Acute                      
PRS2$STN  INIT   "STN"     0,1       3,9     *   Non-Acute                      
.
PRS2$AS   INIT   "AS "     0,1       3,3     * Armed Services                   
PRS2$SF   INIT   "SF "     0,1       3,3     * Armed Services                   
.
PRS2$SFI  INIT   "SFI"     0,1       3,3     *   Intensive Care                
PRS2$SFC  INIT   "SFC"     0,1       3,3     *   Coronary Care                  
.
PRS2$AN   INIT   "AN "     0,1       3,9     *   Non-Acute                      
PRS2$SFN  INIT   "SFN"     0,1       3,9     *   Non-Acute                      
.
PRS2$SS   INIT   "SS "     0,1       3,3     * Seamen
PRS2$SSI  INIT   "SSI"     0,1       3,3     *   Intensive Care                
PRS2$SSC  INIT   "SSC"     0,1       3,3     *   Coronary Care                  
.
PRS2$SN   INIT   "SN "     0,1       3,9     *   Non-Acute                      
PRS2$SSN  INIT   "SSN"     0,1       3,9     *   Non-Acute                      
.
PRS2$CL   INIT   "CL "     0,1       3,3     * Common Law Recoveries
PRS2$SC   INIT   "SC "     0,1       3,3     * Common Law Recoveries
PRS2$SCI  INIT   "SCI"     0,1       3,3     *   Intensive Care                
PRS2$SCC  INIT   "SCC"     0,1       3,3     *   Coronary Care                  
.
PRS2$CN   INIT   "CN "     0,1       3,9     *   Non-Acute                      
PRS2$SCN  INIT   "SCN"     0,1       3,9     *   Non-Acute                      
.
. Other Compensable
PRS2$OO   INIT   "OO "     0,1       3,3     * Other compensable     
PRS2$SO   INIT   "SO "     0,1       3,3     * Other compensable     
.
PRS2$SOI  INIT   "SOI"     0,1       3,3     *   Intensive Care                
PRS2$SOC  INIT   "SOC"     0,1       3,3     *   Coronary Care                  
PRS2$SON  INIT   "SON"     0,1       3,9     *   Non-Acute                      
.
. Ineligible non-Australian residents            
PRS2$XX   INIT   "XX "     0,1       4,4     * Ineligible non-Australian resi
PRS2$XXI  INIT   "XXI"     0,1       4,4     *   Intensive Care                
PRS2$XXC  INIT   "XXC"     0,1       4,4     *   Coronary Care                  
.
PRS2$XN   INIT   "XN "     0,1       4,10    *   Non-Acute               
PRS2$XXN  INIT   "XXN"     0,1       4,10    *   Non-Acute               
.
. Newborn
PRS2$UQ   INIT   "UQ "     0,1       10,11   * Unqualified Newborn
PRS2$NT   INIT   "NT "     0,1       10,11   * Newborn
.
. Prisoners
PRS2$JP   INIT   "JP "     0,1       4,3     * Prisoner Acute
PRS2$JN   INIT   "JN "     0,1       5,9     * Prisoner Non-Acute
.
. Posthumous Organ Procurement
PRS2$KK   INIT   "KK "     1         12      * Posthumous Organ Procurement
