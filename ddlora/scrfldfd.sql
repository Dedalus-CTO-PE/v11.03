create table scrfldaf
(
  scflpid     varchar2(8) default ' ' not null,
  scflsid     varchar2(2) default ' ' not null,
  scflfno     varchar2(5) default ' ' not null,
  scfldes     varchar2(35) default ' ' not null,
  scfltyp     number(1,0) default 0 not null,
  scflfld     varchar2(8) default ' ' not null,
  scflcal     varchar2(8) default ' ' not null,
  scflwpf     varchar2(8) default ' ' not null,
  scflfsc     varchar2(2) default ' ' not null,
  scfldec     number(1,0) default 0 not null,
  scflmin     number(3,0) default 0 not null,
  scflmax     number(3,0) default 0 not null,
  scflfln     number(4,1) default 0 not null,
  scflfty     number(1,0) default 0 not null,
  scflkty     number(1,0) default 0 not null,
  scflman     number(1,0) default 0 not null,
  scflfex     number(1,0) default 0 not null,
  scfldaf     varchar2(5) default ' ' not null,
  scflmul     number(1,0) default 0 not null,
  scflkey     number(1,0) default 0 not null,
  scflmty     varchar2(5) default ' ' not null,
  scflspa     varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrflda1 primary key( 
scflpid,
scflsid,
scflfno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index scrflda2 on scrfldaf
(
scflpid,
scflsid,
scfldaf,
scflfno
)
  tablespace pas_indx; 
create unique index scrflda3 on scrfldaf
(
scflpid,
scflsid,
scflmty,
scflfno
)
  tablespace pas_indx; 
