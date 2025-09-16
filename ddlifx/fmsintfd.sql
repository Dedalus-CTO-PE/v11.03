create table fmsintaf
(
  fmincode    char(3) default ' ' not null,
  fmindesc    char(35) default ' ' not null,
  fmincash    char(1) default ' ' not null,
  fminauth    char(1) default ' ' not null,
  fmintdes    char(30) default ' ' not null,
  fminref     char(15) default ' ' not null,
  fmindiss    char(5) default ' ' not null,
  fminresp    char(4) default ' ' not null,
  fminledg    char(2) default ' ' not null,
  fmincrac    char(12) default ' ' not null,
  fmincraa    char(12) default ' ' not null,
  fminfeei    char(1) default ' ' not null,
  fminspar    char(19) default ' ' not null,
  lf          char(1)
);
create unique index fmsinta1 on fmsintaf
(
fmincode
);
revoke all on fmsintaf from public ; 
grant select on fmsintaf to public ; 
