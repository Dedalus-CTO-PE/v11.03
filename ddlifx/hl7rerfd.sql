create table hl7reraf
(
  dh7rrmes    char(20) default ' ' not null,
  dh7rrcnt    char(3) default ' ' not null,
  h7rrdesc    char(70) default ' ' not null,
  h7rrcode    char(3) default ' ' not null,
  h7rrspar    char(23) default ' ' not null,
  lf          char(1)
);
create unique index hl7rera1 on hl7reraf
(
dh7rrmes,
dh7rrcnt
);
revoke all on hl7reraf from public ; 
grant select on hl7reraf to public ; 
