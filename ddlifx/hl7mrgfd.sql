create table hl7mrgaf
(
  dmrgin01    char(20) default ' ' not null,
  dmrgin02    char(2) default ' ' not null,
  mrg001      char(20) default ' ' not null,
  mrg002      char(20) default ' ' not null,
  mrg003      char(20) default ' ' not null,
  mrg004      char(20) default ' ' not null,
  mrg005      char(20) default ' ' not null,
  mrg006      char(20) default ' ' not null,
  mrg007      char(48) default ' ' not null,
  mrg008      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7mrg01 on hl7mrgaf
(
dmrgin01,
dmrgin02
);
revoke all on hl7mrgaf from public ; 
grant select on hl7mrgaf to public ; 
