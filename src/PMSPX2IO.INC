.
. PMSPX2IO    
. --------
. Filename     : pmspx2af.dat
.
RSPMPX21  RESET     KEY8                                                        
          READ      PMSPX2A1,KEY8;;                                             
          RETURN
.
RAPMPX21  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSPX2A1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPX21  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSPX2A1,KEY8;PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR: 
                                  PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB: 
                                  PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML: 
                                  PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC: 
                                  PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI: 
                                  PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1: 
                                  PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO: 
                                  PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP: 
                                  PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE: 
                                  PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS: 
                                  PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT: 
                                  PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID: 
                                  PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6: 
                                  PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1: 
                                  PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9: 
                                  PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2: 
                                  PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6: 
                                  PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11: 
                                  PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX: 
                                  PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI: 
                                  PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID: 
                                  PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR: 
                                  PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5: 
                                  PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID: 
                                  PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18: 
                                  PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23: 
                                  PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28: 
                                  PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2: 
                                  PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4: 
                                  PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3: 
                                  PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1: 
                                  PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2: 
                                  PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7: 
                                  PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2: 
                                  PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPX21  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPX2A1;PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR:      
                             PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB:      
                             PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML:      
                             PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC:      
                             PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI:      
                             PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1:      
                             PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO:      
                             PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP:      
                             PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE:      
                             PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS:      
                             PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT:      
                             PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID:      
                             PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6:      
                             PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1:      
                             PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9:      
                             PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2:      
                             PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6:      
                             PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11:      
                             PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX:      
                             PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI:      
                             PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID:      
                             PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR:      
                             PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5:      
                             PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID:      
                             PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18:      
                             PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23:      
                             PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28:      
                             PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2:      
                             PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4:      
                             PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3:      
                             PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1:      
                             PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2:      
                             PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7:      
                             PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2:      
                             PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPX21  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPX2A1;PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR:      
                             PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB:      
                             PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML:      
                             PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC:      
                             PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI:      
                             PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1:      
                             PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO:      
                             PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP:      
                             PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE:      
                             PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS:      
                             PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT:      
                             PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID:      
                             PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6:      
                             PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1:      
                             PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9:      
                             PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2:      
                             PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6:      
                             PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11:      
                             PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX:      
                             PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI:      
                             PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID:      
                             PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR:      
                             PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5:      
                             PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID:      
                             PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18:      
                             PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23:      
                             PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28:      
                             PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2:      
                             PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4:      
                             PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3:      
                             PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1:      
                             PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2:      
                             PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7:      
                             PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2:      
                             PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPX21  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPX2A1;PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR:      
                             PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB:      
                             PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML:      
                             PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC:      
                             PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI:      
                             PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1:      
                             PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO:      
                             PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP:      
                             PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE:      
                             PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS:      
                             PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT:      
                             PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID:      
                             PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6:      
                             PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1:      
                             PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9:      
                             PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2:      
                             PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6:      
                             PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11:      
                             PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX:      
                             PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI:      
                             PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID:      
                             PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR:      
                             PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5:      
                             PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID:      
                             PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18:      
                             PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23:      
                             PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28:      
                             PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2:      
                             PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4:      
                             PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3:      
                             PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1:      
                             PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2:      
                             PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7:      
                             PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2:      
                             PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMPX21  RESET     KEY8                                                        
          WRITE     PMSPX2A1,KEY8;PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR: 
                                  PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB: 
                                  PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML: 
                                  PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC: 
                                  PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI: 
                                  PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1: 
                                  PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO: 
                                  PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP: 
                                  PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE: 
                                  PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS: 
                                  PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT: 
                                  PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID: 
                                  PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6: 
                                  PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1: 
                                  PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9: 
                                  PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2: 
                                  PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6: 
                                  PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11: 
                                  PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX: 
                                  PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI: 
                                  PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID: 
                                  PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR: 
                                  PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5: 
                                  PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID: 
                                  PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18: 
                                  PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23: 
                                  PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28: 
                                  PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2: 
                                  PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4: 
                                  PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3: 
                                  PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1: 
                                  PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2: 
                                  PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7: 
                                  PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2: 
                                  PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR           
          RETURN
.
DEPMPX21  RESET     KEY8                                                        
          DELETE    PMSPX2A1,KEY8                                               
          RETURN
