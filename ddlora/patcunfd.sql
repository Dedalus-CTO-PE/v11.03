create table patcunof
(
  cundoct     varchar2(6) default ' ' not null,
  cunward     varchar2(3) default ' ' not null,
  cunnumb     varchar2(3) default ' ' not null,
  cunspar     varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcuno1 primary key( 
cundoct,
cunward)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
