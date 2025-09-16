create table hl7recaf
(
  dh7remes    char(20) default ' ' not null,
  h7restat    char(1) default ' ' not null,
  h7redttm    char(16) default ' ' not null,
  h7remtyp    char(7) default ' ' not null,
  h7reurno    char(8) default ' ' not null,
  h7redtpr    char(16) default ' ' not null,
  h7respar    char(21) default ' ' not null,
  lf          char(1)
);
create unique index hl7reca1 on hl7recaf
(
dh7remes
);
create unique index hl7reca2 on hl7recaf
(
h7restat,
h7redttm,
dh7remes
);
create unique index hl7reca3 on hl7recaf
(
h7reurno,
h7redttm,
dh7remes
);
revoke all on hl7recaf from public ; 
grant select on hl7recaf to public ; 
