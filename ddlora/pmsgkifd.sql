create table pmsgkiaf
(
  pmgkcode    varchar2(3) default ' ' not null,
  pmgkkkwd    varchar2(30) default ' ' not null,
  pmgkspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsgkia1 primary key( 
pmgkcode,
pmgkkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsgkia2 on pmsgkiaf
(
pmgkkkwd,
pmgkcode
)
  tablespace pas_indx; 
