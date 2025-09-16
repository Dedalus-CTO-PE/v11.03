create table hl7outaf
(
  dh7oumes    varchar2(20) default ' ' not null,
  h7oudttm    varchar2(16) default ' ' not null,
  h7oumetp    varchar2(3) default ' ' not null,
  h7ouspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7out01 primary key( 
dh7oumes)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
