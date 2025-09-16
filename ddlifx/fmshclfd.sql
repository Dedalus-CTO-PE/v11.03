create table fmshclaf
(
  fmhlinst    char(3) default ' ' not null,
  fmhldesc    char(35) default ' ' not null,
  fmhlpile    char(2) default ' ' not null,
  fmhlpis1    char(12) default ' ' not null,
  fmhlpis2    char(12) default ' ' not null,
  fmhlpis3    char(12) default ' ' not null,
  fmhlpis4    char(12) default ' ' not null,
  fmhlpis5    char(12) default ' ' not null,
  fmhlpic1    char(12) default ' ' not null,
  fmhlpic2    char(12) default ' ' not null,
  fmhlpib1    char(4) default ' ' not null,
  fmhlpib2    char(4) default ' ' not null,
  fmhlpirs    char(4) default ' ' not null,
  fmhlpids    char(5) default ' ' not null,
  fmhlpip1    char(3) default ' ' not null,
  fmhlpip2    char(3) default ' ' not null,
  fmhlpitd    char(35) default ' ' not null,
  fmhlspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmshcla1 on fmshclaf
(
fmhlinst
);
revoke all on fmshclaf from public ; 
grant select on fmshclaf to public ; 
