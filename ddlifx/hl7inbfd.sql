create table hl7inbaf
(
  dh7inmes    char(20) default ' ' not null,
  h7instat    char(1) default ' ' not null,
  h7indttm    char(16) default ' ' not null,
  h7inmetp    char(3) default ' ' not null,
  h7inoper    char(4) default ' ' not null,
  h7inport    char(2) default ' ' not null,
  h7inpgid    char(8) default ' ' not null,
  h7inddat    char(16) default ' ' not null,
  h7inspar    char(34) default ' ' not null,
  lf          char(1)
);
create unique index hl7inb01 on hl7inbaf
(
dh7inmes
);
create unique index hl7inb02 on hl7inbaf
(
h7instat,
h7indttm,
dh7inmes
);
create unique index hl7inb03 on hl7inbaf
(
h7instat,
h7inddat,
dh7inmes
);
create unique index hl7inb04 on hl7inbaf
(
h7inmetp,
h7instat,
h7indttm,
dh7inmes
);
revoke all on hl7inbaf from public ; 
grant select on hl7inbaf to public ; 
