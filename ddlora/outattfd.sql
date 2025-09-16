create table outattaf
(
  oatsite     varchar2(6) default ' ' not null,
  oatgrup     varchar2(3) default ' ' not null,
  oatctyp     varchar2(6) default ' ' not null,
  oatrefr     varchar2(3) default ' ' not null,
  oatdate     varchar2(6) default ' ' not null,
  oatnref     number(5,0) default 0 not null,
  oatnnon     number(5,0) default 0 not null,
  oatnbkd     number(5,0) default 0 not null,
  otatdsch    number(5,0) default 0 not null,
  oatspar     varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outatta1 primary key( 
oatsite,
oatgrup,
oatctyp,
oatrefr,
oatdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
