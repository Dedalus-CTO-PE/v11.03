create table hl7p6aaf
(
  hl6arsid    char(64) default ' ' not null,
  hl6avrid    char(10) default ' ' not null,
  hl6acnt1    char(4) default ' ' not null,
  hl6acnt2    char(4) default ' ' not null,
  hl6atsys    char(50) default ' ' not null,
  hl6atval    char(200) default ' ' not null,
  hl6atuse    char(50) default ' ' not null,
  hl6atran    char(50) default ' ' not null,
  hl6atstr    char(40) default ' ' not null,
  hl6atend    char(40) default ' ' not null,
  hl6atsy2    char(50) default ' ' not null,
  hl6atva2    char(200) default ' ' not null,
  hl6atus2    char(50) default ' ' not null,
  hl6atra2    char(50) default ' ' not null,
  hl6atst2    char(40) default ' ' not null,
  hl6aten2    char(40) default ' ' not null,
  hl6atsy3    char(50) default ' ' not null,
  hl6atva3    char(200) default ' ' not null,
  hl6atus3    char(50) default ' ' not null,
  hl6atra3    char(50) default ' ' not null,
  hl6atst3    char(40) default ' ' not null,
  hl6aten3    char(40) default ' ' not null,
  hl6aause    char(50) default ' ' not null,
  hl6aatyp    char(50) default ' ' not null,
  hl6aatxt    char(200) default ' ' not null,
  hl6aaln1    char(200) default ' ' not null,
  hl6aaln2    char(200) default ' ' not null,
  hl6aaln3    char(200) default ' ' not null,
  hl6aaln4    char(200) default ' ' not null,
  hl6aapos    char(40) default ' ' not null,
  hl6aacnt    char(200) default ' ' not null,
  hl6aastr    char(40) default ' ' not null,
  hl6aaend    char(40) default ' ' not null,
  hl6aspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7p6aa1 on hl7p6aaf
(
hl6arsid,
hl6avrid,
hl6acnt1,
hl6acnt2
);
revoke all on hl7p6aaf from public ; 
grant select on hl7p6aaf to public ; 
