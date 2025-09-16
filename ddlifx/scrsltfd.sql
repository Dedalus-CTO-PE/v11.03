create table scrsltaf
(
  scslpid     char(8) default ' ' not null,
  scslsid     char(2) default ' ' not null,
  scslsel     char(3) default ' ' not null,
  scslitm     char(5) default ' ' not null,
  scslrow     char(2) default ' ' not null,
  scslcol     char(3) default ' ' not null,
  scsldes     char(25) default ' ' not null,
  scslsec     char(2) default ' ' not null,
  scslspa     char(3) default ' ' not null,
  lf          char(1)
);
create unique index scrslta1 on scrsltaf
(
scslpid,
scslsid,
scslsel
);
create unique index scrslta2 on scrsltaf
(
scslpid,
scslsid,
scslitm,
scslsel
);
revoke all on scrsltaf from public ; 
grant select on scrsltaf to public ; 
