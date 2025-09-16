create table patdayaf
(
  ptdydate    varchar2(4) default ' ' not null,
  dptdyadm    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdaya1 primary key( 
ptdydate,
dptdyadm)
constraint patdbyb1 primary key( 
ptdydate,
dptdyadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
