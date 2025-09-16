create table outsitaf
(
  ostsite     char(6) default ' ' not null,
  ostdesc     char(30) default ' ' not null,
  ostpass     char(8) default ' ' not null,
  ostfile     char(3) default ' ' not null,
  ostsyst     char(3) default ' ' not null,
  ostirng     char(3) default ' ' not null,
  ostchrg     char(1) default ' ' not null,
  ostcatg     char(2) default ' ' not null,
  dostmaxd    char(3) default ' ' not null,
  otstxbok    char(2) default ' ' not null,
  otstxatt    char(2) default ' ' not null,
  otstactv    char(1) default ' ' not null,
  otstspar    char(55) default ' ' not null,
  lf          char(1)
);
create unique index outsita1 on outsitaf
(
ostsite
);
create unique index outsita2 on outsitaf
(
ostdesc,
ostsite
);
create unique index outsita3 on outsitaf
(
ostfile,
ostsite
);
revoke all on outsitaf from public ; 
grant select on outsitaf to public ; 
