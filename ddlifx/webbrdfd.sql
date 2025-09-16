create table webbrdaf
(
  wbbrhosp    char(3) default ' ' not null,
  wbbrpypn    char(8) default ' ' not null,
  wbbrprun    char(4) default ' ' not null,
  wbbrpdat    char(8) default ' ' not null,
  wbbrclbp    char(9) default ' ' not null,
  wbbrclca    char(9) default ' ' not null,
  wbbrclid    char(6) default ' ' not null,
  wbbrldat    char(8) default ' ' not null,
  wbbrtrid    char(24) default ' ' not null,
  wbbrrkey    char(24) default ' ' not null,
  wbbrstat    char(1) default ' ' not null,
  wbbrltyp    char(2) default ' ' not null,
  wbbrmsid    char(36) default ' ' not null,
  wbbrspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webbrda1 on webbrdaf
(
wbbrhosp,
wbbrpypn,
wbbrprun,
wbbrpdat,
wbbrclid,
wbbrtrid
);
create unique index webbrda2 on webbrdaf
(
wbbrtrid,
wbbrhosp,
wbbrpypn,
wbbrprun,
wbbrpdat,
wbbrclid
);
create unique index webbrda3 on webbrdaf
(
wbbrrkey,
wbbrhosp,
wbbrpypn,
wbbrprun,
wbbrpdat,
wbbrclid,
wbbrtrid
);
create unique index webbrda4 on webbrdaf
(
wbbrrkey,
wbbrtrid,
wbbrhosp,
wbbrpypn,
wbbrprun,
wbbrpdat,
wbbrclid
);
revoke all on webbrdaf from public ; 
grant select on webbrdaf to public ; 
