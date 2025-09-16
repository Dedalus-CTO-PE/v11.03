create table outaudui
(
  otuiaudd    varchar2(8) default ' ' not null,
  otuiaudt    varchar2(8) default ' ' not null,
  otuiaudp    varchar2(2) default ' ' not null,
  otuiaudr    varchar2(1) default ' ' not null,
  otuiauds    number(1,0) default 0 not null,
  otuiaudo    varchar2(4) default ' ' not null,
  otuisite    varchar2(6) default ' ' not null,
  otuitype    varchar2(6) default ' ' not null,
  otuiclin    varchar2(6) default ' ' not null,
  otuiteam    varchar2(6) default ' ' not null,
  otuisdat    varchar2(8) default ' ' not null,
  otuiedat    varchar2(8) default ' ' not null,
  otuispar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index outaudui on outaudui
(
otuiaudd,
otuiaudt,
otuiaudp,
otuiaudr
)
tablespace pas_indx; 
create table outuniaf
(
  otuisite    varchar2(6) default ' ' not null,
  otuitype    varchar2(6) default ' ' not null,
  otuiclin    varchar2(6) default ' ' not null,
  otuiteam    varchar2(6) default ' ' not null,
  otuisdat    varchar2(8) default ' ' not null,
  otuiedat    varchar2(8) default ' ' not null,
  otuispar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outunia1 primary key( 
otuisite,
otuitype,
otuiclin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outunia2 on outuniaf
(
otuisite,
otuiclin,
otuitype
)
  tablespace pas_indx; 
create unique index outunia3 on outuniaf
(
otuiteam,
otuisite,
otuitype,
otuiclin
)
  tablespace pas_indx; 
