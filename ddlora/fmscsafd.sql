create table fmscsaaf
(
  fmcsled     varchar2(2) default ' ' not null,
  fmcsacc     varchar2(12) default ' ' not null,
  fmcsbnk     varchar2(12) default ' ' not null,
  fmcscrd     varchar2(12) default ' ' not null,
  fmcsdis     varchar2(12) default ' ' not null,
  fmcsdeb     varchar2(12) default ' ' not null,
  fmcspay     varchar2(12) default ' ' not null,
  fmcscgst    varchar2(12) default ' ' not null,
  fmcsagst    varchar2(12) default ' ' not null,
  fmcsbnk2    varchar2(12) default ' ' not null,
  fmcsspa     varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmscsaa1 primary key( 
fmcsled,
fmcsacc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
