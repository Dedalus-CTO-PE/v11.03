create table hl7fabaf
(
  hlabrsid    char(64) default ' ' not null,
  hlabvrid    char(10) default ' ' not null,
  hlabcnt1    char(4) default ' ' not null,
  hlabpref    char(200) default ' ' not null,
  hlabptyp    char(255) default ' ' not null,
  hlabpdis    char(255) default ' ' not null,
  hlabpidu    char(50) default ' ' not null,
  hlabpsys    char(255) default ' ' not null,
  hlabpivl    char(200) default ' ' not null,
  hlabpids    char(255) default ' ' not null,
  hlabpidv    char(200) default ' ' not null,
  hlabpidc    char(50) default ' ' not null,
  hlabpidd    char(200) default ' ' not null,
  hlabpius    char(10) default ' ' not null,
  hlabpidt    char(200) default ' ' not null,
  hlabpips    char(40) default ' ' not null,
  hlabpipe    char(40) default ' ' not null,
  hlabspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7faba1 on hl7fabaf
(
hlabrsid,
hlabvrid,
hlabcnt1
);
revoke all on hl7fabaf from public ; 
grant select on hl7fabaf to public ; 
