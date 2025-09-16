create table oprtryaf
(
  opthcode    char(15) default ' ' not null,
  opthdesc    char(30) default ' ' not null,
  opthhosp    char(3) default ' ' not null,
  opthspar    char(32) default ' ' not null,
  lf          char(1)
);
create unique index oprtrya1 on oprtryaf
(
opthcode,
opthhosp
);
create unique index oprtrya2 on oprtryaf
(
opthdesc,
opthcode,
opthhosp
);
revoke all on oprtryaf from public ; 
grant select on oprtryaf to public ; 
