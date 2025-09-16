create table fmstdsaf
(
  fmtdcode    varchar2(4) default ' ' not null,
  fmtddesc    varchar2(35) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmstdsa1 primary key( 
fmtdcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
