create table weboesaf
(
  wbosvisn    varchar2(8) default ' ' not null,
  wboscntr    varchar2(3) default ' ' not null,
  wbosscnt    varchar2(3) default ' ' not null,
  wbosrtyp    varchar2(1) default ' ' not null,
  wbositem    varchar2(9) default ' ' not null,
  wbosquan    varchar2(3) default ' ' not null,
  wbospdte    varchar2(8) default ' ' not null,
  wboscdte    varchar2(8) default ' ' not null,
  wbosctim    varchar2(8) default ' ' not null,
  wbostrid    varchar2(24) default ' ' not null,
  wbosmsid    varchar2(36) default ' ' not null,
  wboseleg    varchar2(8) default ' ' not null,
  wbosspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint weboesa1 primary key( 
wbosvisn,
wboscntr,
wbosscnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index weboesa2 on weboesaf
(
wbostrid,
wbosvisn,
wboscntr,
wbosscnt
)
  tablespace pas_indx; 
create unique index weboesa3 on weboesaf
(
wbosmsid,
wbosvisn,
wboscntr,
wbosscnt
)
  tablespace pas_indx; 
create unique index weboesa4 on weboesaf
(
wboseleg,
wbosvisn,
wboscntr,
wbosscnt
)
  tablespace pas_indx; 
