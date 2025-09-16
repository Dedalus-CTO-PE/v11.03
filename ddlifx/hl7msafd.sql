create table hl7msaaf
(
  dmsain01    char(20) default ' ' not null,
  dmsain02    char(2) default ' ' not null,
  msa001      char(2) default ' ' not null,
  msa002      char(20) default ' ' not null,
  msa003      char(80) default ' ' not null,
  msa004      char(15) default ' ' not null,
  msa005      char(2) default ' ' not null,
  msa006      char(100) default ' ' not null,
  msa007      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7msa01 on hl7msaaf
(
dmsain01,
dmsain02
);
revoke all on hl7msaaf from public ; 
grant select on hl7msaaf to public ; 
