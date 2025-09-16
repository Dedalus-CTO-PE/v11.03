create table hl7dscaf
(
  ddscin01    char(20) default ' ' not null,
  ddscin02    char(2) default ' ' not null,
  dsc00101    char(90) default ' ' not null,
  dsc00102    char(90) default ' ' not null,
  dsc002      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7dsc01 on hl7dscaf
(
ddscin01,
ddscin02
);
revoke all on hl7dscaf from public ; 
grant select on hl7dscaf to public ; 
