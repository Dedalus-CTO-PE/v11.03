create table depcataf
(
  dpcpatca    char(3) default ' ' not null,
  dpcdesc     char(30) default ' ' not null,
  dpclval     decimal(4,0) default 0 not null,
  dpchval     decimal(4,0) default 0 not null,
  dpcavrg     decimal(4,0) default 0 not null,
  dpctspre    char(20) default ' ' not null,
  lf          char(1)
);
create unique index depcata1 on depcataf
(
dpcpatca
);
revoke all on depcataf from public ; 
grant select on depcataf to public ; 
