create table fmslxxxx
(
  fmbltled    char(2) default ' ' not null,
  fmbltacc    char(12) default ' ' not null,
  fmblfled    char(2) default ' ' not null,
  fmblfacc    char(12) default ' ' not null,
  fmblspar    char(21) default ' ' not null,
  lf          char(1)
);
create unique index fmslbua1 on fmslxxxx
(
fmbltled,
fmbltacc
);
create unique index fmslbua2 on fmslxxxx
(
fmblfled,
fmblfacc,
fmbltled,
fmbltacc
);
revoke all on fmslxxxx from public ; 
grant select on fmslxxxx to public ; 
