create table allcstaf
(
  alcsurno    char(8) default ' ' not null,
  alcscntr    char(8) default ' ' not null,
  alcstype    char(3) default ' ' not null,
  alcsline    char(3) default ' ' not null,
  alcsdata    char(100) default ' ' not null,
  alcsukey    char(24) default ' ' not null,
  alcsspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index allcsta1 on allcstaf
(
alcsurno,
alcscntr,
alcstype,
alcsline
);
revoke all on allcstaf from public ; 
grant select on allcstaf to public ; 
