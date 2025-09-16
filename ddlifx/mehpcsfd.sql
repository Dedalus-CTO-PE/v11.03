create table mehpcsaf
(
  mhpcxdat    char(8) default ' ' not null,
  mhpcxnum    char(3) default ' ' not null,
  mhpcvisn    char(8) default ' ' not null,
  mhpcurno    char(8) default ' ' not null,
  mhpcocur    char(3) default ' ' not null,
  mhpcerid    char(9) default ' ' not null,
  mhpcuniq    char(20) default ' ' not null,
  mhpccold    char(8) default ' ' not null,
  mhpcwelp    char(1) default ' ' not null,
  mhpcaccm    char(1) default ' ' not null,
  mhpcemps    char(1) default ' ' not null,
  mhpceduc    char(1) default ' ' not null,
  mhpcspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index mehpcsa1 on mehpcsaf
(
mhpcxdat,
mhpcxnum,
mhpcvisn,
mhpcurno,
mhpcocur
);
revoke all on mehpcsaf from public ; 
grant select on mehpcsaf to public ; 
