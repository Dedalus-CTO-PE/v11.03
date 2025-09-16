.******************************************************************************
.* System   :  Inpatients                                                     *
.* Program  :  PMSEDBXM.INC                                                   *
.* Desc     :  eAdmission Form XML IO                                         *
.******************************************************************************
.* Date     :  01/02/2013                                                     *
.* Author   :  Jill Parkinson                                                 *
.* Comment  :                                                                 *
.* Mod's    :                                                                 *
.*                                                                            *
.* V10.03.00 01/02/2013  Jill Parkinson CAR 280425                            *
.*           Created include                                                  *
.******************************************************************************
.
. 
.******************************************************************************
.  LDEBXML : Load XML variable number for PMSEDBFD
.            This routine will scan a list of variables defined in PMSEDBXD
.            to find the corresponding field number to store on file       
.
.  Requires :   ADFRSVAR - The string to find eg. "AdmissionTypeID"
.
.  Returns  :   ADFRSRCH - The variable number found.               
.               EXIT    - 0=Field is available                     
.                         1=Invalid Field                              
.******************************************************************************
LDEDBXML  MOVE      ZERO,EXIT
          MOVE      ZERO,ADFRSRCH
.
          STRIP     ADFRSVAR
          SEARCH    ADFRSVAR,ADFR0001,PMDBNVAR,ADFRSRCH
          COMPARE   ZERO,ADFRSRCH
          GOTO      LDEDBX90 IF EQUAL
.
          LOAD      KEY8,ADFRSRCH,PMDB0001,PMDB0002,PMDB0003,PMDB0004,PMDB0005:
                                 PMDB0006,PMDB0007,PMDB0008,PMDB0009,PMDB0010:
                                 PMDB0011,PMDB0012,PMDB0013,PMDB0014,PMDB0015:
                                 PMDB0016,PMDB0017,PMDB0018,PMDB0019,PMDB0020:
                                 PMDB0021,PMDB0022,PMDB0023,PMDB0024,PMDB0025:
                                 PMDB0026,PMDB0027,PMDB0028,PMDB0029,PMDB0030:
                                 PMDB0031,PMDB0032,PMDB0033,PMDB0034,PMDB0035:
                                 PMDB0036,PMDB0037,PMDB0038,PMDB0039,PMDB0040:
                                 PMDB0041,PMDB0042,PMDB0043,PMDB0044,PMDB0045:
                                 PMDB0046,PMDB0047,PMDB0048,PMDB0049,PMDB0050:
                                 PMDB0051,PMDB0052,PMDB0053,PMDB0054,PMDB0055:
                                 PMDB0056,PMDB0057,PMDB0058,PMDB0059,PMDB0060:
                                 PMDB0061,PMDB0062,PMDB0063,PMDB0064,PMDB0065:
                                 PMDB0066,PMDB0067,PMDB0068,PMDB0069,PMDB0070:
                                 PMDB0071,PMDB0072,PMDB0073,PMDB0074,PMDB0075:
                                 PMDB0076,PMDB0077,PMDB0078,PMDB0079,PMDB0080:
                                 PMDB0081,PMDB0082,PMDB0083,PMDB0084,PMDB0085:
                                 PMDB0086,PMDB0087,PMDB0088,PMDB0089,PMDB0090:
                                 PMDB0091,PMDB0092,PMDB0093,PMDB0094,PMDB0095:
                                 PMDB0096,PMDB0097,PMDB0098,PMDB0099,PMDB0100:
                                 PMDB0101,PMDB0102,PMDB0103,PMDB0104,PMDB0105:
                                 PMDB0106,PMDB0107,PMDB0108,PMDB0109,PMDB0110:
                                 PMDB0111,PMDB0112,PMDB0113,PMDB0114,PMDB0115:
                                 PMDB0116,PMDB0117,PMDB0118,PMDB0119,PMDB0120:
                                 PMDB0121,PMDB0122,PMDB0123,PMDB0124,PMDB0125:
                                 PMDB0126,PMDB0127,PMDB0128,PMDB0129,PMDB0130:
                                 PMDB0131,PMDB0132,PMDB0133,PMDB0134,PMDB0135:
                                 PMDB0136,PMDB0137,PMDB0138,PMDB0139,PMDB0140:
                                 PMDB0141,PMDB0142,PMDB0143,PMDB0144,PMDB0145:
                                 PMDB0146,PMDB0147,PMDB0148,PMDB0149,PMDB0150:
                                 PMDB0151,PMDB0152,PMDB0153,PMDB0154,PMDB0155:
                                 PMDB0156,PMDB0157,PMDB0158,PMDB0159,PMDB0160:
                                 PMDB0161,PMDB0162,PMDB0163,PMDB0164,PMDB0165:
                                 PMDB0166,PMDB0167,PMDB0168,PMDB0169,PMDB0170:
                                 PMDB0171,PMDB0172,PMDB0173,PMDB0174,PMDB0175:
                                 PMDB0176,PMDB0177,PMDB0178,PMDB0179,PMDB0180:
                                 PMDB0181,PMDB0182,PMDB0183,PMDB0184,PMDB0185:
                                 PMDB0186,PMDB0187,PMDB0188,PMDB0189,PMDB0190:
                                 PMDB0191,PMDB0192,PMDB0193,PMDB0194,PMDB0195:
                                 PMDB0196,PMDB0197,PMDB0198,PMDB0199,PMDB0200:
                                 PMDB0201,PMDB0202,PMDB0203,PMDB0204,PMDB0205:
                                 PMDB0206,PMDB0207,PMDB0208,PMDB0209,PMDB0210:
                                 PMDB0211,PMDB0212,PMDB0213,PMDB0214,PMDB0215:
                                 PMDB0216
