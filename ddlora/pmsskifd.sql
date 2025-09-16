create table pmsskiaf
(
  pmskcode    varchar2(5) default ' ' not null,
  pmskkkwd    varchar2(30) default ' ' not null,
  pmskspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsskia1 primary key( 
pmskcode,
pmskkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsskia2 on pmsskiaf
(
pmskkkwd,
pmskcode
)
  tablespace pas_indx; 
