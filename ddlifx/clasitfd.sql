create table clasitaf
(
  castsite    char(6) default ' ' not null,
  castdesc    char(30) default ' ' not null,
  castpass    char(8) default ' ' not null,
  castfile    char(2) default ' ' not null,
  casttype    char(1) default ' ' not null,
  castscrn    decimal(1,0) default 0 not null,
  castspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index clasita1 on clasitaf
(
castsite
);
create unique index clasita2 on clasitaf
(
castdesc,
castsite
);
revoke all on clasitaf from public ; 
grant select on clasitaf to public ; 
