create table pmsikiaf
(
  pmikcode    varchar2(7) default ' ' not null,
  pmikkkwd    varchar2(30) default ' ' not null,
  pmikspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsikia1 primary key( 
pmikcode,
pmikkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsikia2 on pmsikiaf
(
pmikkkwd,
pmikcode
)
  tablespace pas_indx; 
