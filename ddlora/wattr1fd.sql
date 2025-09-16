create table watautr1
(
  wtwmaudd    varchar2(8) default ' ' not null,
  wtwmaudt    varchar2(8) default ' ' not null,
  wtwmaudp    varchar2(2) default ' ' not null,
  wtwmaudr    varchar2(1) default ' ' not null,
  wtwmauds    number(1,0) default 0 not null,
  wtwmaudo    varchar2(4) default ' ' not null,
  wmurno      varchar2(8) default ' ' not null,
  wmcode      varchar2(9) default ' ' not null,
  dwmcnt      varchar2(2) default ' ' not null,
  wmtime      number(5,0) default 0 not null,
  wmdesc      varchar2(80) default ' ' not null,
  wmreason    varchar2(80) default ' ' not null,
  dwmstat     varchar2(1) default ' ' not null,
  wmdate1     varchar2(8) default ' ' not null,
  wmdate2     varchar2(8) default ' ' not null,
  wmdate3     varchar2(8) default ' ' not null,
  wmdate4     varchar2(8) default ' ' not null,
  wmremove    varchar2(3) default ' ' not null,
  wmunit      varchar2(3) default ' ' not null,
  wmdoctor    varchar2(6) default ' ' not null,
  wmstay      number(5,0) default 0 not null,
  wmpty       varchar2(3) default ' ' not null,
  wmnotice    varchar2(3) default ' ' not null,
  wmptype     varchar2(3) default ' ' not null,
  wmpcat      varchar2(3) default ' ' not null,
  wmudef1     varchar2(3) default ' ' not null,
  wmudef2     varchar2(3) default ' ' not null,
  wmudef3     varchar2(3) default ' ' not null,
  wmudef4     varchar2(3) default ' ' not null,
  wmbook      number(8,0) default 0 not null,
  wmkeydt     varchar2(8) default ' ' not null,
  wtwmport    varchar2(2) default ' ' not null,
  wtwmread    varchar2(8) default ' ' not null,
  wtwmdeda    varchar2(8) default ' ' not null,
  wtwmuniq    number(5,0) default 0 not null,
  wtwmsent    number(1,0) default 0 not null,
  wtwmclss    varchar2(3) default ' ' not null,
  wtwmdtad    varchar2(8) default ' ' not null,
  wtwmacat    varchar2(3) default ' ' not null,
  wtwmgadd    varchar2(8) default ' ' not null,
  wtwmdabd    varchar2(8) default ' ' not null,
  wtwmeaty    varchar2(3) default ' ' not null,
  wtwmadmc    varchar2(3) default ' ' not null,
  wtwmecra    varchar2(20) default ' ' not null,
  wtwmgpfa    varchar2(20) default ' ' not null,
  wtwmrfgp    varchar2(8) default ' ' not null,
  wtwmgppc    varchar2(6) default ' ' not null,
  wtwmnafr    varchar2(8) default ' ' not null,
  wtwmnato    varchar2(8) default ' ' not null,
  wtwmgppt    varchar2(2) default ' ' not null,
  wtwmdofr    varchar2(3) default ' ' not null,
  wtwmoper    varchar2(4) default ' ' not null,
  wtwmihsp    varchar2(3) default ' ' not null,
  wtwmvlsf    varchar2(1) default ' ' not null,
  wtwmpro2    varchar2(9) default ' ' not null,
  wtwmpro3    varchar2(9) default ' ' not null,
  wtwmtrpa    varchar2(8) default ' ' not null,
  wmudef5     varchar2(3) default ' ' not null,
  wmudef6     varchar2(3) default ' ' not null,
  wmudef7     varchar2(3) default ' ' not null,
  wmudef8     varchar2(3) default ' ' not null,
  wtwmrank    varchar2(6) default ' ' not null,
  wtwmsrcr    varchar2(3) default ' ' not null,
  wtwmdrsa    varchar2(8) default ' ' not null,
  wtwmdosa    varchar2(8) default ' ' not null,
  wtwmphsp    varchar2(3) default ' ' not null,
  wtwmbscd    varchar2(2) default ' ' not null,
  wtwmrsfl    varchar2(1) default ' ' not null,
  wtwmecnt    varchar2(9) default ' ' not null,
  wtwmcsst    varchar2(1) default ' ' not null,
  wtwmcsdt    varchar2(8) default ' ' not null,
  wtwmassr    varchar2(10) default ' ' not null,
  wtwmacpr    varchar2(8) default ' ' not null,
  wtwmpdsc    varchar2(80) default ' ' not null,
  wtwmradt    varchar2(8) default ' ' not null,
  wmdesc2     varchar2(80) default ' ' not null,
  wmdesc3     varchar2(80) default ' ' not null,
  wtwmspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index watautr1 on watautr1
(
wtwmaudd,
wtwmaudt,
wtwmaudp,
wtwmaudr
)
tablespace pas_indx; 
create table wattr1af
(
  wmurno      varchar2(8) default ' ' not null,
  wmcode      varchar2(9) default ' ' not null,
  dwmcnt      varchar2(2) default ' ' not null,
  wmtime      number(5,0) default 0 not null,
  wmdesc      varchar2(80) default ' ' not null,
  wmreason    varchar2(80) default ' ' not null,
  dwmstat     varchar2(1) default ' ' not null,
  wmdate1     varchar2(8) default ' ' not null,
  wmdate2     varchar2(8) default ' ' not null,
  wmdate3     varchar2(8) default ' ' not null,
  wmdate4     varchar2(8) default ' ' not null,
  wmremove    varchar2(3) default ' ' not null,
  wmunit      varchar2(3) default ' ' not null,
  wmdoctor    varchar2(6) default ' ' not null,
  wmstay      number(5,0) default 0 not null,
  wmpty       varchar2(3) default ' ' not null,
  wmnotice    varchar2(3) default ' ' not null,
  wmptype     varchar2(3) default ' ' not null,
  wmpcat      varchar2(3) default ' ' not null,
  wmudef1     varchar2(3) default ' ' not null,
  wmudef2     varchar2(3) default ' ' not null,
  wmudef3     varchar2(3) default ' ' not null,
  wmudef4     varchar2(3) default ' ' not null,
  wmbook      number(8,0) default 0 not null,
  wmkeydt     varchar2(8) default ' ' not null,
  wtwmport    varchar2(2) default ' ' not null,
  wtwmread    varchar2(8) default ' ' not null,
  wtwmdeda    varchar2(8) default ' ' not null,
  wtwmuniq    number(5,0) default 0 not null,
  wtwmsent    number(1,0) default 0 not null,
  wtwmclss    varchar2(3) default ' ' not null,
  wtwmdtad    varchar2(8) default ' ' not null,
  wtwmacat    varchar2(3) default ' ' not null,
  wtwmgadd    varchar2(8) default ' ' not null,
  wtwmdabd    varchar2(8) default ' ' not null,
  wtwmeaty    varchar2(3) default ' ' not null,
  wtwmadmc    varchar2(3) default ' ' not null,
  wtwmecra    varchar2(20) default ' ' not null,
  wtwmgpfa    varchar2(20) default ' ' not null,
  wtwmrfgp    varchar2(8) default ' ' not null,
  wtwmgppc    varchar2(6) default ' ' not null,
  wtwmnafr    varchar2(8) default ' ' not null,
  wtwmnato    varchar2(8) default ' ' not null,
  wtwmgppt    varchar2(2) default ' ' not null,
  wtwmdofr    varchar2(3) default ' ' not null,
  wtwmoper    varchar2(4) default ' ' not null,
  wtwmihsp    varchar2(3) default ' ' not null,
  wtwmvlsf    varchar2(1) default ' ' not null,
  wtwmpro2    varchar2(9) default ' ' not null,
  wtwmpro3    varchar2(9) default ' ' not null,
  wtwmtrpa    varchar2(8) default ' ' not null,
  wmudef5     varchar2(3) default ' ' not null,
  wmudef6     varchar2(3) default ' ' not null,
  wmudef7     varchar2(3) default ' ' not null,
  wmudef8     varchar2(3) default ' ' not null,
  wtwmrank    varchar2(6) default ' ' not null,
  wtwmsrcr    varchar2(3) default ' ' not null,
  wtwmdrsa    varchar2(8) default ' ' not null,
  wtwmdosa    varchar2(8) default ' ' not null,
  wtwmphsp    varchar2(3) default ' ' not null,
  wtwmbscd    varchar2(2) default ' ' not null,
  wtwmrsfl    varchar2(1) default ' ' not null,
  wtwmecnt    varchar2(9) default ' ' not null,
  wtwmcsst    varchar2(1) default ' ' not null,
  wtwmcsdt    varchar2(8) default ' ' not null,
  wtwmassr    varchar2(10) default ' ' not null,
  wtwmacpr    varchar2(8) default ' ' not null,
  wtwmpdsc    varchar2(80) default ' ' not null,
  wtwmradt    varchar2(8) default ' ' not null,
  wmdesc2     varchar2(80) default ' ' not null,
  wmdesc3     varchar2(80) default ' ' not null,
  wtwmspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint wattr1a1 primary key( 
wmurno,
wmcode,
dwmcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index wattr1a2 on wattr1af
(
dwmstat,
wmurno,
wmcode,
dwmcnt
)
  tablespace pas_indx; 
create unique index wattr1a3 on wattr1af
(
wmdate1,
wmurno,
wmcode,
dwmcnt
)
  tablespace pas_indx; 
create unique index wattr1a4 on wattr1af
(
wmurno,
wmdate1,
wmcode,
dwmcnt
)
  tablespace pas_indx; 
create unique index wattr1a5 on wattr1af
(
dwmstat,
wmdoctor,
wmunit,
wmpty,
wmurno,
wmcode,
dwmcnt
)
  tablespace pas_indx; 
create unique index wattr1a6 on wattr1af
(
wtwmdtad,
dwmstat,
wmurno,
wmcode,
dwmcnt
)
  tablespace pas_indx; 
create unique index wattr1a7 on wattr1af
(
dwmstat,
wmunit,
wmdate1,
wmurno,
wmcode,
dwmcnt
)
  tablespace pas_indx; 
create unique index wattr1a8 on wattr1af
(
wtwmrsfl,
wmurno,
wmcode,
dwmcnt
)
  tablespace pas_indx; 
