create table ibasusaf
(
  ibsumnth    varchar2(6) default ' ' not null,
  ibsuprog    varchar2(8) default ' ' not null,
  ibsunumb    number(6,0) default 0 not null,
  ibsuspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibasusa1 primary key( 
ibsumnth,
ibsuprog)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibasusa2 on ibasusaf
(
ibsuprog,
ibsumnth
)
  tablespace pas_indx; 
