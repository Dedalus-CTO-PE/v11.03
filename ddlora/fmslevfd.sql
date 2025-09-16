create table fmslevaf
(
  fmlvcode    varchar2(3) default ' ' not null,
  fmlvdesc    varchar2(20) default ' ' not null,
  fmlvspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsleva1 primary key( 
fmlvcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
