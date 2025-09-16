create table legdisaf
(
  ladsnumb    char(8) default ' ' not null,
  ladsdate    char(8) default ' ' not null,
  ladstime    char(5) default ' ' not null,
  ladssses    char(60) default ' ' not null,
  ladsdisc    char(3) default ' ' not null,
  ladsdiag    char(7) default ' ' not null,
  ladsusd1    char(3) default ' ' not null,
  ladsusd2    char(3) default ' ' not null,
  ladsusd3    char(3) default ' ' not null,
  ladsspar    char(1) default ' ' not null,
  lf          char(1)
);
create unique index legdisa1 on legdisaf
(
ladsnumb
);
revoke all on legdisaf from public ; 
grant select on legdisaf to public ; 
