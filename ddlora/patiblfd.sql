create table patiblaf
(
  ptibadmn    varchar2(8) default ' ' not null,
  ptibinvn    varchar2(8) default ' ' not null,
  ptibbrcd    varchar2(3) default ' ' not null,
  ptibamnt    number(14,2) default 0 not null,
  ptibgamn    number(14,2) default 0 not null,
  ptibspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patibla1 primary key( 
ptibadmn,
ptibinvn,
ptibbrcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
