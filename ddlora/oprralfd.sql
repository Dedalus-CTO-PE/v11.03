create table oprralaf
(
  oprldate    varchar2(8) default ' ' not null,
  oprlstor    varchar2(5) default ' ' not null,
  oprlsuor    varchar2(6) default ' ' not null,
  oprlstnw    varchar2(5) default ' ' not null,
  oprlsunw    varchar2(6) default ' ' not null,
  oprlovst    varchar2(5) default ' ' not null,
  oprloven    varchar2(5) default ' ' not null,
  oprlcuid    varchar2(10) default ' ' not null,
  oprlcdat    varchar2(8) default ' ' not null,
  oprlctim    varchar2(8) default ' ' not null,
  oprlspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprrala1 primary key( 
oprldate,
oprlstor,
oprlsuor,
oprlstnw,
oprlsunw)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprrala2 on oprralaf
(
oprldate,
oprlstnw,
oprlsunw,
oprlstor,
oprlsuor
)
  tablespace pas_indx; 
