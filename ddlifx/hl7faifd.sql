create table hl7faiaf
(
  hlairsid    char(64) default ' ' not null,
  hlaivrid    char(10) default ' ' not null,
  hlaicnt1    char(4) default ' ' not null,
  hlaiaare    char(200) default ' ' not null,
  hlaiaaty    char(255) default ' ' not null,
  hlaiaadi    char(200) default ' ' not null,
  hlaiaaus    char(50) default ' ' not null,
  hlaiaisy    char(255) default ' ' not null,
  hlaiaiva    char(200) default ' ' not null,
  hlaiaitx    char(200) default ' ' not null,
  hlaiacsy    char(255) default ' ' not null,
  hlaiacve    char(200) default ' ' not null,
  hlaiacco    char(50) default ' ' not null,
  hlaiacdi    char(200) default ' ' not null,
  hlaiacus    char(10) default ' ' not null,
  hlaiaast    char(40) default ' ' not null,
  hlaiaaen    char(40) default ' ' not null,
  hlaispar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7faia1 on hl7faiaf
(
hlairsid,
hlaivrid,
hlaicnt1
);
revoke all on hl7faiaf from public ; 
grant select on hl7faiaf to public ; 
