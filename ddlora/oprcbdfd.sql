create table oprcbdaf
(
  opcbuniq    varchar2(10) default ' ' not null,
  opcbcoun    varchar2(2) default ' ' not null,
  opcbbsex    varchar2(1) default ' ' not null,
  opcbbdob    varchar2(8) default ' ' not null,
  opcbbtme    varchar2(8) default ' ' not null,
  opcbburn    varchar2(8) default ' ' not null,
  opcbcuid    varchar2(10) default ' ' not null,
  opcbcdat    varchar2(8) default ' ' not null,
  opcbctim    varchar2(8) default ' ' not null,
  opcbuuid    varchar2(10) default ' ' not null,
  opcbudat    varchar2(8) default ' ' not null,
  opcbutim    varchar2(8) default ' ' not null,
  opcbdelt    varchar2(1) default ' ' not null,
  opcbduid    varchar2(10) default ' ' not null,
  opcbddat    varchar2(8) default ' ' not null,
  opcbdtim    varchar2(8) default ' ' not null,
  opcbbwgt    varchar2(6) default ' ' not null,
  opcbpdtm    varchar2(8) default ' ' not null,
  opcbspar    varchar2(36) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprcbda1 primary key( 
opcbuniq,
opcbcoun)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
