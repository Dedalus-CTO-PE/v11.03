create table hl7fahaf
(
  hlahrsid    char(64) default ' ' not null,
  hlahvrid    char(10) default ' ' not null,
  hlahcnt1    char(4) default ' ' not null,
  hlaharef    char(200) default ' ' not null,
  hlahatyp    char(255) default ' ' not null,
  hlahadis    char(200) default ' ' not null,
  hlahaidu    char(50) default ' ' not null,
  hlahasys    char(255) default ' ' not null,
  hlahaivl    char(200) default ' ' not null,
  hlahaids    char(255) default ' ' not null,
  hlahaidv    char(200) default ' ' not null,
  hlahaidc    char(50) default ' ' not null,
  hlahaidd    char(200) default ' ' not null,
  hlahaius    char(10) default ' ' not null,
  hlahaidt    char(200) default ' ' not null,
  hlahaips    char(40) default ' ' not null,
  hlahaipe    char(40) default ' ' not null,
  hlahspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7faha1 on hl7fahaf
(
hlahrsid,
hlahvrid,
hlahcnt1
);
revoke all on hl7fahaf from public ; 
grant select on hl7fahaf to public ; 
