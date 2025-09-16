.
. PMSVX1IO    
. --------
. Filename     : pmsvx1af.dat
.
RSPMVX11  RESET     KEY8                                                        
          READ      PMSVX1A1,KEY8;;                                             
          RETURN
.
RAPMVX11  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSVX1A1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMVX11  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSVX1A1,KEY8;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR: 
                                  PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP: 
                                  PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4: 
                                  PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G: 
                                  PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4: 
                                  PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD: 
                                  PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD: 
                                  PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW: 
                                  PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT: 
                                  PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3: 
                                  PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4: 
                                  PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5: 
                                  PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD: 
                                  PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR: 
                                  PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP: 
                                  PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP: 
                                  PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC: 
                                  PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS: 
                                  PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES: 
                                  PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU: 
                                  PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1: 
                                  PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL: 
                                  PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP: 
                                  PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI: 
                                  PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO: 
                                  PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8: 
                                  PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13: 
                                  PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT: 
                                  PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC: 
                                  PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT: 
                                  PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH: 
                                  PMVXSPAR                                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMVX11  MOVE      ZERO,OVRCD                                                  
          READKS    PMSVX1A1;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMVX11  MOVE      ZERO,OVRCD                                                  
          READKP    PMSVX1A1;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMVX11  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSVX1A1;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMVX11  RESET     KEY8                                                        
          WRITE     PMSVX1A1,KEY8;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR: 
                                  PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP: 
                                  PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4: 
                                  PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G: 
                                  PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4: 
                                  PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD: 
                                  PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD: 
                                  PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW: 
                                  PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT: 
                                  PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3: 
                                  PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4: 
                                  PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5: 
                                  PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD: 
                                  PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR: 
                                  PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP: 
                                  PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP: 
                                  PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC: 
                                  PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS: 
                                  PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES: 
                                  PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU: 
                                  PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1: 
                                  PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL: 
                                  PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP: 
                                  PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI: 
                                  PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO: 
                                  PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8: 
                                  PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13: 
                                  PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT: 
                                  PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC: 
                                  PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT: 
                                  PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH: 
                                  PMVXSPAR                                      
          RETURN
.
DEPMVX11  RESET     KEY8                                                        
          DELETE    PMSVX1A1,KEY8                                               
          RETURN
.
RLPMVX11  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSVX1A1,KEY8;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR: 
                                  PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP: 
                                  PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4: 
                                  PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G: 
                                  PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4: 
                                  PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD: 
                                  PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD: 
                                  PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW: 
                                  PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT: 
                                  PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3: 
                                  PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4: 
                                  PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5: 
                                  PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD: 
                                  PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR: 
                                  PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP: 
                                  PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP: 
                                  PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC: 
                                  PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS: 
                                  PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES: 
                                  PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU: 
                                  PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1: 
                                  PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL: 
                                  PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP: 
                                  PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI: 
                                  PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO: 
                                  PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8: 
                                  PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13: 
                                  PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT: 
                                  PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC: 
                                  PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT: 
                                  PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH: 
                                  PMVXSPAR                                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMVX11  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSVX1A1;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMVX11  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSVX1A1;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMVX11  RESET     KEY8                                                        
          UNLOCK    PMSVX1A1                                                    
          RETURN
.
RSPMVX12  RESET     KEY16                                                       
          READ      PMSVX1A2,KEY16;;                                            
          RETURN
.
RAPMVX12  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVX1A2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMVX12  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVX1A2,KEY16;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:
                                   PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:
                                   PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:
                                   PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:
                                   PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:
                                   PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:
                                   PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:
                                   PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:
                                   PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:
                                   PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:
                                   PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:
                                   PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:
                                   PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:
                                   PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:
                                   PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:
                                   PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:
                                   PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:
                                   PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:
                                   PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:
                                   PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:
                                   PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:
                                   PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:
                                   PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:
                                   PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:
                                   PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:
                                   PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:
                                   PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:
                                   PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:
                                   PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:
                                   PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:
                                   PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:
                                   PMVXSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMVX12  MOVE      ZERO,OVRCD                                                  
          READKS    PMSVX1A2;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMVX12  MOVE      ZERO,OVRCD                                                  
          READKP    PMSVX1A2;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMVX12  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSVX1A2;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMVX12  RESET     KEY16                                                       
          WRITE     PMSVX1A2,KEY16;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:
                                   PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:
                                   PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:
                                   PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:
                                   PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:
                                   PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:
                                   PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:
                                   PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:
                                   PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:
                                   PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:
                                   PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:
                                   PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:
                                   PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:
                                   PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:
                                   PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:
                                   PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:
                                   PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:
                                   PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:
                                   PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:
                                   PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:
                                   PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:
                                   PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:
                                   PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:
                                   PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:
                                   PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:
                                   PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:
                                   PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:
                                   PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:
                                   PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:
                                   PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:
                                   PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:
                                   PMVXSPAR                                     
          RETURN
