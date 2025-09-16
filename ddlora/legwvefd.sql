create table legwvetf
(
  dlvadmno    varchar2(8) default ' ' not null,
  lvclmno     varchar2(20) default ' ' not null,
  lgwvauth    varchar2(12) default ' ' not null,
  lgwvdate    varchar2(8) default ' ' not null,
  lvspare     varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legwvet1 primary key( 
dlvadmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
