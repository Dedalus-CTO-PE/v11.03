.
.    INCLUDE NAME : WATTR1IO.INC
.
.    FILE  I/O REQUESTS FOR WAITING LISTS TREATMENT FILE - WATTR1FD
.
.    KEY19    DIM       19   WATTR1A1
.    KEY20    DIM       20   WATTR1A2
.    KEY27    DIM       27   WATTR1A3
.    KEY27    DIM       27   WATTR1A4
.    KEY28    DIM       28   WATTR1A6
.
.    OVRCD      0 = NOT OVER
.               1 = RECORD DOES NOT EXIST
.               2 = RECORD IS LOCKED
.
.*******************************************************************************
. V11.02.01  04/03/2022  Thanh T          TSK 0889899
.            Added WMDESC2 - Procedure Description 2
.                  WMDESC3 - Procedure Description 3
. V11.00.01  24/03/2020  Thanh T          TSK 0888687  
.            Added Referral Accepted Date
.*******************************************************************************
.        V10.04.01  08/02/2014  Ania P          CAR 294376  
.                   Moved WTWMPDSC out of SPARE
.        V10.03.02  20/03/2013  Patrick Adair   CAR 281132
.                   Added WTWMPDSC - Procedure Description Comments
.        V10.03.01  14/11/2011  Mike Laming     CAR 234014
.                   Add WTWMACPR - "Actual Procedure Event No."
.         V9.04.01  23/09/2005   Mike Laming    CAR 52354
.                   Added WTWMCSST, WTWMCSDT - Consented, Consent Changed Date
.                   10/03/1992    Steve O'Gorman
.                   Added RDP Routine
.                   28/10/1993    Justin Coates  (GP Practice changes)
.                   added WTWMGPPT
.                    3/12/1993    Rob Leonard
.                   Added RDPTREA2
.                   07/03/1994    Justin Coates  SRF 440719
.                   added WTWMDOFR
.                   07/04/1994    Paul Howells   Dudley 
.                   added 6th index 
.                   22/07/1994    bez            wgh
.                   Added WTWMACAT to WATTR1FD
. *                 13/10/1995   Howellsy         suht  
. *                 added wtwmoper  
. *                 14/04/97 Howellsy        RHA        
. *                 Added wmudef5-8, wtwmrank             
. *                 31/01/02 Ebon Clements
. *                 Added WTWMECNT                        
.*******************************************************************************
.
RDATREA1  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      WATTR1A1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSTREA1  RESET     KEY19
          READ      WATTR1A1,KEY19;;
          RETURN  
.
RDTREA1   MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      WATTR1A1,KEY19;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDKTREA1  MOVE      ZERO,OVRCD
          READKS    WATTR1A1;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDPTREA1  MOVE      ZERO,OVRCD
          READKP    WATTR1A1;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDATREA2  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      WATTR1A2,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSTREA2  RESET     KEY20
          READ      WATTR1A2,KEY20;;
          RETURN  
.
RDTREA2   MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      WATTR1A2,KEY20;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDKTREA2  MOVE      ZERO,OVRCD
          READKS    WATTR1A2;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDPTREA2  MOVE      ZERO,OVRCD
          READKP    WATTR1A2;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.


RDATREA3  RESET     KEY27
          MOVE      ZERO,OVRCD
          READ      WATTR1A3,KEY27;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSTREA3  RESET     KEY27
          READ      WATTR1A3,KEY27;;
          RETURN  
.
RDTREA3   MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      WATTR1A3,KEY27;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDKTREA3  MOVE      ZERO,OVRCD
          READKS    WATTR1A3;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
. ------ previous read on the third index ------
. ------ Added 07/08/90 Justin Coates     ------
. ------       needed for IBAWAT10 mod's  ------
.
RDPTREA3  MOVE      ZERO,OVRCD
          READKP    WATTR1A3;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDSTREA4  RESET     KEY27
          READ      WATTR1A4,KEY27;;
          RETURN  
.
RDPTREA4  MOVE      ZERO,OVRCD
          READKP    WATTR1A4;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
.
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDKTREA4  MOVE      ZERO,OVRCD
          READKS    WATTR1A4;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  

.
RDATREA5  RESET     KEY32
          MOVE      ZERO,OVRCD
          READ      WATTR1A5,KEY32;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSTREA5  RESET     KEY32
          READ      WATTR1A5,KEY32;;
          RETURN  
.
RDTREA5   MOVE      ZERO,OVRCD
          RESET     KEY32
          READ      WATTR1A5,KEY32;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDKTREA5  MOVE      ZERO,OVRCD
          READKS    WATTR1A5;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDPTREA5  MOVE      ZERO,OVRCD
          READKP    WATTR1A5;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
.         Index 6
.
RDATREA6  RESET     KEY28
          MOVE      ZERO,OVRCD
          READ      WATTR1A6,KEY28;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSTREA6  RESET     KEY28
          READ      WATTR1A6,KEY28;;
          RETURN  
.
RDTREA6   MOVE      ZERO,OVRCD
          RESET     KEY28
          READ      WATTR1A6,KEY28;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDKTREA6  MOVE      ZERO,OVRCD
          READKS    WATTR1A6;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDPTREA6  MOVE      ZERO,OVRCD
          READKP    WATTR1A6;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
.         Index 7
.
RDATREA7  RESET     KEY31
          MOVE      ZERO,OVRCD
          READ      WATTR1A7,KEY31;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSTREA7  RESET     KEY31
          READ      WATTR1A7,KEY31;;
          RETURN  
