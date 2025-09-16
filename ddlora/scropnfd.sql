create table scropnaf
(
  scoppid     varchar2(8) default ' ' not null,
  scopfil     varchar2(8) default ' ' not null,
  scopphy     varchar2(8) default ' ' not null,
  scopmod     number(1,0) default 0 not null,
  scopopt     varchar2(20) default ' ' not null,
  scopspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scropna1 primary key( 
scoppid,
scopfil)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
