create table rcpcidaf
(
  rcpcash     varchar2(6) default ' ' not null,
  rcppass     varchar2(6) default ' ' not null,
  rcpsur      varchar2(20) default ' ' not null,
  rcpgiven    varchar2(20) default ' ' not null,
  rcpsecur    number(1,0) default 0 not null,
  rccihosp    varchar2(3) default ' ' not null,
  rccichqa    varchar2(15) default ' ' not null,
  rcciactv    varchar2(1) default ' ' not null,
  rcciccrd    varchar2(1) default ' ' not null,
  rcciinvr    varchar2(3) default ' ' not null,
  rccidepr    varchar2(3) default ' ' not null,
  rcci3pps    varchar2(6) default ' ' not null,
  rccispar    varchar2(44) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint rcpcida1 primary key( 
rcpcash)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
