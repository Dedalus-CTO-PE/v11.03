create table scrsltaf
(
  scslpid     varchar2(8) default ' ' not null,
  scslsid     varchar2(2) default ' ' not null,
  scslsel     varchar2(3) default ' ' not null,
  scslitm     varchar2(5) default ' ' not null,
  scslrow     varchar2(2) default ' ' not null,
  scslcol     varchar2(3) default ' ' not null,
  scsldes     varchar2(25) default ' ' not null,
  scslsec     varchar2(2) default ' ' not null,
  scslspa     varchar2(3) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrslta1 primary key( 
scslpid,
scslsid,
scslsel)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index scrslta2 on scrsltaf
(
scslpid,
scslsid,
scslitm,
scslsel
)
  tablespace pas_indx; 
