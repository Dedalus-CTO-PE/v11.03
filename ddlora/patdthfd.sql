create table patdthaf
(
  ptdhurno    varchar2(8) default ' ' not null,
  ptdhwebu    varchar2(10) default ' ' not null,
  ptdhspar    varchar2(70) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdtha1 primary key( 
ptdhurno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
