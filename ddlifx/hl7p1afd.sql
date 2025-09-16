create table hl7p1aaf
(
  hl1arsid    char(64) default ' ' not null,
  hl1avrid    char(10) default ' ' not null,
  hl1acnt1    char(4) default ' ' not null,
  hl1atsys    char(255) default ' ' not null,
  hl1atver    char(200) default ' ' not null,
  hl1atcod    char(50) default ' ' not null,
  hl1atdis    char(200) default ' ' not null,
  hl1atusl    char(10) default ' ' not null,
  hl1atsy2    char(255) default ' ' not null,
  hl1atve2    char(200) default ' ' not null,
  hl1atco2    char(50) default ' ' not null,
  hl1atdi2    char(200) default ' ' not null,
  hl1atus2    char(10) default ' ' not null,
  hl1aactv    char(10) default ' ' not null,
  hl1agend    char(50) default ' ' not null,
  hl1abdat    char(40) default ' ' not null,
  hl1adebo    char(10) default ' ' not null,
  hl1adedt    char(40) default ' ' not null,
  hl1amatx    char(200) default ' ' not null,
  hl1amasy    char(255) default ' ' not null,
  hl1amave    char(200) default ' ' not null,
  hl1amaco    char(50) default ' ' not null,
  hl1amadi    char(200) default ' ' not null,
  hl1amaus    char(10) default ' ' not null,
  hl1ambbo    char(10) default ' ' not null,
  hl1ambin    char(10) default ' ' not null,
  hl1aspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7p1aa1 on hl7p1aaf
(
hl1arsid,
hl1avrid,
hl1acnt1
);
revoke all on hl7p1aaf from public ; 
grant select on hl7p1aaf to public ; 
