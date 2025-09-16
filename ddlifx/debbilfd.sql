create table debbilaf
(
  dbbideb     char(8) default ' ' not null,
  dbbiuni     char(6) default ' ' not null,
  dbbista     char(1) default ' ' not null,
  dbbidat     char(8) default ' ' not null,
  dbbitim     char(6) default ' ' not null,
  dbbiuid     char(4) default ' ' not null,
  dbbiitm     char(8) default ' ' not null,
  dbbisdat    char(8) default ' ' not null,
  dbbidref    char(50) default ' ' not null,
  dbbioref    char(50) default ' ' not null,
  dbbiqty     decimal(10,2) default 0 not null,
  dbbipri     decimal(16,4) default 0 not null,
  dbbitot     decimal(14,2) default 0 not null,
  dbbitrt     decimal(6,2) default 0 not null,
  dbbitax     decimal(14,2) default 0 not null,
  dbbiur1     char(25) default ' ' not null,
  dbbiur2     char(25) default ' ' not null,
  dbbiud1     char(8) default ' ' not null,
  dbbiud2     char(8) default ' ' not null,
  dbbiuy1     char(1) default ' ' not null,
  dbbiuy2     char(1) default ' ' not null,
  dbbiuc1     char(3) default ' ' not null,
  dbbiuc2     char(3) default ' ' not null,
  dbbiuc3     char(3) default ' ' not null,
  dbbiuc4     char(3) default ' ' not null,
  dbbigst     char(6) default ' ' not null,
  dbbispa     char(14) default ' ' not null,
  lf          char(1)
);
create unique index debbila1 on debbilaf
(
dbbideb,
dbbiuni
);
create unique index debbila2 on debbilaf
(
dbbideb,
dbbista,
dbbiuni
);
revoke all on debbilaf from public ; 
grant select on debbilaf to public ; 
