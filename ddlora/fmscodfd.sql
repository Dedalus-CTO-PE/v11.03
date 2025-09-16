create table fmscodaf
(
  fmcdcaty    varchar2(2) default ' ' not null,
  fmcdcode    varchar2(3) default ' ' not null,
  fmcddesc    varchar2(20) default ' ' not null,
  fmcdspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmscoda1 primary key( 
fmcdcaty,
fmcdcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmscoda2 on fmscodaf
(
fmcdcode,
fmcdcaty
)
  tablespace pas_indx; 