.
DEPMVX12  RESET     KEY16                                                       
          DELETE    PMSVX1A2,KEY16                                              
          RETURN
.
RLPMVX12  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSVX1A2,KEY16;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:
                                   PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:
                                   PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:
                                   PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:
                                   PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:
                                   PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:
                                   PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:
                                   PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:
                                   PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:
                                   PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:
                                   PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:
                                   PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:
                                   PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:
                                   PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:
                                   PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:
                                   PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:
                                   PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:
                                   PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:
                                   PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:
                                   PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:
                                   PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:
                                   PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:
                                   PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:
                                   PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:
                                   PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:
                                   PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:
                                   PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:
                                   PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:
                                   PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:
                                   PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:
                                   PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:
                                   PMVXSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMVX12  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSVX1A2;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMVX12  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSVX1A2;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMVX12  RESET     KEY16                                                       
          UNLOCK    PMSVX1A2                                                    
          RETURN
.
RSPMVX13  RESET     KEY11                                                       
          READ      PMSVX1A3,KEY11;;                                            
          RETURN
.
RAPMVX13  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVX1A3,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMVX13  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVX1A3,KEY11;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:
                                   PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:
                                   PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:
                                   PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:
                                   PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:
                                   PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:
                                   PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:
                                   PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:
                                   PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:
                                   PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:
                                   PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:
                                   PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:
                                   PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:
                                   PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:
                                   PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:
                                   PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:
                                   PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:
                                   PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:
                                   PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:
                                   PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:
                                   PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:
                                   PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:
                                   PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:
                                   PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:
                                   PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:
                                   PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:
                                   PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:
                                   PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:
                                   PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:
                                   PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:
                                   PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:
                                   PMVXSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMVX13  MOVE      ZERO,OVRCD                                                  
          READKS    PMSVX1A3;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMVX13  MOVE      ZERO,OVRCD                                                  
          READKP    PMSVX1A3;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMVX13  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSVX1A3;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMVX13  RESET     KEY11                                                       
          WRITE     PMSVX1A3,KEY11;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:
                                   PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:
                                   PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:
                                   PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:
                                   PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:
                                   PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:
                                   PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:
                                   PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:
                                   PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:
                                   PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:
                                   PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:
                                   PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:
                                   PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:
                                   PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:
                                   PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:
                                   PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:
                                   PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:
                                   PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:
                                   PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:
                                   PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:
                                   PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:
                                   PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:
                                   PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:
                                   PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:
                                   PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:
                                   PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:
                                   PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:
                                   PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:
                                   PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:
                                   PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:
                                   PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:
                                   PMVXSPAR                                     
          RETURN
.
DEPMVX13  RESET     KEY11                                                       
          DELETE    PMSVX1A3,KEY11                                              
          RETURN
.
RLPMVX13  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     PMSVX1A3,KEY11;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:
                                   PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:
                                   PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:
                                   PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:
                                   PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:
                                   PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:
                                   PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:
                                   PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:
                                   PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:
                                   PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:
                                   PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:
                                   PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:
                                   PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:
                                   PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:
                                   PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:
                                   PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:
                                   PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:
                                   PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:
                                   PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:
                                   PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:
                                   PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:
                                   PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:
                                   PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:
                                   PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:
                                   PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:
                                   PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:
                                   PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:
                                   PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:
                                   PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:
                                   PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:
                                   PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:
                                   PMVXSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMVX13  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSVX1A3;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMVX13  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSVX1A3;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMVX13  RESET     KEY11                                                       
          UNLOCK    PMSVX1A3                                                    
          RETURN
.
RSPMVX14  RESET     KEY24                                                       
          READ      PMSVX1A4,KEY24;;                                            
          RETURN
.
RAPMVX14  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVX1A4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMVX14  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVX1A4,KEY24;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:
                                   PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:
                                   PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:
                                   PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:
                                   PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:
                                   PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:
                                   PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:
                                   PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:
                                   PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:
                                   PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:
                                   PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:
                                   PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:
                                   PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:
                                   PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:
                                   PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:
                                   PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:
                                   PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:
                                   PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:
                                   PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:
                                   PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:
                                   PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:
                                   PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:
                                   PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:
                                   PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:
                                   PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:
                                   PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:
                                   PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:
                                   PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:
                                   PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:
                                   PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:
                                   PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:
                                   PMVXSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMVX14  MOVE      ZERO,OVRCD                                                  
          READKS    PMSVX1A4;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMVX14  MOVE      ZERO,OVRCD                                                  
          READKP    PMSVX1A4;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMVX14  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSVX1A4;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMVX14  RESET     KEY24                                                       
          WRITE     PMSVX1A4,KEY24;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:
                                   PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:
                                   PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:
                                   PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:
                                   PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:
                                   PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:
                                   PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:
                                   PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:
                                   PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:
                                   PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:
                                   PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:
                                   PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:
                                   PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:
                                   PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:
                                   PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:
                                   PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:
                                   PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:
                                   PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:
                                   PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:
                                   PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:
                                   PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:
                                   PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:
                                   PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:
                                   PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:
                                   PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:
                                   PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:
                                   PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:
                                   PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:
                                   PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:
                                   PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:
                                   PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:
                                   PMVXSPAR                                     
          RETURN
