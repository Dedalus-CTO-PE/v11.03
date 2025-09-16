create table hicefcaf
(
  hcecbtch    varchar2(5) default ' ' not null,
  hcecrnum    varchar2(3) default ' ' not null,
  hceccntr    varchar2(5) default ' ' not null,
  hcectdat    varchar2(8) default ' ' not null,
  hcecdamt    number(14,2) default 0 not null,
  hcecspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicefca1 primary key( 
hcecbtch,
hcecrnum,
hceccntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hicefca2 on hicefcaf
(
hcecrnum,
hceccntr,
hcecbtch
)
  tablespace pas_indx; 
