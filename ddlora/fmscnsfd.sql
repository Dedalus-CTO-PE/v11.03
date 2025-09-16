create table fmscnsaf
(
  fmcncled    varchar2(2) default ' ' not null,
  fmcnrept    varchar2(2) default ' ' not null,
  fmcnledg    varchar2(2) default ' ' not null,
  fmcnspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmscnsa1 primary key( 
fmcncled,
fmcnrept,
fmcnledg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
