create table watautr1
(
  wtwmaudd    char(8) default ' ' not null,
  wtwmaudt    char(8) default ' ' not null,
  wtwmaudp    char(2) default ' ' not null,
  wtwmaudr    char(1) default ' ' not null,
  wtwmauds    decimal(1,0) default 0 not null,
  wtwmaudo    char(4) default ' ' not null,
  wmurno      char(8) default ' ' not null,
  wmcode      char(9) default ' ' not null,
  dwmcnt      char(2) default ' ' not null,
  wmtime      decimal(5,0) default 0 not null,
  wmdesc      char(80) default ' ' not null,
  wmreason    char(80) default ' ' not null,
  dwmstat     char(1) default ' ' not null,
  wmdate1     char(8) default ' ' not null,
  wmdate2     char(8) default ' ' not null,
  wmdate3     char(8) default ' ' not null,
  wmdate4     char(8) default ' ' not null,
  wmremove    char(3) default ' ' not null,
  wmunit      char(3) default ' ' not null,
  wmdoctor    char(6) default ' ' not null,
  wmstay      decimal(5,0) default 0 not null,
  wmpty       char(3) default ' ' not null,
  wmnotice    char(3) default ' ' not null,
  wmptype     char(3) default ' ' not null,
  wmpcat      char(3) default ' ' not null,
  wmudef1     char(3) default ' ' not null,
  wmudef2     char(3) default ' ' not null,
  wmudef3     char(3) default ' ' not null,
  wmudef4     char(3) default ' ' not null,
  wmbook      decimal(8,0) default 0 not null,
  wmkeydt     char(8) default ' ' not null,
  wtwmport    char(2) default ' ' not null,
  wtwmread    char(8) default ' ' not null,
  wtwmdeda    char(8) default ' ' not null,
  wtwmuniq    decimal(5,0) default 0 not null,
  wtwmsent    decimal(1,0) default 0 not null,
  wtwmclss    char(3) default ' ' not null,
  wtwmdtad    char(8) default ' ' not null,
  wtwmacat    char(3) default ' ' not null,
  wtwmgadd    char(8) default ' ' not null,
  wtwmdabd    char(8) default ' ' not null,
  wtwmeaty    char(3) default ' ' not null,
  wtwmadmc    char(3) default ' ' not null,
  wtwmecra    char(20) default ' ' not null,
  wtwmgpfa    char(20) default ' ' not null,
  wtwmrfgp    char(8) default ' ' not null,
  wtwmgppc    char(6) default ' ' not null,
  wtwmnafr    char(8) default ' ' not null,
  wtwmnato    char(8) default ' ' not null,
  wtwmgppt    char(2) default ' ' not null,
  wtwmdofr    char(3) default ' ' not null,
  wtwmoper    char(4) default ' ' not null,
  wtwmihsp    char(3) default ' ' not null,
  wtwmvlsf    char(1) default ' ' not null,
  wtwmpro2    char(9) default ' ' not null,
  wtwmpro3    char(9) default ' ' not null,
  wtwmtrpa    char(8) default ' ' not null,
  wmudef5     char(3) default ' ' not null,
  wmudef6     char(3) default ' ' not null,
  wmudef7     char(3) default ' ' not null,
  wmudef8     char(3) default ' ' not null,
  wtwmrank    char(6) default ' ' not null,
  wtwmsrcr    char(3) default ' ' not null,
  wtwmdrsa    char(8) default ' ' not null,
  wtwmdosa    char(8) default ' ' not null,
  wtwmphsp    char(3) default ' ' not null,
  wtwmbscd    char(2) default ' ' not null,
  wtwmrsfl    char(1) default ' ' not null,
  wtwmecnt    char(9) default ' ' not null,
  wtwmcsst    char(1) default ' ' not null,
  wtwmcsdt    char(8) default ' ' not null,
  wtwmassr    char(10) default ' ' not null,
  wtwmacpr    char(8) default ' ' not null,
  wtwmpdsc    char(80) default ' ' not null,
  wtwmradt    char(8) default ' ' not null,
  wmdesc2     char(80) default ' ' not null,
  wmdesc3     char(80) default ' ' not null,
  wtwmspar    char(50) default ' ' not null,
  lf          char(1)
);
create index watautr1 on watautr1
(
wtwmaudd,
wtwmaudt,
wtwmaudp,
wtwmaudr
);
revoke all on watautr1 from public ; 
grant select on watautr1 to public ; 
create table wattr1af
(
  wmurno      char(8) default ' ' not null,
  wmcode      char(9) default ' ' not null,
  dwmcnt      char(2) default ' ' not null,
  wmtime      decimal(5,0) default 0 not null,
  wmdesc      char(80) default ' ' not null,
  wmreason    char(80) default ' ' not null,
  dwmstat     char(1) default ' ' not null,
  wmdate1     char(8) default ' ' not null,
  wmdate2     char(8) default ' ' not null,
  wmdate3     char(8) default ' ' not null,
  wmdate4     char(8) default ' ' not null,
  wmremove    char(3) default ' ' not null,
  wmunit      char(3) default ' ' not null,
  wmdoctor    char(6) default ' ' not null,
  wmstay      decimal(5,0) default 0 not null,
  wmpty       char(3) default ' ' not null,
  wmnotice    char(3) default ' ' not null,
  wmptype     char(3) default ' ' not null,
  wmpcat      char(3) default ' ' not null,
  wmudef1     char(3) default ' ' not null,
  wmudef2     char(3) default ' ' not null,
  wmudef3     char(3) default ' ' not null,
  wmudef4     char(3) default ' ' not null,
  wmbook      decimal(8,0) default 0 not null,
  wmkeydt     char(8) default ' ' not null,
  wtwmport    char(2) default ' ' not null,
  wtwmread    char(8) default ' ' not null,
  wtwmdeda    char(8) default ' ' not null,
  wtwmuniq    decimal(5,0) default 0 not null,
  wtwmsent    decimal(1,0) default 0 not null,
  wtwmclss    char(3) default ' ' not null,
  wtwmdtad    char(8) default ' ' not null,
  wtwmacat    char(3) default ' ' not null,
  wtwmgadd    char(8) default ' ' not null,
  wtwmdabd    char(8) default ' ' not null,
  wtwmeaty    char(3) default ' ' not null,
  wtwmadmc    char(3) default ' ' not null,
  wtwmecra    char(20) default ' ' not null,
  wtwmgpfa    char(20) default ' ' not null,
  wtwmrfgp    char(8) default ' ' not null,
  wtwmgppc    char(6) default ' ' not null,
  wtwmnafr    char(8) default ' ' not null,
  wtwmnato    char(8) default ' ' not null,
  wtwmgppt    char(2) default ' ' not null,
  wtwmdofr    char(3) default ' ' not null,
  wtwmoper    char(4) default ' ' not null,
  wtwmihsp    char(3) default ' ' not null,
  wtwmvlsf    char(1) default ' ' not null,
  wtwmpro2    char(9) default ' ' not null,
  wtwmpro3    char(9) default ' ' not null,
  wtwmtrpa    char(8) default ' ' not null,
  wmudef5     char(3) default ' ' not null,
  wmudef6     char(3) default ' ' not null,
  wmudef7     char(3) default ' ' not null,
  wmudef8     char(3) default ' ' not null,
  wtwmrank    char(6) default ' ' not null,
  wtwmsrcr    char(3) default ' ' not null,
  wtwmdrsa    char(8) default ' ' not null,
  wtwmdosa    char(8) default ' ' not null,
  wtwmphsp    char(3) default ' ' not null,
  wtwmbscd    char(2) default ' ' not null,
  wtwmrsfl    char(1) default ' ' not null,
  wtwmecnt    char(9) default ' ' not null,
  wtwmcsst    char(1) default ' ' not null,
  wtwmcsdt    char(8) default ' ' not null,
  wtwmassr    char(10) default ' ' not null,
  wtwmacpr    char(8) default ' ' not null,
  wtwmpdsc    char(80) default ' ' not null,
  wtwmradt    char(8) default ' ' not null,
  wmdesc2     char(80) default ' ' not null,
  wmdesc3     char(80) default ' ' not null,
  wtwmspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index wattr1a1 on wattr1af
(
wmurno,
wmcode,
dwmcnt
);
create unique index wattr1a2 on wattr1af
(
dwmstat,
wmurno,
wmcode,
dwmcnt
);
create unique index wattr1a3 on wattr1af
(
wmdate1,
wmurno,
wmcode,
dwmcnt
);
create unique index wattr1a4 on wattr1af
(
wmurno,
wmdate1,
wmcode,
dwmcnt
);
create unique index wattr1a5 on wattr1af
(
dwmstat,
wmdoctor,
wmunit,
wmpty,
wmurno,
wmcode,
dwmcnt
);
create unique index wattr1a6 on wattr1af
(
wtwmdtad,
dwmstat,
wmurno,
wmcode,
dwmcnt
);
create unique index wattr1a7 on wattr1af
(
dwmstat,
wmunit,
wmdate1,
wmurno,
wmcode,
dwmcnt
);
create unique index wattr1a8 on wattr1af
(
wtwmrsfl,
wmurno,
wmcode,
dwmcnt
);
revoke all on wattr1af from public ; 
grant select on wattr1af to public ; 
