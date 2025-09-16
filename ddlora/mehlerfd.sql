create table mehleraf
(
  dmhlradm    varchar2(8) default ' ' not null,
  mhlrdate    varchar2(8) default ' ' not null,
  mhlrtime    varchar2(8) default ' ' not null,
  mhlrcode    varchar2(3) default ' ' not null,
  mhlrspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehlera1 primary key( 
dmhlradm,
mhlrdate,
mhlrtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
