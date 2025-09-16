create table webomsaf
(
  wbomvisn    varchar2(8) default ' ' not null,
  wbomcntr    varchar2(3) default ' ' not null,
  wbomscnt    varchar2(3) default ' ' not null,
  wbomrtyp    varchar2(1) default ' ' not null,
  wbomitem    varchar2(9) default ' ' not null,
  wbomquan    varchar2(3) default ' ' not null,
  wbompdte    varchar2(8) default ' ' not null,
  wbomcdte    varchar2(8) default ' ' not null,
  wbomctim    varchar2(8) default ' ' not null,
  wbomtrid    varchar2(24) default ' ' not null,
  wbommsid    varchar2(36) default ' ' not null,
  wbomeleg    varchar2(8) default ' ' not null,
  wbomacoi    varchar2(1) default ' ' not null,
  wbomdsoi    varchar2(1) default ' ' not null,
  wbomfqnt    varchar2(1) default ' ' not null,
  wbomitmn    varchar2(5) default ' ' not null,
  wbomnopt    varchar2(2) default ' ' not null,
  wbomrsoi    varchar2(1) default ' ' not null,
  wbomtdoi    varchar2(1) default ' ' not null,
  wbomspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webomsa1 primary key( 
wbomvisn,
wbomcntr,
wbomscnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webomsa2 on webomsaf
(
wbomtrid,
wbomvisn,
wbomcntr,
wbomscnt
)
  tablespace pas_indx; 
create unique index webomsa3 on webomsaf
(
wbommsid,
wbomvisn,
wbomcntr,
wbomscnt
)
  tablespace pas_indx; 
create unique index webomsa4 on webomsaf
(
wbomeleg,
wbomvisn,
wbomcntr,
wbomscnt
)
  tablespace pas_indx; 
