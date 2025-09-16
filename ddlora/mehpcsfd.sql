create table mehpcsaf
(
  mhpcxdat    varchar2(8) default ' ' not null,
  mhpcxnum    varchar2(3) default ' ' not null,
  mhpcvisn    varchar2(8) default ' ' not null,
  mhpcurno    varchar2(8) default ' ' not null,
  mhpcocur    varchar2(3) default ' ' not null,
  mhpcerid    varchar2(9) default ' ' not null,
  mhpcuniq    varchar2(20) default ' ' not null,
  mhpccold    varchar2(8) default ' ' not null,
  mhpcwelp    varchar2(1) default ' ' not null,
  mhpcaccm    varchar2(1) default ' ' not null,
  mhpcemps    varchar2(1) default ' ' not null,
  mhpceduc    varchar2(1) default ' ' not null,
  mhpcspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehpcsa1 primary key( 
mhpcxdat,
mhpcxnum,
mhpcvisn,
mhpcurno,
mhpcocur)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
