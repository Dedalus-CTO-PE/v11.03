create table fmscccaf
(
  fmcfledg    varchar2(2) default ' ' not null,
  fmcfccos    varchar2(12) default ' ' not null,
  fmcfscos    varchar2(12) default ' ' not null,
  fmcfdesc    varchar2(35) default ' ' not null,
  fmcfppos    varchar2(5) default ' ' not null,
  fmcfprt     varchar2(3) default ' ' not null,
  fmcfcrp     varchar2(1) default ' ' not null,
  fmcfspar    varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsccca1 primary key( 
fmcfledg,
fmcfccos,
fmcfscos)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsccca2 on fmscccaf
(
fmcfledg,
fmcfscos,
fmcfccos
)
  tablespace pas_indx; 
