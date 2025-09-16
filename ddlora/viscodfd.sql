create table viscodaf
(
  vscotype    varchar2(2) default ' ' not null,
  vscotkey    varchar2(30) default ' ' not null,
  vscocatg    varchar2(2) default ' ' not null,
  vscocode    varchar2(3) default ' ' not null,
  vscotext    varchar2(200) default ' ' not null,
  vscocdat    varchar2(8) default ' ' not null,
  vscoctim    varchar2(8) default ' ' not null,
  vscocuid    varchar2(10) default ' ' not null,
  vscodelt    varchar2(1) default ' ' not null,
  vscoddat    varchar2(8) default ' ' not null,
  vscodtim    varchar2(8) default ' ' not null,
  vscoduid    varchar2(10) default ' ' not null,
  vscospar    varchar2(53) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint viscoda1 primary key( 
vscotype,
vscotkey,
vscocatg,
vscocode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
