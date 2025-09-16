create table patcanaf
(
  ptcccode    varchar2(9) default ' ' not null,
  ptcclatr    number(1,0) default 0 not null,
  ptccspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcana1 primary key( 
ptcccode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
