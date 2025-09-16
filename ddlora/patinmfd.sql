create table patinmaf
(
  dptimsys    varchar2(1) default ' ' not null,
  ptimclm     varchar2(3) default ' ' not null,
  ptimmes1    varchar2(60) default ' ' not null,
  ptimmes2    varchar2(60) default ' ' not null,
  ptimspar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patinma1 primary key( 
dptimsys,
ptimclm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
