create table hl7facaf
(
  hlacrsid    char(64) default ' ' not null,
  hlacvrid    char(10) default ' ' not null,
  hlaccnt1    char(4) default ' ' not null,
  hlacpare    char(200) default ' ' not null,
  hlacpaty    char(255) default ' ' not null,
  hlacpadi    char(200) default ' ' not null,
  hlacpaus    char(50) default ' ' not null,
  hlacpisy    char(255) default ' ' not null,
  hlacpiva    char(200) default ' ' not null,
  hlacpitx    char(200) default ' ' not null,
  hlacpcsy    char(255) default ' ' not null,
  hlacpcve    char(200) default ' ' not null,
  hlacpcco    char(50) default ' ' not null,
  hlacpcdi    char(200) default ' ' not null,
  hlacpcus    char(10) default ' ' not null,
  hlacppst    char(40) default ' ' not null,
  hlacpren    char(40) default ' ' not null,
  hlacspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7faca1 on hl7facaf
(
hlacrsid,
hlacvrid,
hlaccnt1
);
revoke all on hl7facaf from public ; 
grant select on hl7facaf to public ; 
