create table hl7zidaf
(
  dzidin01    char(20) default ' ' not null,
  dzidin02    char(2) default ' ' not null,
  zid001      char(2) default ' ' not null,
  zid002      char(2) default ' ' not null,
  zid003      char(2) default ' ' not null,
  zid004      char(26) default ' ' not null,
  zid005      char(20) default ' ' not null,
  zid006      char(8) default ' ' not null,
  zid007      char(8) default ' ' not null,
  zid008      char(5) default ' ' not null,
  zid009      char(2) default ' ' not null,
  zid010      char(6) default ' ' not null,
  zid011      char(26) default ' ' not null,
  zid012      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7zid01 on hl7zidaf
(
dzidin01,
dzidin02
);
revoke all on hl7zidaf from public ; 
grant select on hl7zidaf to public ; 
