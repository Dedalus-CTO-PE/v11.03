create table hl7urhaf
(
  h7urnumb    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7urha1 primary key( 
h7urnumb)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
