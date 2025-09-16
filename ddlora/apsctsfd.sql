create table apsctsaf
(
  apctcode    varchar2(3) default ' ' not null,
  apctdesc    varchar2(35) default ' ' not null,
  apctspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsctsa1 primary key( 
apctcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
