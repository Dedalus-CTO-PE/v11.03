create table prifciaf
(
  prfcdebt    varchar2(8) default ' ' not null,
  prfcscan    varchar2(2) default ' ' not null,
  prfcuniq    varchar2(8) default ' ' not null,
  prfcinvn    varchar2(8) default ' ' not null,
  prfctran    varchar2(6) default ' ' not null,
  prfccrno    varchar2(8) default ' ' not null,
  prfccrdt    varchar2(8) default ' ' not null,
  prfciamt    number(14,2) default 0 not null,
  prfccamt    number(14,2) default 0 not null,
  prfctrdt    varchar2(8) default ' ' not null,
  prfctrtm    varchar2(6) default ' ' not null,
  prfcdesc    varchar2(30) default ' ' not null,
  prfcmpra    varchar2(6) default ' ' not null,
  prfcsdoc    varchar2(10) default ' ' not null,
  prfcnums    number(5,0) default 0 not null,
  prfcrdoc    varchar2(10) default ' ' not null,
  prfcrdet    varchar2(50) default ' ' not null,
  prfcclmc    varchar2(3) default ' ' not null,
  prfcpind    varchar2(3) default ' ' not null,
  prfcmsgc    varchar2(3) default ' ' not null,
  dprfcrty    varchar2(1) default ' ' not null,
  prfciflg    number(2,0) default 0 not null,
  prfcinum    varchar2(9) default ' ' not null,
  prfcsubi    varchar2(3) default ' ' not null,
  prfcmscg    varchar2(3) default ' ' not null,
  prfcbnum    varchar2(8) default ' ' not null,
  prfcudf1    varchar2(3) default ' ' not null,
  prfcudf2    varchar2(3) default ' ' not null,
  prfcudf3    varchar2(3) default ' ' not null,
  prfcudf4    varchar2(3) default ' ' not null,
  prfcadmc    varchar2(3) default ' ' not null,
  prfcrdat    varchar2(8) default ' ' not null,
  prfcitam    number(14,2) default 0 not null,
  prfcopcd    varchar2(20) default ' ' not null,
  prfcmsfl    number(1,0) default 0 not null,
  prfctrfr    varchar2(1) default ' ' not null,
  prfcmafn    varchar2(10) default ' ' not null,
  prfcgsta    number(1,0) default 0 not null,
  prfcgstc    varchar2(3) default ' ' not null,
  prfcgamt    number(14,2) default 0 not null,
  prfccgst    number(14,2) default 0 not null,
  prfcrprd    varchar2(3) default ' ' not null,
  prfcupdt    varchar2(8) default ' ' not null,
  prfcuptm    varchar2(8) default ' ' not null,
  prfcwuid    varchar2(10) default ' ' not null,
  prfcspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint prifcia1 primary key( 
prfcdebt,
prfcscan,
prfcinvn,
prfctran,
prfccrno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index prifcia2 on prifciaf
(
prfcdebt,
prfcscan,
prfcinvn,
dprfcrty,
prfctran,
prfccrno
)
  tablespace pas_indx; 
create unique index prifcia3 on prifciaf
(
prfccrno,
prfcdebt,
prfcscan,
prfcinvn,
dprfcrty,
prfctran
)
  tablespace pas_indx; 
