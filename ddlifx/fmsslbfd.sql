create table fmsoxxxx
(
  fmsltled    char(2) default ' ' not null,
  fmsltsub    char(12) default ' ' not null,
  fmslfsub    char(12) default ' ' not null,
  fmslspar    char(23) default ' ' not null,
  lf          char(1)
);
create unique index fmsslba1 on fmsoxxxx
(
fmsltled,
fmsltsub
);
create unique index fmsslba2 on fmsoxxxx
(
fmsltled,
fmslfsub,
fmsltsub
);
revoke all on fmsoxxxx from public ; 
grant select on fmsoxxxx to public ; 
