create table comerdaf
(
  cmrduniq    varchar2(20) default ' ' not null,
  cmrdprid    varchar2(8) default ' ' not null,
  cmrdwbid    varchar2(8) default ' ' not null,
  cmrdnval    number(18,4) default 0 not null,
  cmrddval    varchar2(8) default ' ' not null,
  cmrdvalu    varchar2(600) default ' ' not null,
  cmrdspar    varchar2(200) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint comerda1 primary key( 
cmrduniq,
cmrdprid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
