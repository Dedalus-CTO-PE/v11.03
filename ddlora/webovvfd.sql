create table webovvaf
(
  wbovurno    varchar2(8) default ' ' not null,
  wbovdate    varchar2(8) default ' ' not null,
  wbovtime    varchar2(8) default ' ' not null,
  dwbovcnt    varchar2(2) default ' ' not null,
  wbovhosp    varchar2(3) default ' ' not null,
  wbovtrid    varchar2(24) default ' ' not null,
  wbovsnam    varchar2(40) default ' ' not null,
  wbovfnam    varchar2(40) default ' ' not null,
  wbovvetn    varchar2(9) default ' ' not null,
  wbovprdt    varchar2(8) default ' ' not null,
  wbovstat    varchar2(4) default ' ' not null,
  wboveror    varchar2(500) default ' ' not null,
  wbovvenc    varchar2(4) default ' ' not null,
  wbovresp    varchar2(1) default ' ' not null,
  wbovmsid    varchar2(36) default ' ' not null,
  wbovspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webovva1 primary key( 
wbovurno,
wbovdate,
wbovtime,
dwbovcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webovva2 on webovvaf
(
wbovtrid,
wbovdate,
wbovtime,
wbovurno,
dwbovcnt
)
  tablespace pas_indx; 
create unique index webovva3 on webovvaf
(
wbovresp,
wbovurno,
wbovdate,
wbovtime,
dwbovcnt
)
  tablespace pas_indx; 
create unique index webovva4 on webovvaf
(
wbovmsid,
wbovurno,
wbovdate,
wbovtime,
dwbovcnt
)
  tablespace pas_indx; 
