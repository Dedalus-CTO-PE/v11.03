create table patinvrf
(
  pinvno      varchar2(8) default ' ' not null,
  pinvdte     varchar2(8) default ' ' not null,
  pinalpha    varchar2(6) default ' ' not null,
  dpinvadm    varchar2(8) default ' ' not null,
  pinvur      varchar2(8) default ' ' not null,
  dpinvsys    varchar2(1) default ' ' not null,
  pinvsite    varchar2(6) default ' ' not null,
  pinvclm     varchar2(3) default ' ' not null,
  pinvlock    varchar2(2) default ' ' not null,
  pinvamt     number(14,2) default 0 not null,
  pinvpata    number(14,2) default 0 not null,
  pinvhfda    number(14,2) default 0 not null,
  pinvotha    number(14,2) default 0 not null,
  pinvjour    number(14,2) default 0 not null,
  pinvreb     number(14,2) default 0 not null,
  pinvcanc    varchar2(8) default ' ' not null,
  pinvpcsh    number(14,2) default 0 not null,
  pinvtyp     number(1,0) default 0 not null,
  pinvblcd    varchar2(8) default ' ' not null,
  pinvcadm    varchar2(8) default ' ' not null,
  dptincmx    varchar2(1) default ' ' not null,
  dptineds    varchar2(1) default ' ' not null,
  ptingsta    number(14,2) default 0 not null,
  ptingstj    number(14,2) default 0 not null,
  ptincmcd    varchar2(9) default ' ' not null,
  ptinpmd1    varchar2(30) default ' ' not null,
  ptinpmd2    varchar2(35) default ' ' not null,
  ptinpmam    number(14,2) default 0 not null,
  ptincrst    varchar2(1) default ' ' not null,
  ptincrtt    number(14,2) default 0 not null,
  ptinmvdy    varchar2(4) default ' ' not null,
  ptindisc    number(14,2) default 0 not null,
  ptinroun    number(14,2) default 0 not null,
  ptinhfnd    varchar2(6) default ' ' not null,
  ptincdat    varchar2(8) default ' ' not null,
  ptinctim    varchar2(8) default ' ' not null,
  ptincuid    varchar2(10) default ' ' not null,
  ptinudat    varchar2(8) default ' ' not null,
  ptinutim    varchar2(8) default ' ' not null,
  ptinuuid    varchar2(10) default ' ' not null,
  ptincnid    varchar2(6) default ' ' not null,
  ptinapin    varchar2(1) default ' ' not null,
  pinvspar    varchar2(43) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patinvr1 primary key( 
pinvno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patinvr2 on patinvrf
(
pinvdte,
pinvno
)
  tablespace pas_indx; 
create unique index patinvr3 on patinvrf
(
dpinvadm,
pinvno
)
  tablespace pas_indx; 
create unique index patinvr4 on patinvrf
(
dpinvsys,
pinvsite,
pinvclm,
pinalpha,
dpinvadm,
pinvno
)
  tablespace pas_indx; 
create unique index patinvr5 on patinvrf
(
pinvur,
dpinvadm,
pinvno,
pinvdte
)
  tablespace pas_indx; 
create unique index patinvr6 on patinvrf
(
ptinhfnd,
pinvur,
dpinvadm,
pinvno,
pinvdte
)
  tablespace pas_indx; 
create unique index patinvr7 on patinvrf
(
ptinhfnd,
pinvno,
pinvdte,
pinvur,
dpinvadm
)
  tablespace pas_indx; 
