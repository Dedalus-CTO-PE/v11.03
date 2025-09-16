create table debtcraf
(
  dbtcdeb     char(8) default ' ' not null,
  dbtcdln     char(3) default ' ' not null,
  dbtcitm     char(8) default ' ' not null,
  dbtcsdat    char(8) default ' ' not null,
  dbtcdref    char(50) default ' ' not null,
  dbtcoref    char(50) default ' ' not null,
  dbtcqty     decimal(10,2) default 0 not null,
  dbtcpri     decimal(16,4) default 0 not null,
  dbtctot     decimal(14,2) default 0 not null,
  dbtctrt     decimal(6,2) default 0 not null,
  dbtctax     decimal(14,2) default 0 not null,
  dbtcur1     char(25) default ' ' not null,
  dbtcur2     char(25) default ' ' not null,
  dbtcud1     char(8) default ' ' not null,
  dbtcud2     char(8) default ' ' not null,
  dbtcuy1     char(1) default ' ' not null,
  dbtcuy2     char(1) default ' ' not null,
  dbtcuc1     char(3) default ' ' not null,
  dbtcuc2     char(3) default ' ' not null,
  dbtcuc3     char(3) default ' ' not null,
  dbtcuc4     char(3) default ' ' not null,
  dbtcgst     char(6) default ' ' not null,
  dbtcspa     char(14) default ' ' not null,
  lf          char(1)
);
create unique index debtcra1 on debtcraf
(
dbtcdeb,
dbtcdln
);
revoke all on debtcraf from public ; 
grant select on debtcraf to public ; 
