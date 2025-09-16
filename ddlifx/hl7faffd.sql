create table hl7fafaf
(
  hlafrsid    char(64) default ' ' not null,
  hlafvrid    char(10) default ' ' not null,
  hlafcnt1    char(4) default ' ' not null,
  hlafrref    char(200) default ' ' not null,
  hlafrtyp    char(255) default ' ' not null,
  hlafrdis    char(200) default ' ' not null,
  hlafridu    char(50) default ' ' not null,
  hlafrsys    char(255) default ' ' not null,
  hlafrivl    char(200) default ' ' not null,
  hlafrids    char(255) default ' ' not null,
  hlafridv    char(200) default ' ' not null,
  hlafridc    char(50) default ' ' not null,
  hlafridd    char(200) default ' ' not null,
  hlafrius    char(10) default ' ' not null,
  hlafridt    char(200) default ' ' not null,
  hlafrips    char(40) default ' ' not null,
  hlafripe    char(40) default ' ' not null,
  hlafspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fafa1 on hl7fafaf
(
hlafrsid,
hlafvrid,
hlafcnt1
);
revoke all on hl7fafaf from public ; 
grant select on hl7fafaf to public ; 
