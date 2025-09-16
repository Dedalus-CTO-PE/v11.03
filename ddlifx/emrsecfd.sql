create table emrsecaf
(
  emscoper    char(4) default ' ' not null,
  emscscr1    decimal(1,0) default 0 not null,
  emscscr2    decimal(1,0) default 0 not null,
  emscscr3    decimal(1,0) default 0 not null,
  emscscr4    decimal(1,0) default 0 not null,
  emscscr5    decimal(1,0) default 0 not null,
  emscspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index emrseca1 on emrsecaf
(
emscoper
);
revoke all on emrsecaf from public ; 
grant select on emrsecaf to public ; 