.
RDTREA7   MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      WATTR1A7,KEY31;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDKTREA7  MOVE      ZERO,OVRCD
          READKS    WATTR1A7;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
RDPTREA7  MOVE      ZERO,OVRCD
          READKP    WATTR1A7;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
.         Index 8
.
RDATREA8  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      WATTR1A8,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSTREA8  RESET     KEY20
          READ      WATTR1A8,KEY20;;
          RETURN
.
RDTREA8   MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      WATTR1A8,KEY20;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN
.
RDKTREA8  MOVE      ZERO,OVRCD
          READKS    WATTR1A8;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN 
.
RDPTREA8  MOVE      ZERO,OVRCD
          READKP    WATTR1A8;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN 
.
...............................................................................
.
WRTREA1   RESET     KEY19
          MOVE      WMCNT,DWMCNT
          MOVE      WMSTAT,DWMSTAT
          MOVE      PASSCODE,WTWMOPER
          WRITE     WATTR1A1,KEY19;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          RETURN
.
UPTREA1
          MOVE      SP2,WTWMPORT
          MOVE      WMCNT,DWMCNT
          MOVE      WMSTAT,DWMSTAT
          UPDATE    WATTR1A1;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          RETURN  
.
UPTREA2   MOVE      WMCNT,DWMCNT
          MOVE      WMSTAT,DWMSTAT
          UPDATE    WATTR1A2;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          RETURN  
.
UPTREA3   MOVE      WMCNT,DWMCNT
          MOVE      WMSTAT,DWMSTAT
          UPDATE    WATTR1A3;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          RETURN  
.
WRTREA6   RESET     KEY28
          MOVE      WMCNT,DWMCNT
          MOVE      WMSTAT,DWMSTAT
          MOVE      PASSCODE,WTWMOPER
          WRITE     WATTR1A6,KEY28;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          RETURN
.
UPTREA6
          MOVE      SP2,WTWMPORT
          MOVE      WMCNT,DWMCNT
          MOVE      WMSTAT,DWMSTAT
          UPDATE    WATTR1A6;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          RETURN  
.
UPTREA8
          MOVE      SP2,WTWMPORT
          MOVE      WMCNT,DWMCNT
          MOVE      WMSTAT,DWMSTAT
          UPDATE    WATTR1A8;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          RETURN
.
.
DETREA1   RESET     KEY19
          MOVE      ZERO,OVRCD
          DELETE    WATTR1A1,KEY19
          RETURN
.
DETREA6   RESET     KEY28
          MOVE      ZERO,OVRCD
          DELETE    WATTR1A6,KEY28
          RETURN
.
.
.******************************************************************************
.    Locking Routines 1st index created on the 13/08/1990 by Bill Dew
.
.    Read and lock record 
.
RLWTTRE1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READL     WATTR1A1,KEY19;WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC:
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
.    Unlock record 
.
UUWTTRE1  RESET     KEY19
          UNLOCK    WATTR1A1
          RETURN
.
.******************************************************************************
.
ASTREA1   RESET     KEY19
          READ      WATAUTR1,KEY19;;
          RETURN  
.
AKTREA1   MOVE      ZERO,OVRCD
          READKS    WATAUTR1;WTWMAUDD,WTWMAUDT,WTWMAUDP,WTWMAUDR:
                             WTWMAUDS,WTWMAUDO:
                             WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC: 
                             WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                             WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                             WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                             WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                             WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                             WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                             WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                             WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                             WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                             WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                             WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                             WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                             WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                             WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                             WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                             WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWMCNT,WMCNT
          MOVE      DWMSTAT,WMSTAT
          RETURN  
.
AWTREA1   RESET     KEY19
          MOVE      WMCNT,DWMCNT
          MOVE      WMSTAT,DWMSTAT
          MOVE      PASSCODE,WTWMOPER
          WRITE     WATAUTR1,KEY19;WTWMAUDD,WTWMAUDT,WTWMAUDP,WTWMAUDR:
                                   WTWMAUDS,WTWMAUDO:
                                   WMURNO,WMCODE,DWMCNT,WMTIME,WMDESC: 
                                   WMREASON,DWMSTAT,WMDATE1,WMDATE2,WMDATE3:
                                   WMDATE4,WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY:
                                   WMPTY,WMNOTICE,WMPTYPE,WMPCAT:
                                   WMUDEF1,WMUDEF2,WMUDEF3,WMUDEF4:
                                   WMBOOK,WMKEYDT,WTWMPORT,WTWMREAD:
                                   WTWMDEDA,WTWMUNIQ,WTWMSENT,WTWMCLSS:
                                   WTWMDTAD,WTWMACAT,WTWMGADD,WTWMDABD:
                                   WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                   WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO:
                                   WTWMGPPT,WTWMDOFR,WTWMOPER,WTWMIHSP:
                                   WTWMVLSF,WTWMPRO2,WTWMPRO3,WTWMTRPA:
                                   WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                   WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA:
                                   WTWMPHSP,WTWMBSCD,WTWMRSFL,WTWMECNT:
                                   WTWMCSST,WTWMCSDT,WTWMASSR,WTWMACPR:
                                   WTWMPDSC,WTWMRADT,WMDESC2,WMDESC3,WTWMSPAR
          RETURN
.
ADTREA1   RESET     KEY19
          MOVE      ZERO,OVRCD
          DELETE    WATAUTR1,KEY19
          RETURN
+
.

