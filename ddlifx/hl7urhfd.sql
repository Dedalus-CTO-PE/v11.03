create table hl7urhaf
(
  h7urnumb    char(8) default ' ' not null,
  lf          char(1)
);
create unique index hl7urha1 on hl7urhaf
(
h7urnumb
);
revoke all on hl7urhaf from public ; 
grant select on hl7urhaf to public ; 
