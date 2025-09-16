create table pmsskiaf
(
  pmskcode    char(5) default ' ' not null,
  pmskkkwd    char(30) default ' ' not null,
  pmskspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsskia1 on pmsskiaf
(
pmskcode,
pmskkkwd
);
create unique index pmsskia2 on pmsskiaf
(
pmskkkwd,
pmskcode
);
revoke all on pmsskiaf from public ; 
grant select on pmsskiaf to public ; 
