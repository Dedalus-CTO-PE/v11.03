create table ibapddaf
(
  ibpddept    char(6) default ' ' not null,
  ibpdsequ    char(3) default ' ' not null,
  ibpdprtr    char(6) default ' ' not null,
  ibpdpdsc    char(20) default ' ' not null,
  ibpdspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index ibapdda1 on ibapddaf
(
ibpddept,
ibpdprtr
);
create unique index ibapdda2 on ibapddaf
(
ibpddept,
ibpdsequ,
ibpdprtr
);
create unique index ibapdda3 on ibapddaf
(
ibpdprtr,
ibpddept
);
create unique index ibapdda4 on ibapddaf
(
ibpddept,
ibpdpdsc,
ibpdprtr
);
revoke all on ibapddaf from public ; 
grant select on ibapddaf to public ; 
