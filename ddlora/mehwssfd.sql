create table mehwssaf
(
  mhwsdate    varchar2(6) default ' ' not null,
  mhwsward    varchar2(3) default ' ' not null,
  mhwsbeds    number(4,0) default 0 not null,
  mhwsinst    number(6,0) default 0 not null,
  mhwsslst    number(6,0) default 0 not null,
  mhwsadmi    number(6,0) default 0 not null,
  mhwsadms    number(6,0) default 0 not null,
  mhwsadmc    number(6,0) default 0 not null,
  mhwstrno    number(6,0) default 0 not null,
  mhwstrni    number(6,0) default 0 not null,
  mhwsreth    number(6,0) default 0 not null,
  mhwsrett    number(6,0) default 0 not null,
  mhwsreta    number(6,0) default 0 not null,
  mhwslveh    number(6,0) default 0 not null,
  mhwslvet    number(6,0) default 0 not null,
  mhwslvea    number(6,0) default 0 not null,
  mhwsdsch    number(6,0) default 0 not null,
  mhwsdead    number(6,0) default 0 not null,
  mhwsinbd    number(8,0) default 0 not null,
  mhwsslbd    number(8,0) default 0 not null,
  mhwshlbd    number(8,0) default 0 not null,
  mhwstlbd    number(8,0) default 0 not null,
  mhwsawbd    number(8,0) default 0 not null,
  mhwssepb    number(8,0) default 0 not null,
  mhwssslb    number(8,0) default 0 not null,
  mhwsdscb    number(8,0) default 0 not null,
  mhwsdslb    number(8,0) default 0 not null,
  mhwsspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehwssa1 primary key( 
mhwsdate,
mhwsward)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
