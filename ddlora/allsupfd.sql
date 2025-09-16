create table allsupaf
(
  alspvisn    varchar2(8) default ' ' not null,
  alspenct    varchar2(8) default ' ' not null,
  alspscnt    varchar2(8) default ' ' not null,
  alspscod    varchar2(7) default ' ' not null,
  alspcdat    varchar2(8) default ' ' not null,
  alspctim    varchar2(8) default ' ' not null,
  alspcuid    varchar2(10) default ' ' not null,
  alspudat    varchar2(8) default ' ' not null,
  alsputim    varchar2(8) default ' ' not null,
  alspuuid    varchar2(10) default ' ' not null,
  alspqnty    number(3,0) default 0 not null,
  alspprce    number(18,6) default 0 not null,
  alspappn    varchar2(20) default ' ' not null,
  alspspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allsupa1 primary key( 
alspvisn,
alspenct,
alspscnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
