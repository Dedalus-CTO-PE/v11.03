create table sinpodaf
(
  sipdpon     varchar2(7) default ' ' not null,
  sipditm     varchar2(3) default ' ' not null,
  sipdlin     varchar2(3) default ' ' not null,
  sipdcom     varchar2(60) default ' ' not null,
  sipdspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinpoda1 primary key( 
sipdpon,
sipditm,
sipdlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