.
          MOVE      ZERO,EXIT
          GOTO      LDEDBX99
.
LDEDBX90  MOVE      ONE,EXIT
          GOTO      LDEDBX99
.
LDEDBX99  RETURN
+
.******************************************************************************
. STEDBXML : Store XML values for PMSEDBFD
.
.  Requires :   ADFRSVAR - The string to find eg. "AdmissionTypeID"
.
.  Returns  :   KEY8  - The variable name                        
.******************************************************************************
.
STEDBXML  MOVE      ZERO,EXIT
          MOVE      ZERO,ADFRSRCH
.
          SEARCH    ADFRSVAR,ADFR0001,PMDBNVAR,ADFRSRCH
          COMPARE   ZERO,ADFRSRCH
          GOTO      STEDBX90 IF EQUAL
.
          STORE     KEY8,ADFRSRCH,PMDB0001,PMDB0002,PMDB0003,PMDB0004,PMDB0005:
                                 PMDB0006,PMDB0007,PMDB0008,PMDB0009,PMDB0010:
                                 PMDB0011,PMDB0012,PMDB0013,PMDB0014,PMDB0015:
                                 PMDB0016,PMDB0017,PMDB0018,PMDB0019,PMDB0020:
                                 PMDB0021,PMDB0022,PMDB0023,PMDB0024,PMDB0025:
                                 PMDB0026,PMDB0027,PMDB0028,PMDB0029,PMDB0030:
                                 PMDB0031,PMDB0032,PMDB0033,PMDB0034,PMDB0035:
                                 PMDB0036,PMDB0037,PMDB0038,PMDB0039,PMDB0040:
                                 PMDB0041,PMDB0042,PMDB0043,PMDB0044,PMDB0045:
                                 PMDB0046,PMDB0047,PMDB0048,PMDB0049,PMDB0050:
                                 PMDB0051,PMDB0052,PMDB0053,PMDB0054,PMDB0055:
                                 PMDB0056,PMDB0057,PMDB0058,PMDB0059,PMDB0060:
                                 PMDB0061,PMDB0062,PMDB0063,PMDB0064,PMDB0065:
                                 PMDB0066,PMDB0067,PMDB0068,PMDB0069,PMDB0070:
                                 PMDB0071,PMDB0072,PMDB0073,PMDB0074,PMDB0075:
                                 PMDB0076,PMDB0077,PMDB0078,PMDB0079,PMDB0080:
                                 PMDB0081,PMDB0082,PMDB0083,PMDB0084,PMDB0085:
                                 PMDB0086,PMDB0087,PMDB0088,PMDB0089,PMDB0090:
                                 PMDB0091,PMDB0092,PMDB0093,PMDB0094,PMDB0095:
                                 PMDB0096,PMDB0097,PMDB0098,PMDB0099,PMDB0100:
                                 PMDB0101,PMDB0102,PMDB0103,PMDB0104,PMDB0105:
                                 PMDB0106,PMDB0107,PMDB0108,PMDB0109,PMDB0110:
                                 PMDB0111,PMDB0112,PMDB0113,PMDB0114,PMDB0115:
                                 PMDB0116,PMDB0117,PMDB0118,PMDB0119,PMDB0120:
                                 PMDB0121,PMDB0122,PMDB0123,PMDB0124,PMDB0125:
                                 PMDB0126,PMDB0127,PMDB0128,PMDB0129,PMDB0130:
                                 PMDB0131,PMDB0132,PMDB0133,PMDB0134,PMDB0135:
                                 PMDB0136,PMDB0137,PMDB0138,PMDB0139,PMDB0140:
                                 PMDB0141,PMDB0142,PMDB0143,PMDB0144,PMDB0145:
                                 PMDB0146,PMDB0147,PMDB0148,PMDB0149,PMDB0150:
                                 PMDB0151,PMDB0152,PMDB0153,PMDB0154,PMDB0155:
                                 PMDB0156,PMDB0157,PMDB0158,PMDB0159,PMDB0160:
                                 PMDB0161,PMDB0162,PMDB0163,PMDB0164,PMDB0165:
                                 PMDB0166,PMDB0167,PMDB0168,PMDB0169,PMDB0170:
                                 PMDB0171,PMDB0172,PMDB0173,PMDB0174,PMDB0175:
                                 PMDB0176,PMDB0177,PMDB0178,PMDB0179,PMDB0180:
                                 PMDB0181,PMDB0182,PMDB0183,PMDB0184,PMDB0185:
                                 PMDB0186,PMDB0187,PMDB0188,PMDB0189,PMDB0190:
                                 PMDB0191,PMDB0192,PMDB0193,PMDB0194,PMDB0195:
                                 PMDB0196,PMDB0197,PMDB0198,PMDB0199,PMDB0200:
                                 PMDB0201,PMDB0202,PMDB0203,PMDB0204,PMDB0205:
                                 PMDB0206,PMDB0207,PMDB0208,PMDB0209,PMDB0210:
                                 PMDB0211,PMDB0212,PMDB0213,PMDB0214,PMDB0215:
                                 PMDB0216
.
          RETURN
+
