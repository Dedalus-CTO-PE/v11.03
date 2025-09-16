create table ihapasaf
(
  secode      varchar2(4) default ' ' not null,
  secnumb     varchar2(20) default ' ' not null,
  secuser     varchar2(35) default ' ' not null,
  secacct     varchar2(4) default ' ' not null,
  secnumb1    varchar2(10) default ' ' not null,
  secnumb2    varchar2(25) default ' ' not null,
  secdirct    number(2,0) default 0 not null,
  secmenu     varchar2(8) default ' ' not null,
  secprint    varchar2(2) default ' ' not null,
  secdept     varchar2(3) default ' ' not null,
  secmnnum    varchar2(3) default ' ' not null,
  secspare    varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ihapass1 primary key( 
secode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ihapass2 on ihapasaf
(
secuser,
secode
)
  tablespace pas_indx; 