.
DEPMVX14  RESET     KEY24                                                       
          DELETE    PMSVX1A4,KEY24                                              
          RETURN
.
RLPMVX14  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PMSVX1A4,KEY24;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:
                                   PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:
                                   PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:
                                   PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:
                                   PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:
                                   PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:
                                   PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:
                                   PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:
                                   PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:
                                   PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:
                                   PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:
                                   PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:
                                   PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:
                                   PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:
                                   PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:
                                   PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:
                                   PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:
                                   PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:
                                   PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:
                                   PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:
                                   PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:
                                   PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:
                                   PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:
                                   PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:
                                   PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:
                                   PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:
                                   PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:
                                   PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:
                                   PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:
                                   PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:
                                   PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:
                                   PMVXSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMVX14  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSVX1A4;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMVX14  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSVX1A4;PMVXVISN,PMVXVSDT,PMVXDOCA,PMVXDOCT,PMVXCSNR:      
                             PMVXPOST,PMVXPIND,PMVXVLOC,PMVXCFSG,PMVXINGP:      
                             PMVXCPTH,PMVXHCP1,PMVXHCP2,PMVXHCP3,PMVXHCP4:      
                             PMVXRHC1,PMVXRH1G,PMVXRH1C,PMVXRHC2,PMVXRH2G:      
                             PMVXRH2C,PMVXRHC3,PMVXRH3G,PMVXRH3C,PMVXRHC4:      
                             PMVXRH4G,PMVXRH4C,PMVXABRG,PMVXCADM,PMVXIRAD:      
                             PMVXIDUS,PMVXCRAV,PMVXRCCT,PMVXAPWD,PMVXAPBD:      
                             PMVXPOWD,PMVXPOBD,PMVXPSTY,PMVXVALW,PMVXPALW:      
                             PMVXINDC,PMVXMDAV,PMVXFRMS,PMVXCSNG,PMVXPWGT:      
                             PMVXPHGT,PMVXDHWR,PMVXEDC1,PMVXEDC2,PMVXEDC3:      
                             PMVXHOME,PMVXUDF1,PMVXUDF2,PMVXUDF3,PMVXUDF4:      
                             PMVXUDT1,PMVXUDT2,PMVXUDT3,PMVXUDT4,PMVXUDT5:      
                             PMVXUDT6,PMVXCDTE,PMVXCTIM,PMVXWEBC,PMVXLUPD:      
                             PMVXLUPT,PMVXWEBU,PMVXMHLS,PMVXPICD,PMVXRMOR:      
                             PMVXASUT,PMVXELPS,PMVXEMPL,PMVXFINP,PMVXOCCP:      
                             PMVXPALC,PMVXPPAL,PMVXPPPT,PMVXPSOS,PMVXPYSP:      
                             PMVXQLDB,PMVXREAD,PMVXUDIN,PMVXUREA,PMVXUSAC:      
                             PMVXUVTH,PMVXINTR,PMVXLNG1,PMVXASGC,PMVXMHOS:      
                             PMVXDSPD,PMVXDSIF,PMVXPRMI,PMVXPRAI,PMVXPRES:      
                             PMVXUITR,PMVXRPOA,PMVXRCN1,PMVXRCN2,PMVXRHFU:      
                             PMVXRDVA,PMVXRSLO,PMVXMLOC,PMVXPACC,PMVXEDU1:      
                             PMVXEDU2,PMVXEDU3,PMVXPRGM,PMVXCONF,PMVXEOCL:      
                             PMVXSLOC,PMVXSCLI,PMVXSTRA,PMVXQASN,PMVXATCP:      
                             PMVXATIM,PMVXITIM,PMVXHFGN,PMVXHFSN,PMVXFUPI:      
                             PMVXPOEC,PMVXPGID,PMVXTICM,PMVXPILC,PMVXFVIO:      
                             PMVXFNDM,PMVXUDF5,PMVXUDF6,PMVXUDF7,PMVXUDF8:      
                             PMVXUDF9,PMVXUD10,PMVXUD11,PMVXUD12,PMVXUD13:      
                             PMVXUD14,PMVXUD15,PMVXTEAM,PMVXNWHC,PMVXEDDT:      
                             PMVXPHLD,PMVXPLOC,PMVXDTRT,PMVXDFLG,PMVXFSRC:      
                             PMVXCONM,PMVXCPDD,PMVXPBMI,PMVXCNID,PMVXCNDT:      
                             PMVXCASE,PMVXEAFL,PMVXADMP,PMVXCONO,PMVXMEDH:      
                             PMVXSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMVX14  RESET     KEY24                                                       
          UNLOCK    PMSVX1A4                                                    
          RETURN
.
