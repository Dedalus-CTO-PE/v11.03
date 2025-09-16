create table patfactf
(
  fadate      varchar2(8) default ' ' not null,
  dfadmno     varchar2(8) default ' ' not null,
  facode      varchar2(3) default ' ' not null,
  facomm      varchar2(60) default ' ' not null,
  ptfcurno    varchar2(8) default ' ' not null,
  ptfcdtcp    varchar2(8) default ' ' not null,
  ptfcocgr    varchar2(3) default ' ' not null,
  ptfchfnd    varchar2(6) default ' ' not null,
  ptfcstat    varchar2(1) default ' ' not null,
  ptfcinvn    varchar2(8) default ' ' not null,
  ptfccdat    varchar2(8) default ' ' not null,
  ptfcctim    varchar2(8) default ' ' not null,
  ptfccuid    varchar2(10) default ' ' not null,
  ptfcudat    varchar2(8) default ' ' not null,
  ptfcutim    varchar2(8) default ' ' not null,
  ptfcuuid    varchar2(10) default ' ' not null,
  ptfcspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patfact1 primary key( 
dfadmno,
fadate,
facode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patfact2 on patfactf
(
fadate,
dfadmno,
facode
)
  tablespace pas_indx; 
create unique index patfact3 on patfactf
(
ptfcurno,
fadate,
dfadmno,
facode
)
  tablespace pas_indx; 
