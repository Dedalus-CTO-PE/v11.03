create table oprattaf
(
  opatdate    varchar2(6) default ' ' not null,
  opatdoct    varchar2(6) default ' ' not null,
  opatoper    number(6,0) default 0 not null,
  opatasst    number(6,0) default 0 not null,
  opatanae    number(6,0) default 0 not null,
  opatspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint opratta1 primary key( 
opatdate,
opatdoct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
