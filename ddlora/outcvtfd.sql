create table outcvtaf
(
  ocvtsite    varchar2(6) default ' ' not null,
  ocvtctyp    varchar2(6) default ' ' not null,
  ocvtcvty    varchar2(3) default ' ' not null,
  ocvtspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outcvta1 primary key( 
ocvtsite,
ocvtctyp,
ocvtcvty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
