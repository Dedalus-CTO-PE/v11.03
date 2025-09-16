create table patinvrf
(
  pinvno      char(8) default ' ' not null,
  pinvdte     char(8) default ' ' not null,
  pinalpha    char(6) default ' ' not null,
  dpinvadm    char(8) default ' ' not null,
  pinvur      char(8) default ' ' not null,
  dpinvsys    char(1) default ' ' not null,
  pinvsite    char(6) default ' ' not null,
  pinvclm     char(3) default ' ' not null,
  pinvlock    char(2) default ' ' not null,
  pinvamt     decimal(14,2) default 0 not null,
  pinvpata    decimal(14,2) default 0 not null,
  pinvhfda    decimal(14,2) default 0 not null,
  pinvotha    decimal(14,2) default 0 not null,
  pinvjour    decimal(14,2) default 0 not null,
  pinvreb     decimal(14,2) default 0 not null,
  pinvcanc    char(8) default ' ' not null,
  pinvpcsh    decimal(14,2) default 0 not null,
  pinvtyp     decimal(1,0) default 0 not null,
  pinvblcd    char(8) default ' ' not null,
  pinvcadm    char(8) default ' ' not null,
  dptincmx    char(1) default ' ' not null,
  dptineds    char(1) default ' ' not null,
  ptingsta    decimal(14,2) default 0 not null,
  ptingstj    decimal(14,2) default 0 not null,
  ptincmcd    char(9) default ' ' not null,
  ptinpmd1    char(30) default ' ' not null,
  ptinpmd2    char(35) default ' ' not null,
  ptinpmam    decimal(14,2) default 0 not null,
  ptincrst    char(1) default ' ' not null,
  ptincrtt    decimal(14,2) default 0 not null,
  ptinmvdy    char(4) default ' ' not null,
  ptindisc    decimal(14,2) default 0 not null,
  ptinroun    decimal(14,2) default 0 not null,
  ptinhfnd    char(6) default ' ' not null,
  ptincdat    char(8) default ' ' not null,
  ptinctim    char(8) default ' ' not null,
  ptincuid    char(10) default ' ' not null,
  ptinudat    char(8) default ' ' not null,
  ptinutim    char(8) default ' ' not null,
  ptinuuid    char(10) default ' ' not null,
  ptincnid    char(6) default ' ' not null,
  ptinapin    char(1) default ' ' not null,
  pinvspar    char(43) default ' ' not null,
  lf          char(1)
);
create unique index patinvr1 on patinvrf
(
pinvno
);
create unique index patinvr2 on patinvrf
(
pinvdte,
pinvno
);
create unique index patinvr3 on patinvrf
(
dpinvadm,
pinvno
);
create unique index patinvr4 on patinvrf
(
dpinvsys,
pinvsite,
pinvclm,
pinalpha,
dpinvadm,
pinvno
);
create unique index patinvr5 on patinvrf
(
pinvur,
dpinvadm,
pinvno,
pinvdte
);
create unique index patinvr6 on patinvrf
(
ptinhfnd,
pinvur,
dpinvadm,
pinvno,
pinvdte
);
create unique index patinvr7 on patinvrf
(
ptinhfnd,
pinvno,
pinvdte,
pinvur,
dpinvadm
);
revoke all on patinvrf from public ; 
grant select on patinvrf to public ; 