.
RLPMPX21  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSPX2A1,KEY8;PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR: 
                                  PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB: 
                                  PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML: 
                                  PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC: 
                                  PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI: 
                                  PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1: 
                                  PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO: 
                                  PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP: 
                                  PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE: 
                                  PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS: 
                                  PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT: 
                                  PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID: 
                                  PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6: 
                                  PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1: 
                                  PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9: 
                                  PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2: 
                                  PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6: 
                                  PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11: 
                                  PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX: 
                                  PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI: 
                                  PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID: 
                                  PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR: 
                                  PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5: 
                                  PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID: 
                                  PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18: 
                                  PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23: 
                                  PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28: 
                                  PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2: 
                                  PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4: 
                                  PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3: 
                                  PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1: 
                                  PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2: 
                                  PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7: 
                                  PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2: 
                                  PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMPX21  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSPX2A1;PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR:      
                             PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB:      
                             PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML:      
                             PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC:      
                             PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI:      
                             PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1:      
                             PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO:      
                             PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP:      
                             PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE:      
                             PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS:      
                             PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT:      
                             PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID:      
                             PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6:      
                             PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1:      
                             PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9:      
                             PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2:      
                             PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6:      
                             PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11:      
                             PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX:      
                             PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI:      
                             PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID:      
                             PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR:      
                             PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5:      
                             PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID:      
                             PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18:      
                             PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23:      
                             PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28:      
                             PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2:      
                             PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4:      
                             PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3:      
                             PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1:      
                             PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2:      
                             PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7:      
                             PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2:      
                             PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMPX21  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSPX2A1;PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR:      
                             PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB:      
                             PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML:      
                             PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC:      
                             PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI:      
                             PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1:      
                             PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO:      
                             PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP:      
                             PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE:      
                             PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS:      
                             PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT:      
                             PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID:      
                             PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6:      
                             PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1:      
                             PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9:      
                             PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2:      
                             PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6:      
                             PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11:      
                             PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX:      
                             PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI:      
                             PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID:      
                             PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR:      
                             PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5:      
                             PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID:      
                             PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18:      
                             PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23:      
                             PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28:      
                             PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2:      
                             PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4:      
                             PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3:      
                             PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1:      
                             PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2:      
                             PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7:      
                             PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2:      
                             PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMPX21  RESET     KEY8                                                        
          UNLOCK    PMSPX2A1                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAPMPX00
          MOVE      "  105",AUDTSECT
          MOVE      "101",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAPMPX99 IF NOT EQUAL
.
          PACK     PMPXAUDD,CCC,CYY,CMM,CDD
          REP       " 0",PMPXAUDD
          CLOCK     TIME,PMPXAUDT
          MOVE      PORT,PMPXAUDP
          LOAD      PMPXAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,PMPXAUDS
          MOVE      PASSCODE,PMPXAUDO
          PACK      KEY19,PMPXAUDD,PMPXAUDT,PMPXAUDP,PMPXAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWPMPX
WAPMPX99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAPMPX00
          MOVE      "  105",AUDTSECT
          MOVE      "101",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAPMPX99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADPMPX
DAPMPX99  RETURN
ASPMPX2   RESET     KEY19                                                       
          READ      PMSAUDPX,KEY19;;                                            
          RETURN
.
AKPMPX2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PMSAUDPX;PMPXAUDD,PMPXAUDT,PMPXAUDP,PMPXAUDR,PMPXAUDS:      
                    PMPXAUDO,PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR:      
                             PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB:      
                             PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML:      
                             PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC:      
                             PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI:      
                             PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1:      
                             PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO:      
                             PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP:      
                             PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE:      
                             PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS:      
                             PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT:      
                             PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID:      
                             PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6:      
                             PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1:      
                             PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9:      
                             PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2:      
                             PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6:      
                             PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11:      
                             PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX:      
                             PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI:      
                             PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID:      
                             PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR:      
                             PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5:      
                             PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID:      
                             PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18:      
                             PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23:      
                             PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28:      
                             PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2:      
                             PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4:      
                             PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3:      
                             PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1:      
                             PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2:      
                             PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7:      
                             PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2:      
                             PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
AUPMPX2                                                                         
          UPDATE    PMSAUDPX;PMPXAUDD,PMPXAUDT,PMPXAUDP,PMPXAUDR,PMPXAUDS:      
                    PMPXAUDO,PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR:      
                             PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB:      
                             PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML:      
                             PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC:      
                             PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI:      
                             PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1:      
                             PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO:      
                             PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP:      
                             PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE:      
                             PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS:      
                             PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT:      
                             PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID:      
                             PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6:      
                             PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1:      
                             PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9:      
                             PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2:      
                             PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6:      
                             PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11:      
                             PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX:      
                             PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI:      
                             PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID:      
                             PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR:      
                             PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5:      
                             PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID:      
                             PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18:      
                             PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23:      
                             PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28:      
                             PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2:      
                             PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4:      
                             PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3:      
                             PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1:      
                             PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2:      
                             PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7:      
                             PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2:      
                             PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR                
          RETURN
