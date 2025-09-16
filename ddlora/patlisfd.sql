create table patlisaf
(
  ptlifund    varchar2(6) default ' ' not null,
  ptlitabl    varchar2(8) default ' ' not null,
  ptlilins    varchar2(1) default ' ' not null,
  ptlispar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patlisa1 primary key( 
ptlifund,
ptlitabl)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
