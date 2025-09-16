create table pmsprgaf
(
  pmpgcode    varchar2(8) default ' ' not null,
  pmpgdesc    varchar2(50) default ' ' not null,
  pmpgactv    varchar2(1) default ' ' not null,
  pmpgspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsprga1 primary key( 
pmpgcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
