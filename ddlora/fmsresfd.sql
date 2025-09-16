create table fmsresaf
(
  fmrscode    varchar2(4) default ' ' not null,
  fmrsdesc    varchar2(35) default ' ' not null,
  fmrstele    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsresa1 primary key( 
fmrscode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
