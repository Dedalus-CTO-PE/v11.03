create table scrfldaf
(
  scflpid     char(8) default ' ' not null,
  scflsid     char(2) default ' ' not null,
  scflfno     char(5) default ' ' not null,
  scfldes     char(35) default ' ' not null,
  scfltyp     decimal(1,0) default 0 not null,
  scflfld     char(8) default ' ' not null,
  scflcal     char(8) default ' ' not null,
  scflwpf     char(8) default ' ' not null,
  scflfsc     char(2) default ' ' not null,
  scfldec     decimal(1,0) default 0 not null,
  scflmin     decimal(3,0) default 0 not null,
  scflmax     decimal(3,0) default 0 not null,
  scflfln     decimal(4,1) default 0 not null,
  scflfty     decimal(1,0) default 0 not null,
  scflkty     decimal(1,0) default 0 not null,
  scflman     decimal(1,0) default 0 not null,
  scflfex     decimal(1,0) default 0 not null,
  scfldaf     char(5) default ' ' not null,
  scflmul     decimal(1,0) default 0 not null,
  scflkey     decimal(1,0) default 0 not null,
  scflmty     char(5) default ' ' not null,
  scflspa     char(26) default ' ' not null,
  lf          char(1)
);
create unique index scrflda1 on scrfldaf
(
scflpid,
scflsid,
scflfno
);
create unique index scrflda2 on scrfldaf
(
scflpid,
scflsid,
scfldaf,
scflfno
);
create unique index scrflda3 on scrfldaf
(
scflpid,
scflsid,
scflmty,
scflfno
);
revoke all on scrfldaf from public ; 
grant select on scrfldaf to public ; 
