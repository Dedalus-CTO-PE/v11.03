create table hl7qrdaf
(
  dqrdin01    char(20) default ' ' not null,
  dqrdin02    char(2) default ' ' not null,
  qrd001      char(26) default ' ' not null,
  qrd002      char(2) default ' ' not null,
  qrd003      char(2) default ' ' not null,
  qrd004      char(10) default ' ' not null,
  qrd005      char(2) default ' ' not null,
  qrd006      char(26) default ' ' not null,
  qrd007      char(10) default ' ' not null,
  qrd008      char(60) default ' ' not null,
  qrd009      char(60) default ' ' not null,
  qrd010      char(60) default ' ' not null,
  qrd011      char(20) default ' ' not null,
  qrd012      char(2) default ' ' not null,
  qrd013      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7qrd01 on hl7qrdaf
(
dqrdin01,
dqrdin02
);
revoke all on hl7qrdaf from public ; 
grant select on hl7qrdaf to public ; 
