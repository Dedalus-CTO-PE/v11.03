create table hl7cisaf
(
  dh7cimes    char(20) default ' ' not null,
  h7cistat    char(1) default ' ' not null,
  h7cidttm    char(16) default ' ' not null,
  h7cimetp    char(3) default ' ' not null,
  h7cioper    char(4) default ' ' not null,
  h7ciport    char(2) default ' ' not null,
  h7cipgid    char(8) default ' ' not null,
  h7ciddat    char(16) default ' ' not null,
  h7ciurno    char(8) default ' ' not null,
  h7civisn    char(8) default ' ' not null,
  h7ciactn    char(1) default ' ' not null,
  h7citrid    decimal(4,0) default 0 not null,
  h7ciincl    char(8) default ' ' not null,
  h7cirtag    char(20) default ' ' not null,
  h7cistag    char(3) default ' ' not null,
  h7ciusid    char(10) default ' ' not null,
  h7cihosp    char(3) default ' ' not null,
  h7ciutim    char(8) default ' ' not null,
  h7cispar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index hl7cisa1 on hl7cisaf
(
dh7cimes
);
create unique index hl7cisa2 on hl7cisaf
(
h7cistat,
h7cidttm,
dh7cimes
);
create unique index hl7cisa3 on hl7cisaf
(
h7cistat,
h7ciddat,
dh7cimes
);
create unique index hl7cisa4 on hl7cisaf
(
h7cimetp,
h7cistat,
h7cidttm,
dh7cimes
);
create unique index hl7cisa5 on hl7cisaf
(
h7ciurno,
h7cidttm,
dh7cimes
);
create unique index hl7cisa6 on hl7cisaf
(
h7civisn,
h7cidttm,
dh7cimes
);
revoke all on hl7cisaf from public ; 
grant select on hl7cisaf to public ; 
