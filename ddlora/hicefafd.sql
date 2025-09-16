create table hicefaaf
(
  hcearnum    varchar2(3) default ' ' not null,
  hceacntr    varchar2(5) default ' ' not null,
  hceapayn    number(3,0) default 0 not null,
  hceapmci    varchar2(8) default ' ' not null,
  hceatamt    number(14,2) default 0 not null,
  hceapdat    varchar2(8) default ' ' not null,
  hceafnam    varchar2(30) default ' ' not null,
  hceaspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicefaa1 primary key( 
hcearnum,
hceacntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hicefaa2 on hicefaaf
(
hceapdat,
hcearnum,
hceacntr
)
  tablespace pas_indx; 
