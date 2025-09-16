create table webbrhaf
(
  wbbhhosp    char(3) default ' ' not null,
  wbbhpypn    char(8) default ' ' not null,
  wbbhprun    char(4) default ' ' not null,
  wbbhpdat    char(8) default ' ' not null,
  wbbhdamn    char(9) default ' ' not null,
  wbbhaccn    char(9) default ' ' not null,
  wbbhacnm    char(30) default ' ' not null,
  wbbhbsbc    char(6) default ' ' not null,
  wbbhstat    char(1) default ' ' not null,
  wbbhrsta    char(50) default ' ' not null,
  wbbhrkey    char(24) default ' ' not null,
  wbbhmsid    char(36) default ' ' not null,
  wbbhspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webbrha1 on webbrhaf
(
wbbhhosp,
wbbhpypn,
wbbhprun,
wbbhpdat,
wbbhrkey
);
create unique index webbrha2 on webbrhaf
(
wbbhhosp,
wbbhpdat,
wbbhpypn,
wbbhprun,
wbbhrkey
);
create unique index webbrha3 on webbrhaf
(
wbbhhosp,
wbbhstat,
wbbhpdat,
wbbhpypn,
wbbhprun,
wbbhrkey
);
create unique index webbrha4 on webbrhaf
(
wbbhhosp,
wbbhrkey,
wbbhpypn,
wbbhprun,
wbbhpdat
);
create unique index webbrha5 on webbrhaf
(
wbbhrkey,
wbbhhosp,
wbbhpypn,
wbbhprun,
wbbhpdat
);
revoke all on webbrhaf from public ; 
grant select on webbrhaf to public ; 
