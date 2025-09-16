create table sinrstaf
(
  sirswar     varchar2(5) default ' ' not null,
  sirsrand    varchar2(7) default ' ' not null,
  sirscat     varchar2(7) default ' ' not null,
  sirsspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinrsta1 primary key( 
sirswar,
sirsrand,
sirscat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinrsta2 on sinrstaf
(
sirsrand
)
  tablespace pas_indx; 
