create table prifciaf
(
  prfcdebt    char(8) default ' ' not null,
  prfcscan    char(2) default ' ' not null,
  prfcuniq    char(8) default ' ' not null,
  prfcinvn    char(8) default ' ' not null,
  prfctran    char(6) default ' ' not null,
  prfccrno    char(8) default ' ' not null,
  prfccrdt    char(8) default ' ' not null,
  prfciamt    decimal(14,2) default 0 not null,
  prfccamt    decimal(14,2) default 0 not null,
  prfctrdt    char(8) default ' ' not null,
  prfctrtm    char(6) default ' ' not null,
  prfcdesc    char(30) default ' ' not null,
  prfcmpra    char(6) default ' ' not null,
  prfcsdoc    char(10) default ' ' not null,
  prfcnums    decimal(5,0) default 0 not null,
  prfcrdoc    char(10) default ' ' not null,
  prfcrdet    char(50) default ' ' not null,
  prfcclmc    char(3) default ' ' not null,
  prfcpind    char(3) default ' ' not null,
  prfcmsgc    char(3) default ' ' not null,
  dprfcrty    char(1) default ' ' not null,
  prfciflg    decimal(2,0) default 0 not null,
  prfcinum    char(9) default ' ' not null,
  prfcsubi    char(3) default ' ' not null,
  prfcmscg    char(3) default ' ' not null,
  prfcbnum    char(8) default ' ' not null,
  prfcudf1    char(3) default ' ' not null,
  prfcudf2    char(3) default ' ' not null,
  prfcudf3    char(3) default ' ' not null,
  prfcudf4    char(3) default ' ' not null,
  prfcadmc    char(3) default ' ' not null,
  prfcrdat    char(8) default ' ' not null,
  prfcitam    decimal(14,2) default 0 not null,
  prfcopcd    char(20) default ' ' not null,
  prfcmsfl    decimal(1,0) default 0 not null,
  prfctrfr    char(1) default ' ' not null,
  prfcmafn    char(10) default ' ' not null,
  prfcgsta    decimal(1,0) default 0 not null,
  prfcgstc    char(3) default ' ' not null,
  prfcgamt    decimal(14,2) default 0 not null,
  prfccgst    decimal(14,2) default 0 not null,
  prfcrprd    char(3) default ' ' not null,
  prfcupdt    char(8) default ' ' not null,
  prfcuptm    char(8) default ' ' not null,
  prfcwuid    char(10) default ' ' not null,
  prfcspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index prifcia1 on prifciaf
(
prfcdebt,
prfcscan,
prfcinvn,
prfctran,
prfccrno
);
create unique index prifcia2 on prifciaf
(
prfcdebt,
prfcscan,
prfcinvn,
dprfcrty,
prfctran,
prfccrno
);
create unique index prifcia3 on prifciaf
(
prfccrno,
prfcdebt,
prfcscan,
prfcinvn,
dprfcrty,
prfctran
);
revoke all on prifciaf from public ; 
grant select on prifciaf to public ; 
