create table phapluaf
(
  pldisp      char(15) default ' ' not null,
  plunit      char(17) default ' ' not null,
  plfiller    char(7) default ' ' not null,
  lf          char(1)
);
create unique index phaplua1 on phapluaf
(
pldisp
);
revoke all on phapluaf from public ; 
grant select on phapluaf to public ; 
