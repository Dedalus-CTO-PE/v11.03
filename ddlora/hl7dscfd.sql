create table hl7dscaf
(
  ddscin01    varchar2(20) default ' ' not null,
  ddscin02    varchar2(2) default ' ' not null,
  dsc00101    varchar2(90) default ' ' not null,
  dsc00102    varchar2(90) default ' ' not null,
  dsc002      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7dsc01 primary key( 
ddscin01,
ddscin02)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