.
AWPMPX2   RESET     KEY19                                                       
          WRITE     PMSAUDPX,KEY19;PMPXAUDD,PMPXAUDT,PMPXAUDP,PMPXAUDR,PMPXAUDS:
                    PMPXAUDO,PMPXURNO,PMPXRHC1,PMPXRH1G,PMPXR1GC,PMPXINTR:      
                             PMPXLNG1,PMPXLNG2,PMPXLNG3,PMPXPEML,PMPXEDOB:      
                             PMPXCMOB,PMPXCEML,PMPXCCRP,PMPXKMOB,PMPXKEML:      
                             PMPXKCRP,PMPXRMOB,PMPXREML,PMPXRCRP,PMPXMEDC:      
                             PMPXDETY,PMPXPRIS,PMPXCSER,PMPXPHEI,PMPXPWEI:      
                             PMPXDREC,PMPXMSNA,PMPXMGNA,PMPXMTLE,PMPXMAD1:      
                             PMPXMAD2,PMPXMAD3,PMPXMAD4,PMPXMPOS,PMPXMPNO:      
                             PMPXMBNO,PMPXMMNO,PMPXMEML,PMPXMCNT,PMPXMCRP:      
                             PMPXMLAB,PMPXMREL,PMPXFSNA,PMPXFGNA,PMPXFTLE:      
                             PMPXFAD1,PMPXFAD2,PMPXFAD3,PMPXFAD4,PMPXFPOS:      
                             PMPXFPNO,PMPXFBNO,PMPXFMNO,PMPXFEML,PMPXFCNT:      
                             PMPXFCRP,PMPXFLAB,PMPXFREL,PMPXTDIG,PMPXWBID:      
                             PMPXDVAC,PMPXPNSD,PMPXUYN4,PMPXUYN5,PMPXUYN6:      
                             PMPXABRG,PMPXPRVI,PMPXCRIN,PMPXHOML,PMPXUDC1:      
                             PMPXUDC2,PMPXUDC3,PMPXUSR7,PMPXUSR8,PMPXUSR9:      
                             PMPXMSNO,PMPXCONP,PMPXFLDR,PMPXIWI1,PMPXIWI2:      
                             PMPXIWI3,PMPXIHOS,PMPXPFSN,PMPXPFGN,PMPXSIN6:      
                             PMPXSIN7,PMPXSIN8,PMPXSIN9,PMPXSN10,PMPXSN11:      
                             PMPXSN12,PMPXSN13,PMPXSN14,PMPXSN15,PMPXPFAX:      
                             PMPXFNAM,PMPXSNAM,PMPXHFGN,PMPXHFSN,PMPXFUPI:      
                             PMPXVGPC,PMPXVGPP,PMPXVGPG,PMPXASNO,PMPXMAID:      
                             PMPXETHN,PMPXHFCN,PMPXLUBH,PMPXPMCN,PMPXPMCR:      
                             PMPXCRN1,PMPXCRN2,PMPXCRN3,PMPXCRN4,PMPXCRN5:      
                             PMPXOSMS,PMPXRPER,PMPXRDAT,PMPXUPRF,PMPXUUID:      
                             PMPXUDAT,PMPXUTIM,PMPXSN16,PMPXSN17,PMPXSN18:      
                             PMPXSN19,PMPXSN20,PMPXSN21,PMPXSN22,PMPXSN23:      
                             PMPXSN24,PMPXSN25,PMPXSN26,PMPXSN27,PMPXSN28:      
                             PMPXSN29,PMPXSN30,PMPXUDT1,PMPXUTM1,PMPXUDT2:      
                             PMPXUTM2,PMPXUDT3,PMPXUTM3,PMPXUDT4,PMPXUTM4:      
                             PMPXUDT5,PMPXUTM5,PMPXUCC1,PMPXUCC2,PMPXUCC3:      
                             PMPXUCC4,PMPXUCC5,PMPXAHC1,PMPXAHG1,PMPXAGC1:      
                             PMPXAHC2,PMPXAHG2,PMPXAGC2,PMPXAUF1,PMPXAUF2:      
                             PMPXAUF3,PMPXAUF4,PMPXAUF5,PMPXAUF6,PMPXAUF7:      
                             PMPXAUF8,PMPXAUF9,PMPXAU10,PMPXATF1,PMPXATF2:      
                             PMPXATF3,PMPXATF4,PMPXATF5,PMPXSPAR                
          RETURN
.
ADPMPX2   RESET     KEY19                                                       
          DELETE    PMSAUDPX,KEY19;                                             
          RETURN
.
