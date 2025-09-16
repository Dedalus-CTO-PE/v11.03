create table hl7fadaf
(
  hladrsid    char(64) default ' ' not null,
  hladvrid    char(10) default ' ' not null,
  hladcnt1    char(4) default ' ' not null,
  hladeref    char(200) default ' ' not null,
  hladetyp    char(255) default ' ' not null,
  hladedis    char(255) default ' ' not null,
  hladeidu    char(20) default ' ' not null,
  hladesys    char(255) default ' ' not null,
  hladeivl    char(200) default ' ' not null,
  hladeids    char(255) default ' ' not null,
  hladeidv    char(50) default ' ' not null,
  hladeidc    char(50) default ' ' not null,
  hladeidd    char(200) default ' ' not null,
  hladeidl    char(1) default ' ' not null,
  hladeidt    char(200) default ' ' not null,
  hladeips    char(40) default ' ' not null,
  hladeipe    char(40) default ' ' not null,
  hladspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fada1 on hl7fadaf
(
hladrsid,
hladvrid,
hladcnt1
);
revoke all on hl7fadaf from public ; 
grant select on hl7fadaf to public ; 
