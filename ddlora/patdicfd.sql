create table patdicaf
(
  ptdiicd     varchar2(9) default ' ' not null,
  ptdikwd     varchar2(15) default ' ' not null,
  ptdispa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdica1 primary key( 
ptdiicd,
ptdikwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patdica2 on patdicaf
(
ptdikwd,
ptdiicd
)
  tablespace pas_indx; 
