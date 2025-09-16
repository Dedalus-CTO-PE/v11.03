create table ccsdnoaf
(
  ccdnhcd     varchar2(2) default ' ' not null,
  ccdndpt     varchar2(8) default ' ' not null,
  ccdnlin     varchar2(3) default ' ' not null,
  ccdndat     varchar2(70) default ' ' not null,
  ccdnspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsdnoa1 primary key( 
ccdnhcd,
ccdndpt,
ccdnlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
